# Java Spring 框架

## 三层架构

- Controller：控制层。接收前端发送的请求，对请求进行处理，并响应数据。
- Service：业务逻辑层。处理具体的业务逻辑。
- Dao：数据访问层(Data Access Object)，也称为持久层。负责数据访问操作，包括数据的增、删、改、查。

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

## 

- 阿里云 Java 8 Spring 脚手架：<https://start.aliyun.com/>
