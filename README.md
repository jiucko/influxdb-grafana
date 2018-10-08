# influxdb-grafana
使用influxdb和grafana搭建服务器监控系统

## influxdb
 influxdb 是目前比较优秀的时间序列数据库。对于时间序列数据库，最简单的定义是数据格式中包含Timestamp字段的数据，比如一个时间的温度，CPU的使用率等。基本上所有数据都可以添加一个Timestamp的字段，时间序列数据更重要的一点是可以定义如何去查询过滤，计算数据等。
#### influxdb 是一个开源的分布式时序，时间和指标数据库，使用go进行编写，无需外部依赖。
### 它的三大特性
1. 时序性（Time Series）: 与时间相关的函数的灵活使用（如最大，最小，求和等）；
2. 度量（Metrics）: 对实时大量数据进行计算；
3. 事件（Event）: 支持任意的事件数据。
#### 同时，它有以下几个特点
1. schemaless(无结构)：可以有任意数量的列
2. min, max, sum, count, mean, median 一系列函数，方便统计
3. Native HTTP API, 内置http支持，使用http读写
4. Powerful Query Language 类似sql
5. Built-in Explorer 自带管理工具
### influxdb安装
[influxdb安装](https://www.jianshu.com/p/d2935e99006e)

