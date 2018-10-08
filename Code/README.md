## 接口调用与相关配置
### 接口调用
InfluxDB::getMe().write("influxdb","totalonline, value: %u", MonitorService::getInstance().totalOnline());

### 配置
<infulxdb>http://127.0.0.1:8086/write?db=name</influxdb>
如果有密码：
<infulxdb>http://127.0.0.1:8086/write?db=name&amp;u=YTL&amp;p=123456</influxdb>

Zebra::gloval[(char)*child->name] = buf
