# Python 列表推导式

<https://docs.python.org/zh-cn/3/tutorial/datastructures.html#list-comprehensions>

列表推导式创建列表的方式更简洁。常见的用法为，对序列或可迭代对象中的每个元素应用某种操作，用生成的结果创建新的列表；或用满足特定条件的元素创建子序列。

例如，创建平方值的列表：

## 方式1

```python
squares = []
for x in range(10):
    squares.append(x**2)

print(squares)
# squares 被赋值为 [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
```

## 方式2

squares = list(map(lambda x: x**2, range(10)))

## 方式3

squares = [x**2 for x in range(10)]
