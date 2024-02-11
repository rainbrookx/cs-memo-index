# Java 术语

> 来源：菜鸟教程：<https://www.runoob.com/>

## 基础术语

- 对象：对象是类的一个实例，有状态和行为。例如，一条狗是一个对象，它的状态有：颜色、名字、品种；行为有：摇尾巴、叫、吃等。
- 类：类是一个模板，它描述一类对象的行为和状态。
- 方法：方法就是行为，一个类可以有很多方法。逻辑运算、数据修改以及所有动作都是在方法中完成的。
- 实例变量：每个对象都有独特的实例变量，对象的状态由这些实例变量的值决定。

## 高级术语

- 多态
- 继承
- 封装
- 抽象
- 类
- 对象
- 实例
- 方法
- 重载

## 变量

- 局部变量：在方法、构造方法或者语句块中定义的变量被称为局部变量。变量声明和初始化都是在方法中，方法结束后，变量就会自动销毁。
- 成员变量：成员变量是定义在类中，方法体之外的变量。这种变量在创建对象的时候实例化。成员变量可以被类中方法、构造方法和特定类的语句块访问。
- 类变量：类变量也声明在类中，方法体之外，但必须声明为 static 类型。

---

- 局部变量
- 成员变量（非静态变量、实例变量）
- 类变量（静态变量）

## 创建对象

- 对象是根据类创建的。在Java中，使用关键字 new 来创建一个新的对象。创建对象需要以下三步：

- 声明：声明一个对象，包括对象名称和对象类型。
- 实例化：使用关键字 new 来创建一个对象。
- 初始化：使用 new 创建对象时，会调用构造方法初始化对象。

## 修饰符

> fys'note: 修饰符有点复杂，概念很多。

---

《Java 修饰符》 <https://www.runoob.com/java/java-modifier-types.html>

《Java protected 关键字详解》 <https://www.runoob.com/w3cnote/java-protected-keyword-detailed-explanation.html>

《Java常见的各种修饰符》 <https://blog.csdn.net/yh991314/article/details/108560584>

《Java中各类修饰符的使用总结（看完这篇就够了）》 <https://blog.csdn.net/u012723673/article/details/80613557>

## is-a 、have-a、和 like-a

《HAS-A, IS-A terminology in object oriented language》 <https://stackoverflow.com/questions/2218937/has-a-is-a-terminology-in-object-oriented-language>

> A House **is a** Building (inheritance);
>
> A House **has a** Room (composition);
>
> A House **has an** occupant (aggregation).
>
> ---
> A Car **has-a** Wheel.
>
> A Sparrow **is-a** Bird.

《is-a 、have-a、和 like-a的区别》 <https://www.cnblogs.com/dhm520/p/8423392.html>

## 泛型

```text
泛型标记符
E Element 集合元素
T Type Java类
K Key 键
V Value 值
N Number 数值类型
？ 表示不确定的Java类型
```

## 其他

- 线程池
- 连接池：C3P0、DBCP、Druid（阿里巴巴）、Hikari
