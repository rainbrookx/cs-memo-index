# Java 中 List、Integer[]、int[] 的相互转换

## int[] => Integer[]

```java
int[] data = {4, 5, 3, 6, 2, 5, 1};
Integer[] array = Arrays.stream(data).boxed().toArray(Integer[]::new);
```

## Integer[] => int[]

```java
Integer[] data = {4, 5, 3, 6, 2, 5, 1};
int[] array = Arrays.stream(data).mapToInt(Integer::valueOf).toArray();
```

## int[] => List

```java
int[] data = {4, 5, 3, 6, 2, 5, 1};
// toList() 返回的类型是不可变的 java.util.ImmutableCollections$ListN
List<Integer> list = Arrays.stream(data).boxed().toList();
ArrayList<Integer> arrayList = new ArrayList<>(list);
```

## List => int[]

```java
List<Integer> list = new ArrayList<>();
Collections.addAll(list, 4, 5, 3, 6, 2, 5, 1);
int[] array = list.stream().mapToInt(Integer::intValue).toArray();
```

## Integer[] => List

```java
Integer[] data = {4, 5, 3, 6, 2, 5, 1};
// asList() 返回的类型是不可变的 java.util.Arrays$ArrayList
List<Integer> list = Arrays.asList(data);
ArrayList<Integer> arrayList = new ArrayList<>(list);
```

## List => Integer[]

```java
List<Integer> list = new ArrayList<>();
Collections.addAll(list, 4, 5, 3, 6, 2, 5, 1);
Integer[] array = list.toArray(Integer[]::new);
```

## 备注

- 这里 toList()、asList() 返回的 List 都不能增删改
- 另外，List.of() 返回的 List 也不能增删改（java.util.ImmutableCollections$ListN）

## 文章推荐

[Java中List、Integer[]、int[] 的相互转换](https://zhuanlan.zhihu.com/p/196698839)

[List列表和int[]数组互转的方法汇总](https://blog.csdn.net/qq_41969790/article/details/107827028)
