# Spring

## 注解

[JavaEE开发常用注解大全（注解开发大全）](https://blog.csdn.net/xtho62/article/details/108249932)

[JavaEE中的Spring 框架注解的用法浅析](https://juejin.cn/post/6844903520877936647)

[JavaEE Spring IoC注解](https://developer.aliyun.com/article/663366)

## BUG

[springboot由3.1.5升级到3.2.0 报Invalid value type for attribute ‘factoryBeanObjectType‘: java.lang.String](https://blog.csdn.net/u011410254/article/details/134611035)

## Spring 数据库

[spring: 使用嵌入式数据源 EmbeddedDatabaseBuilder](https://blog.csdn.net/weixin_33975951/article/details/85965345)

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

## Spring MVC

- 视图解析器前后缀

## Spring MVC 响应拦截

> 用途：自定义异常并全局处理异常；

- 实现 `HandlerExceptionResolver` 接口，或者配置它的实现类
- 继承 `ResponseEntityExceptionHandler` 抽象类
- 使用 `@ControllerAdvice` + `@ExceptionHandler` 注解
- 使用 `@RestControllerAdvice` + `@ExceptionHandler` 注解
- 使用 `ResponseStatusException` 直接抛出带有状态码的异常，不是全局捕获
- 在 `controller层` 中使用 `@ExceptionHandler`
- 使用 AOP，以 `controller层` 所有 API 接口为切点
- 配置 `application.properties`
- 其他：使用 `@RestControllerAdvice` + 实现 `ResponseBodyAdvice` 接口，完成统一响应体的封装，单有时候不需要封装，所以可以设置不开启统一响应的自定义注解

【推荐】[Spring Boot 统一参数校验、统一异常、统一响应，这才是优雅的处理方式！](https://segmentfault.com/a/1190000042194671)

## Spring Security

- BCrypt
- JWT + RSA 分布式认证（JWT：JSON Web Tokens）
- CSRF：Cross-Site Request Forgery，跨站请求伪造
- CORS：Cross-Origin Resource Sharing，跨源资源共享，跨域
- OAuth 2.0
- SSO：Single sign-on，单点登录

## Spring 配置文件内容加密

[SpringBoot 配置文件/属性ENC加密](https://www.cnblogs.com/ruhuanxingyun/p/12152579.html)

[给yml配置文件的密码加密(SpringBoot)](https://blog.csdn.net/m0_37929837/article/details/121942265)

## Spring 底层知识

[一文带你搞懂Spring MVC和servlet（面试必备）](https://blog.csdn.net/qq_36908783/article/details/105816074)

## Spring 源码解析

[深入Spring，从源码开始！](https://github.com/xuchengsheng/spring-reading)

## 其他

- Spring EL：SpEL，Spring Expression Language

[阿里云 Java 8 Spring 脚手架](https://start.aliyun.com/)

[玩转Spring中强大的spel表达式！](https://zhuanlan.zhihu.com/p/174786047)

[定时任务的cron表达式](https://zhuanlan.zhihu.com/p/163050320)（Spring Task、Quartz、xxl-job、Elastic-job）

[Ant风格的路径模式](https://blog.csdn.net/islautao/article/details/131503390)

[Converting a Spring Boot JAR Application to a WAR](https://spring.io/guides/gs/convert-jar-to-war)

[springMvc的web.xml中的classpath指项目中的哪个路径](https://blog.csdn.net/elice_/article/details/87857966)

[Model、ModelMap和ModelAndView的使用详解](https://zhuanlan.zhihu.com/p/424097568)

[SpringBoot2.x基础篇：将静态资源打包为WebJars](https://zhuanlan.zhihu.com/p/156053517)
