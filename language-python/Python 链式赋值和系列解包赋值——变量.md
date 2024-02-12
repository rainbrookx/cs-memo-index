# Python 链式赋值和序列解包赋值——变量

> 作者：吃鱼喵了个鱼
>
> 链接：<https://www.jianshu.com/p/69d80eae4175>

1. 链式赋值：同一个对象赋给多个变量
如：`x=y=123` 相当于 `x=123,y=123`

2. 序列解包赋值：序列数据（对象）赋值给对应相同个数的变量
如：`a,b,c=4,5,6` 相当于 `a=4;b=5;c=6`，注意 `a,b,c=4,5,6` 本质上是元组的解包赋值

通常使用系列解包赋值实现变量互换（本质也是元组）

```python
a, b = 10, 20
a, b = b, a
print(a, b)
```

---

## 解包实参列表

<https://docs.python.org/zh-cn/3/tutorial/controlflow.html#unpacking-argument-lists>

- \*args 列表、元组
- \*\*args 字典

函数调用要求独立的位置参数，但实参在列表或元组里时，要执行相反的操作。例如，内置的 range() 函数要求独立的 start 和 stop 实参。如果这些参数不是独立的，则要在调用函数时，用 * 操作符把实参从列表或元组解包出来：

```python
## *args ##
list(range(3, 6))            # normal call with separate arguments
# [3, 4, 5]
args = [3, 6]
list(range(*args))            # call with arguments unpacked from a list
# [3, 4, 5]

## **args ##
def parrot(voltage, state='a stiff', action='voom'):
    print("-- This parrot wouldn't", action, end=' ')
    print("if you put", voltage, "volts through it.", end=' ')
    print("E's", state, "!")

d = {"voltage": "four million", "state": "bleedin' demised", "action": "VOOM"}
parrot(**d)
```

## 元组解包

```python
temp = 1, 3, 5
a, b, c = temp
```
