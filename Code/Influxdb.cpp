#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>

#include "zCommon.h"
#include "InfluxDB.h"

bool InfluxDB::write(std::string database, const char* fmt, ...)
{
    bool ret = false;
    va_list va;
    va_start(va,fmt);
    
    std::string influxdb = Zebra::global[database];
    if(!influxdb.empty())
    {
      try
      {
          char seriesdata[1024]="";
          vsnprintf(seriesdata, sizeof(seriesdata), fmt, va);
          
          using namespace curlpp::options;
          curlpp::Easy request;
          request.setOpt<Url>(influxdb);
          request.setOpt<Post>(true);
          request.setOpt<PostFileds>(seriesdata);
          request.perform();
          ret = true;
      }
      catch (curlpp::RuntimeError &e)
      {
          Zebra::logger->serror("[时间序列] 写入RuntimeError: %s", e.what());
      }
      catch (curlpp::LogicError &e)
      {
          Zebra::logger->serror("[时间序列] 写入MonitorError: %s", e.what());
      }
    }
    
    va_end(va);
    return ret;
}
