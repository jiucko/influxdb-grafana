#ifndef _MONITOR_INFLUXDB_H
#define _MONITOR_INFLUXDB_H

#include "zSingleton.h"

class InfluxDB : public Singleton<INfluxDB>
{
    public:
        bool write(std::string database, const char* fmt, ...);
};

#endif
