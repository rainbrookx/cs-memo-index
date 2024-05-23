# JavaSE 原生特性

## JAR

[java 读取jar包中资源文件 获取jar包中的资源文件](https://blog.51cto.com/u_16213630/7127017)

## Java Stream

[深入 Java Stream：高级流操作和技巧](https://blog.csdn.net/Mrxiao_bo/article/details/134154466)

[告别 For循环！用 Java Stream优雅处理集合](https://zhuanlan.zhihu.com/p/141588699)

[java8 .stream().anyMatch / allMatch / noneMatch用法](https://blog.csdn.net/weixin_44958006/article/details/108112064)

[Stream之Collectors.groupingBy（分组）的使用](https://blog.csdn.net/m0_46434219/article/details/109068536)

[java8 Stream 列表分组、分区，按列表元素的某个属性分组](https://blog.csdn.net/qq_31815507/article/details/111560690)

[Java8 Stream groupingBy对List进行分组](https://blog.csdn.net/weixin_41835612/article/details/83687088)

[Java8 Stream（11）List转Map](https://blog.csdn.net/winterking3/article/details/116457573)

[Java8 Stream（8）List集合统计 求和 最大值 最小值 平均值](https://blog.csdn.net/winterking3/article/details/116288311)

[Java中List、Integer[]、int[] 的相互转换](https://zhuanlan.zhihu.com/p/196698839)

```java
int[] data = {4, 5, 3, 6, 2, 5, 1};
List<Integer> list1 = Arrays.stream(data).boxed().collect(Collectors.toList());
```

## Java 函数式接口 @FunctionalInterface

[JDK8新特性：函数式接口@FunctionalInterface的使用说明](https://blog.csdn.net/aitangyong/article/details/54137067)

## Java 枚举

[Java 枚举(enum) 详解7种常见的用法](https://blog.csdn.net/qq_27093465/article/details/52180865)

## Java 数字

[Java保留2位小数（六种方法）](https://blog.csdn.net/ay7788/article/details/125873135)

[java保留两位小数4种方法](https://www.cnblogs.com/Renyi-Fan/p/7643764.html)

## Java 类路径（classpath）

[Java获取类路径的方式](https://blog.csdn.net/An1090239782/article/details/82590011)

[Java如何获取当前的jar包路径以及如何读取jar包中的资源](https://www.cnblogs.com/zeciiii/p/4178824.html)

[springboot项目中，读取 resources 目录下的文件的几种方式](https://zhuanlan.zhihu.com/p/618466727)

## Java、MySQL 补全数据

[统计从当月起前6个月的数据及数据补全的Java端做法和SQL做法](https://blog.csdn.net/weixin_40598838/article/details/110860881)

[Java stream 结合业务 常用方法总结](https://blog.csdn.net/weixin_41934575/article/details/125169187)

[java补全数据库查询统计数据缺失的日期](https://blog.csdn.net/qq_36881887/article/details/136060630)

[统计年，月，日，java补充无的数据](https://blog.csdn.net/qq_44982110/article/details/131654425)

[Java补全数据库查询统计数据缺失的日期](https://blog.csdn.net/m4330187/article/details/106069176/)

- 对数据库 group by 后的查询结果补全数据，可以在 Java 代码中使用快慢指针的算法

## Java 特殊功能模块

[Java 中 RMI、JNDI、LADP、JRMP、JMX、JMS那些事儿（上）](https://cloud.tencent.com/developer/article/1554406)

[Java Web Start 指南](https://blog.csdn.net/allway2/article/details/126178773)

[Open Web Start](https://openwebstart.com/)

[Java Web Start](https://docs.oracle.com/javase/8/docs/technotes/guides/javaws/)

## Java 模块

[模块](https://www.liaoxuefeng.com/wiki/1252599548343744/1281795926523938)

[【Java 基础篇】Java 模块化详解](https://blog.csdn.net/qq_21484461/article/details/131421855)

## Java Properties

Properties 读取的文件的后缀不需要是 properties，甚至可以不要后缀，没有转义的空格是不会被读取的 [Class Properties](https://docs.oracle.com/en/java/javase/22/docs/api/java.base/java/util/Properties.html)
