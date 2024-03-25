# EasyExcel

《EasyExcel 常见问题》 <https://easyexcel.opensource.alibaba.com/qa/>

《直接使用JDK17导致EasyExcel无法使用的问题》 <https://blog.csdn.net/weixin_42792301/article/details/121456156>

```xml
<dependency>
    <groupId>org.burningwave</groupId>
    <artifactId>core</artifactId>
    <version>9.5.2</version>
</dependency>
```

在代码中添加一行，用于引入所有模块

```java
StaticComponentContainer.Modules.exportAllToAll();
```

《EasyExcel对Excel文件的解析过程》 <https://www.cnblogs.com/gwtjava/p/11937777.html>

《easyexcel的源码简单分析》 <https://blog.csdn.net/baidu_21349635/article/details/106158100>

《EasyExcel与@Accessors(chain = true)不兼容分析》 <https://blog.csdn.net/qq_28036249/article/details/108035369>

《【lombok】从easyExcel read不到值到cglib @Accessors(chain = true)隐藏的大坑》 <https://blog.csdn.net/qq_36268103/article/details/134954322>
