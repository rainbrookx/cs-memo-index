# Spring

## bean的声明

> from 黑马程序员

前面我们提到IOC控制反转，就是将对象的控制权交给Spring的IOC容器，由IOC容器创建及管理对象。IOC容器创建的对象称为bean对象。

在之前的入门案例中，要把某个对象交给IOC容器管理，需要在类上添加一个注解：`@Component`

而Spring框架为了更好的标识web应用程序开发当中，bean对象到底归属于哪一层，又提供了@Component的衍生注解：

- `@Controller`    （标注在控制层类上）==> `Controller` 层 （一般用 `@RestController`注解）
- `@Service`          （标注在业务层类上）==> `Service` 层
- `@Repository`    （标注在数据访问层类上）==> `Dao` 层

## 注解

[JavaEE开发常用注解大全（注解开发大全）](https://blog.csdn.net/xtho62/article/details/108249932)

[JavaEE中的Spring 框架注解的用法浅析](https://juejin.cn/post/6844903520877936647)

[JavaEE Spring IoC注解](https://developer.aliyun.com/article/663366)

## 术语

- Web容器、Servlet容器、Spring容器、SpringMVC容器

## BUG

[springboot由3.1.5升级到3.2.0 报Invalid value type for attribute ‘factoryBeanObjectType‘: java.lang.String](https://blog.csdn.net/u011410254/article/details/134611035)

## 创建 Bean、IOC/DI

[Spring框架|通过工厂创建Bean的三种方式](https://blog.csdn.net/weixin_43691058/article/details/105010733)

[扯一把 Spring 的三种注入方式，到底哪种注入方式最佳？](https://blog.csdn.net/u012702547/article/details/120905964)

[这6种 Spring 依赖注入方式，你都会吗？](https://developer.aliyun.com/article/1348301)

## Spring 数据库

[spring: 使用嵌入式数据源 EmbeddedDatabaseBuilder](https://blog.csdn.net/weixin_33975951/article/details/85965345)

## Spring 邮件

[Spring Boot项目邮箱验证码功能的实现（以QQ邮箱为例）](https://blog.csdn.net/qq_47770103/article/details/119453585)

[Spring学习笔记之使用Spring发送Email](https://blog.csdn.net/CSDN_XueXiaoQiang/article/details/73730649)

[Spring Boot 发送邮件](https://springdoc.cn/spring-boot-email/)

## Spring 表单、文件参数

[Springboot接收 Form 表单数据](https://www.cnblogs.com/wjs2019/p/15946476.html)

[Springboot接受文件与发送文件](https://blog.csdn.net/qq_57390446/article/details/127797971)

[如何用SpringBoot框架来接收multipart/form-data文件](https://blog.csdn.net/linzhiqiang0316/article/details/77016997)

[使用多个 @RequestBody 接收参数传递给 Controller](https://blog.csdn.net/qq_53316135/article/details/122195566)

> 常规情况下， 因为 request 请求的 body 只能读取一次，我们使用 @RequestBody 只能解析一次，如果在方法参数中增加第二个 @RequestBody 注解的话，stream 流已经关闭，无法读取，返回 400 错误

## Spring 参数校验与参数异常全局处理

[java 校验注解之 @NotNull、@NotBlank、@NotEmpty](https://blog.csdn.net/dctCheng/article/details/116294394)

[@Pattern注解中常用的校验正则表达式笔记](https://blog.csdn.net/lk14478/article/details/111866635)

[使用Spring Validation优雅地校验参数](https://zhuanlan.zhihu.com/p/389615240)

[SpringBoot 如何进行参数校验，老鸟们都这么玩的！](https://developer.aliyun.com/article/786719)

[更简洁的参数校验，使用 SpringBoot Validation 对参数进行校验](https://cloud.tencent.com/developer/article/2207507)

[@Validated注解不生效问题汇总大全](https://blog.csdn.net/qiuxuezhe_fei/article/details/128197714)

[BindException、ConstraintViolationException、MethodArgumentNotValidException入参验证异常分析和全局异常处理解决方法](https://blog.csdn.net/qq_43409401/article/details/116017177)

【推荐】[BindException、ConstraintViolationException、MethodArgumentNotValidException入参验证异常分析和全局异常处理解决方法](https://blog.csdn.net/qq_43409401/article/details/116017177)

## Spring 自定义异常与自定义异常全局处理

[Spring Boot项目优雅的全局异常处理方式（全网最新）](https://blog.csdn.net/qq_41107231/article/details/115874974)

[SpringBoot实现自定义异常+全局异常处理（多个异常处理类catch顺序）【详细步骤+图解】](https://blog.csdn.net/qq_44901285/article/details/115795626)

[springboot对异常信息的统一处理(@ExceptionHandler与@RestControllerAdvice那点事情)](https://blog.csdn.net/xueyijin/article/details/122527688)

[Spring Boot 统一参数校验、统一异常、统一响应，这才是优雅的处理方式！](https://segmentfault.com/a/1190000042194671)

## Spring Security

[springboot项目引入security后请求报401错误的坑](https://www.cnblogs.com/mydesky2012/p/14539755.html)

[spring security 明明放行了请求路径但是一直报 401 unauthorized](https://blog.csdn.net/qq_45691577/article/details/129349297)

[Spring Security - Samples](https://spring.io/projects/spring-security#samples)

[spring security中的密码加密：BCrypt算法工具类BCryptPasswordEncoder](https://blog.csdn.net/chushiyan/article/details/103773679)

[Spring Security（新版本）实现权限认证与授权](https://blog.csdn.net/weixin_46073538/article/details/128641746)

【推荐】[SpringSecurity默认用户名密码从哪来，为什么要写UserDetails...](https://blog.csdn.net/weixin_46827107/article/details/120215626)

[Spring Security最简单全面教程（带Demo）](https://blog.csdn.net/qq_37771475/article/details/86153799)

[SpringSecurity基本配置](https://blog.csdn.net/qq_40369277/article/details/133218894)

[springboot整合springsecurity最完整，只看这一篇就够了](https://www.cnblogs.com/qiantao/p/14605154.html)

## Spring 跨域

[SpringBoot 中实现跨域的5种方式](https://blog.csdn.net/shaoming314/article/details/113937467)

[【译】3种解决CORS错误的方式与Access-Control-Allow-Origin的作用原理](https://segmentfault.com/a/1190000022506474)

## Spring 配置文件内容加密

[SpringBoot 配置文件/属性ENC加密](https://www.cnblogs.com/ruhuanxingyun/p/12152579.html)

[给yml配置文件的密码加密(SpringBoot)](https://blog.csdn.net/m0_37929837/article/details/121942265)

## Spring 底层知识

[一文带你搞懂Spring MVC和servlet（面试必备）](https://blog.csdn.net/qq_36908783/article/details/105816074)

## Spring 源码解析

[深入Spring，从源码开始！](https://github.com/xuchengsheng/spring-reading)

## 其他

[阿里云 Java 8 Spring 脚手架](https://start.aliyun.com/)

[玩转Spring中强大的spel表达式！](https://zhuanlan.zhihu.com/p/174786047)

[定时任务的cron表达式](https://zhuanlan.zhihu.com/p/163050320)（Spring Task、Quartz、xxl-job、Elastic-job）

[Ant风格的路径模式](https://blog.csdn.net/islautao/article/details/131503390)

[Converting a Spring Boot JAR Application to a WAR](https://spring.io/guides/gs/convert-jar-to-war)

[springMvc的web.xml中的classpath指项目中的哪个路径](https://blog.csdn.net/elice_/article/details/87857966)

[Model、ModelMap和ModelAndView的使用详解](https://zhuanlan.zhihu.com/p/424097568)

[SpringBoot2.x基础篇：将静态资源打包为WebJars](https://zhuanlan.zhihu.com/p/156053517)
