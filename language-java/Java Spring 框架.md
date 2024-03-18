# Java Spring 框架

## bean的声明

> from 黑马程序员

前面我们提到IOC控制反转，就是将对象的控制权交给Spring的IOC容器，由IOC容器创建及管理对象。IOC容器创建的对象称为bean对象。

在之前的入门案例中，要把某个对象交给IOC容器管理，需要在类上添加一个注解：`@Component`

而Spring框架为了更好的标识web应用程序开发当中，bean对象到底归属于哪一层，又提供了@Component的衍生注解：

- `@Controller`    （标注在控制层类上）==> `Controller` 层 （一般用 `@RestController`注解）
- `@Service`          （标注在业务层类上）==> `Service` 层
- `@Repository`    （标注在数据访问层类上）==> `Dao` 层

## 注解

《JavaEE开发常用注解大全（注解开发大全）》 <https://blog.csdn.net/xtho62/article/details/108249932>

《JavaEE中的Spring 框架注解的用法浅析》 <https://juejin.cn/post/6844903520877936647>

《JavaEE Spring IoC注解》 <https://developer.aliyun.com/article/663366>

## 术语

- Web容器、Servlet容器、Spring容器、SpringMVC容器

## BUG

《springboot由3.1.5升级到3.2.0 报Invalid value type for attribute ‘factoryBeanObjectType‘: java.lang.String》 <https://blog.csdn.net/u011410254/article/details/134611035>

## Spring 邮件

《Spring Boot项目邮箱验证码功能的实现（以QQ邮箱为例）》 <https://blog.csdn.net/qq_47770103/article/details/119453585>

《Spring学习笔记之使用Spring发送Email》 <https://blog.csdn.net/CSDN_XueXiaoQiang/article/details/73730649>

《Spring Boot 发送邮件》 <https://springdoc.cn/spring-boot-email/>

## Spring 参数校验与参数异常全局处理

《java 校验注解之 @NotNull、@NotBlank、@NotEmpty》 <https://blog.csdn.net/dctCheng/article/details/116294394>

《@Pattern注解中常用的校验正则表达式笔记》 <https://blog.csdn.net/lk14478/article/details/111866635>

《使用Spring Validation优雅地校验参数》 <https://zhuanlan.zhihu.com/p/389615240>

《SpringBoot 如何进行参数校验，老鸟们都这么玩的！》 <https://developer.aliyun.com/article/786719>

《更简洁的参数校验，使用 SpringBoot Validation 对参数进行校验》 <https://cloud.tencent.com/developer/article/2207507>

《BindException、ConstraintViolationException、MethodArgumentNotValidException入参验证异常分析和全局异常处理解决方法》 <https://blog.csdn.net/qq_43409401/article/details/116017177>

## Spring 自定义异常与自定义异常全局处理

《Spring Boot项目优雅的全局异常处理方式（全网最新）》 <https://blog.csdn.net/qq_41107231/article/details/115874974>

《SpringBoot实现自定义异常+全局异常处理（多个异常处理类catch顺序）【详细步骤+图解】》 <https://blog.csdn.net/qq_44901285/article/details/115795626>

## Spring Security

《springboot项目引入security后请求报401错误的坑》 <https://www.cnblogs.com/mydesky2012/p/14539755.html>

《spring security 明明放行了请求路径但是一直报 401 unauthorized》 <https://blog.csdn.net/qq_45691577/article/details/129349297>

《Spring Security - Samples》 <https://spring.io/projects/spring-security#samples>

### BCrypt

## 其他

- 阿里云 Java 8 Spring 脚手架：<https://start.aliyun.com/>
- 《玩转Spring中强大的spel表达式！》 <https://zhuanlan.zhihu.com/p/174786047>
- 《定时任务的cron表达式》（Spring Task、Quartz、xxl-job、Elastic-job） <https://zhuanlan.zhihu.com/p/163050320>
