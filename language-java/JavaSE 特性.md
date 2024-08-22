# JavaSE 特性

## 静态导入（Static Import）

```java
import static java.lang.Math.*;
```

> Static import makes the program unreadable and unmaintainable if you are reusing this feature, especially in large codebases or projects with multiple developers.

## 修饰符

- 访问权限修饰符：default、private、public、protected
- 非访问修饰符：
  - static：用来创建类方法和类变量。
  - final：用来修饰类、方法和变量，final 修饰的类不能够被继承，修饰的方法不能被继承类重新定义，修饰的变量为常量，是不可修改的。
  - abstract：用来创建抽象类和抽象方法。
  - synchronized：用于多线程的同步。
  - volatile：修饰的成员变量在每次被线程访问时，都强制从共享内存中重新读取该成员变量的值。而且，当成员变量发生变化时，会强制线程将变化值回写到共享内存。这样在任何时刻，两个不同的线程总是看到某个成员变量的同一个值。
  - transient：序列化的对象包含被 transient 修饰的实例变量时，Java 虚拟机(JVM)跳过该特定的变量。

[Java 修饰符](https://www.runoob.com/java/java-modifier-types.html)

## 泛型

```text
泛型标记符（这只是通常的习惯）
E Element 集合元素
T Type Java类
K Key 键
V Value 值
N Number 数值类型
？ 表示不确定的Java类型
```

## JAR

[java 读取jar包中资源文件 获取jar包中的资源文件](https://blog.51cto.com/u_16213630/7127017)

## Java 函数式接口 @FunctionalInterface

[JDK8新特性：函数式接口@FunctionalInterface的使用说明](https://blog.csdn.net/aitangyong/article/details/54137067)

## Java 数字

[Java保留2位小数（六种方法）](https://blog.csdn.net/ay7788/article/details/125873135)

[java保留两位小数4种方法](https://www.cnblogs.com/Renyi-Fan/p/7643764.html)

## Java BigDecimal

[聊一聊BigDecimal使用时的陷阱](https://mp.weixin.qq.com/s?__biz=MzkyNzYzMTY0MA==&mid=2247483869&idx=1&sn=0313a7d9bfae7c636031a3aded4a3263)

[争论不休的一个话题：金额到底是用Long还是BigDecimal？](https://www.cnblogs.com/coderacademy/p/18142867)

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

[【Java 模块系统】module-info 模块描述符](https://blog.csdn.net/qq_60914456/article/details/126206715)

## Java Properties

Properties 读取的文件的后缀不需要是 properties，甚至可以不要后缀，没有转义的空格是不会被读取的 [Class Properties](https://docs.oracle.com/en/java/javase/22/docs/api/java.base/java/util/Properties.html)

## Java 的奇葩

[在java中为什么变量1000 == 1000 返回false，但是100==100返回true？](https://www.zhihu.com/question/660482096)

[Java 10大骚操作写法，亮瞎boss的双眼！](https://blog.csdn.net/Java0258/article/details/106445886)
