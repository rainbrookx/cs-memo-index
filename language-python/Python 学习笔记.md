# Python 学习笔记

> 主要来自 Python 官网

## Python 不同于 C 和 Java 的特性

### 其他

- 链式赋值
- 系列解包赋值
- 守卫子句
- 没有 `++` 或 `--` 递增、递减运算符

#### if - in 语句

```python
def ask_ok(prompt, retries=4, reminder='Please try again!'):
    while True:
        ok = input(prompt)
        if ok in ('y', 'ye', 'yes'):
            return True
        if ok in ('n', 'no', 'nop', 'nope'):
            return False
        retries = retries - 1
        if retries < 0:
            raise ValueError('invalid user response')
        print(reminder)
```

#### 用 lambda 表达式返回函数

<https://docs.python.org/zh-cn/3/tutorial/controlflow.html#lambda-expressions>

《匿名函数》 <https://www.liaoxuefeng.com/wiki/1016959663602400/1017451447842528>

```python
def division(n):
    return lambda x: n / x


print(division(10)(3))
```

## Python中copy的用法：详解深拷贝与浅拷贝的区别及应用场景

<https://baijiahao.baidu.com/s?id=1776720378688127113>
