# JavaSE 特性 - Stream

- 创建 Stream `Arrays.asList()`、`Arrays.stream()`、`Stream.of()`。[10 Ways to Create a Stream in Java](https://www.geeksforgeeks.org/10-ways-to-create-a-stream-in-java/)

- 中间操作（Intermediate Operations）：filter, map, flatMap, limit, peek, skip, distinct, sorted

- 终端操作（Terminal Operations）：forEach, toArray, reduce, collect, min, max, count, anyMatch, allMatch, noneMatch, findFirst, findAny

- 终端操作中，min、max、sum、average、summaryStatistics 等只有 IntStream 等数字流才能使用

- boxed：将 `IntStream` 封装成 `Stream<Integer>`；mapToInt：将 `Stream<T>` 转换成 `IntStream`

- Collectors.mapping、Collectors.joining

- 为函数式编程而生。对 Stream 的任何修改都不会修改背后的数据源，比如对 Stream 执行过滤操作并不会删除被过滤的元素，而是会产生一个不包含被过滤元素的新 Stream。

```java
int[] data = {4, 5, 3, 6, 2, 5, 1};
List<Integer> list1 = Arrays.stream(data).boxed().toList();
```

## 文章推荐

[深入 Java Stream：高级流操作和技巧](https://blog.csdn.net/Mrxiao_bo/article/details/134154466)

（高级用法）[Stream之Collectors.groupingBy（分组）的使用](https://blog.csdn.net/m0_46434219/article/details/109068536)
