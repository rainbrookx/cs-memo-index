# JavaSE 特性 - enum

> 注意：关于枚举与各种框架的结合，看框架笔记中的内容，这里只是对 JavaSE 原生特性的总结

## 最基础的用法

```java
enum Color {
    RED, GREEN, BLUE;
}
```

## enum 和 class（普通类）

- enum 可以有成员变量和成员方法
- enum 不能 new 出实例，但是`枚举值`就相当于实例，可以调用成员变量和成员方法
- enum 可以有 static 静态变量和静态方法
- enum 构造器 和 getter 方法，但构造器中参数不能有 setter 方法
- enum 构造器必须是 private 修饰（不写默认 private ），调用构造器不使用构造器的方法名，而是直接在`枚举值`后面加括号
- enum 本质是 `public final class E extends Enum<E> {}`
- `java.util.EnumSet` 和 `java.util.EnumMap` 是两个枚举集合。EnumSet 保证集合中的元素不重复；EnumMap 中的 key 是 enum 类型，而 value 则可以是任意类型。
- `enum` 关键字和 `java.lang.Enum` 类

```java
// enum 构造器 和 getter 方法
import lombok.Getter;

@Getter
enum Gender {
    MALE("男", 1),
    FEMALE("女", 0),
    ;

    Gender(String desc, int code) {
    }
}
```

## 文章推荐

（业务）[Java之枚举(enum)--使用/教程/实例](https://knife.blog.csdn.net/article/details/121003741)

（语法 - 精简版）[【小家Java】深入理解Java枚举类型(enum)及7种常见的用法（含EnumMap和EnumSet）](https://cloud.tencent.com/developer/article/1497820)

（语法 - 详细版）[Java 枚举(enum) 详解7种常见的用法](https://blog.csdn.net/qq_27093465/article/details/52180865)
