# Java 依赖、框架、库、jar包、SDK

## 综合工具、有意思的工具

- `Hutool`：A set of tools that keep Java sweet. 这个工具箱非常有意思！<https://hutool.cn/>
- `lombok`：用 `@Data`、`@AllArgsConstructor`、`@NoArgsConstructor` 等注解简化 `JavaBean` 代码
- `Google Guava`：
- `commons-lang3`
- `Apache Commons`

## HTML、XML、JSON 解析

- `Jsoup`：HTML 解析
- `dom4j`：XML 解析
- `XPath`：获得 XML DOM 节点路径（org.jaxen）
- `Gson`：JSON 解析
- `Fastjson`：比 `Gson` 更简单

## Java 与其他编程语言交互

- `Jython`：Java 调用 Python

## 测试

- `JUnit`：`JUnit4` 和 `JUnit5` 不太一样（不兼容）

## 日志

- `LogBack`：实现`slf4j-api`接口规范的日志框架
- `slf4j-api`：规范接口，Simple Logging Facade for Java

## 邮箱

## 数据库

- `MyBatis`：
- 数据库连接池：C3P0、DBCP、Druid（阿里巴巴）、Hikari
- `Apache Commons DbUtils`：[DBUtils 教程](https://www.w3ccoo.com/apache_dbutils/index.html)

## GUI

- `swing`：Java 自带的
- `JavaFX`：【SDK】OpenJFX-SDK（JavaFX-SDK）
- `JFormDesigner`：【SDK】其中 `FlatLaf` 为 swing 风格，比较常用

## Web 网站

- `JavaEE`：常用 `JSP`、`Servlet` 和 `JSTL(taglibs)`，其中，`JSP` 和 `Servlet` 在 `tomcat` 服务器程序安装包的 `lib` 文件夹中也有
- `Jakarta EE`：`JavaEE` 最新的、高级版，依赖比 `Spring` 少得多，适合 DIY 各种第三方依赖
- `Spring` 和 `Spring Boot`：非常易用的框架，且基于 `JavaEE` 和 `Jakarta EE`，也就是说，两者可以混用，且不需要第三方依赖就可以实现大部分的功能（`Spring` 提供了很多工具）。同时，`Spring` 除了做 `Web 后端` 还可以实现其他业务，甚至可以做 `GUI程序` [Springboot整合Swing制作简单GUI客户端项目记录](https://segmentfault.com/a/1190000022839812)

## IO流、输入、输出

- `commons-io`：输入输出框架

## 图表制作

- `XChart`：制作的图表优美、易用
- `JFreeChart`：个人觉得没有 `XChart` 好看，好像要搭配 `JCommon`。<https://www.jfree.org/> 官网还提供了，`JFreeSVG` 和 `FXGraphics2D` 等，这还是比较有意思

## 视频、音频

- `VLC`：VLC 播放器提供的播放工具

## 其他

- `PageHelper`：MyBatis 数据库查询分页插件
- `JJWT`：JWT 令牌
- `joda-time`

## HTTP

- `Google HTTP Client Library For Java`：HTTP 协议的网络编程，包含了 JSON 的处理
- `Apache HttpClient`：

## Excel

- `EasyExcel`
- `Apache POI`

## 安全

- `Apache Shiro`

## 深拷贝

[《对象拷贝之Apache BeanUtils、Spring的BeanUtils、Mapstruct、BeanCopier、PropertieyUtils对比（深拷贝）》](https://blog.csdn.net/ZYC88888/article/details/109681423)
