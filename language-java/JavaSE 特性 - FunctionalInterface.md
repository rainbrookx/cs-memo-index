# JavaSE 特性 - FunctionalInterface

## FunctionalInterface

FunctionalInterface 是一个只有一个抽象方法的接口，因此它可以被用作函数式接口。这个特性在 Java 8 中被引入，它允许你将行为作为参数传递给方法，或者将行为作为对象在程序中传递。

要创建一个函数式接口，你需要遵循以下规则：

- 接口中只能有一个抽象方法。
- 可以有多个默认方法。
- 可以有多个静态方法。

## Lambda 和 method reference（方法引用）

> 函数式接口与 Lambda 表达式的联系：Lambda 是实现函数式接口的一个快捷方式，可以作为函数式接口的一个实例。

### 实现 JavaSE 提供的 FunctionalInterface

```java
import java.util.Comparator;
Comparator<String> stringComparator = (String first, String second) -> Integer.compare(first.length(), second.length());
```

### 自定义的 FunctionalInterface - 无参数，无返回值

```java
// MyInterface.java
@FunctionalInterface
public interface MyInterface {
    void myFunction();
}
```

```java
// MyInterfaceTest.java
MyInterface my = () -> {
    for (int i = 0; i < 5; i++) {
        System.out.println(i);
    }
};

my.myFunction();
```

### 自定义 FunctionalInterface - 有参数，无返回值

```java
// MyInterface.java
@FunctionalInterface
public interface MyInterface {
    void myFunction(String name);
}
```

```java
// MyInterfaceTest.java
MyInterface my = (name) -> {
    System.out.println(name);
};

// 这条语句和上面的语句是等价的（method reference，方法引用）
MyInterface my2 = System.out::println;

my.myFunction("Rain Brook");
my2.myFunction("Rain Brook - 2");
```

### 自定义 FunctionalInterface - 有参数，有返回值

```java
// MyInterface.java
@FunctionalInterface
public interface MyInterface {
    Integer myFunction(Integer num);
}
```

```java
// MyInterfaceTest.java
MyInterface my = (num) -> {
    return num * 2;
};

MyInterface my2 = (num) -> num * 2;

Integer result = my.myFunction(6);
Integer result2 = my2.myFunction(6);
```

## 没有读完

【构造方法引用！】[Java Lambda 表达式（又名闭包、Closure、匿名函数）笔记](https://segmentfault.com/a/1190000011842104)

[JDK8新特性：函数式接口@FunctionalInterface的使用说明](https://blog.csdn.net/aitangyong/article/details/54137067)

[Java8函数式接口与Lambda表达式](https://blog.csdn.net/justloveyou_/article/details/89066782)

[秒懂Java之方法引用（method reference）详解](https://blog.csdn.net/ShuSheng0007/article/details/107562812)
