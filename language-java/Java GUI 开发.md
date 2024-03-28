# Java GUI 开发

- Java Swing
- JavaFX（有点意思）

## JComboBox

[《How to add an object to a JComboBox in Java》](https://stackhowto.com/how-to-add-an-object-to-a-jcombobox-in-java/)

[《Java Swing How to - Add custom Java objects to JComboBox》](http://www.java2s.com/Tutorials/Java/Swing_How_to/JComboBox/Add_custom_Java_objects_to_JComboBox.htm)

[《JComboBox basic tutorial and examples》](https://www.codejava.net/java-se/swing/jcombobox-basic-tutorial-and-examples)

> fys'note: 直接在类中重写 toString() 只能用于 JComboBox ，这种方式存在缺陷。所以，改为，在 new 对象的时候，重写 toString()

## Swing setVisible() 放在最后

[《java Swing 中setVisible()的真正作用 及 位置问题》](https://blog.csdn.net/zf2015800505/article/details/84573249)

> fys'note: 2023.5.5 由于把中 setVisible() 放在前面，导致有时候有组件，有时候没组件，浪费了至少30min！！！

## 事件、监听器

[《ActionListener 的三种实现方法》](https://my.oschina.net/MissLee/blog/203949)

## SwingWorker

[《SwingWorker应用详解》](https://www.cnblogs.com/monopole/p/7832840.html)

## invokeLater() 和 invokeAndWait()

> `SwingUtilities 类` 和 `EventQueue 类` 都有 `invokeLater()` 和 `invokeAndWait()` 方法

[《Java SwingUtilities.invokeLater(new Runnable（）{})方法详解》](https://blog.csdn.net/m0_57613893/article/details/122120873)

[《Java swing 关于SwingUtilities.invokeLater()的误解及深入原理（转自网页）》](https://www.cnblogs.com/chuimber/p/16482293.html)

[《SwingUtilities的invokeLater和invokeAndWait》](https://www.jianshu.com/p/54d2d7c6b201)

[《SwingUtilities提供两个方法》](https://www.51cto.com/article/136886.html)

## Swing 技巧

[《Java Swing去掉按钮（JButton）中文字周围的虚线框》](https://blog.csdn.net/ygl19920119/article/details/88990967)

```Java
button.setFocusPainted(false);
```

## JavaFX（有点意思）

> fys'note: JavaFX 也是 Java 官方提供的技术。用 XML、CSS 文件设置 GUI
