# EasyExcel

> 文档的代码示例，非常简短、明了，建议看文档。

**参考**：

EasyExcel：<https://easyexcel.opensource.alibaba.com/>

[EasyExcel 常见问题](https://easyexcel.opensource.alibaba.com/qa/)

## EasyExcel 与 Lombok

> EasyExcel 与 `@Accessors(chain = true)` 注解不兼容，因为 EasyExcel 只能使用返回值是 `void` 的 `Setters`。

**参考**：

[EasyExcel与@Accessors(chain = true)不兼容分析](https://blog.csdn.net/qq_28036249/article/details/108035369)

[【lombok】从easyExcel read不到值到cglib @Accessors(chain = true)隐藏的大坑](https://blog.csdn.net/qq_36268103/article/details/134954322)

## EasyExcel 与 Java 枚举、转换器

> 需要使用转换器，要实现 EasyExcel 提供的 Converter 接口，注意不要用成其他框架同名的接口。转换器的功能不仅仅如此，具体看文档。

## EasyExcel 与 JDK17 不兼容的解决方法

```xml
<dependency>
    <groupId>org.burningwave</groupId>
    <artifactId>core</artifactId>
    <version>9.5.2</version>
</dependency>
```

> 在代码中添加一行，用于引入所有模块

```java
StaticComponentContainer.Modules.exportAllToAll();
```

**参考**：

[直接使用JDK17导致EasyExcel无法使用的问题](https://blog.csdn.net/weixin_42792301/article/details/121456156)

## EasyExcel 源码分析

[EasyExcel对Excel文件的解析过程](https://www.cnblogs.com/gwtjava/p/11937777.html)

[easyexcel的源码简单分析](https://blog.csdn.net/baidu_21349635/article/details/106158100)
