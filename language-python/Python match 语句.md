# Python match 语句

```python
def http_error(status):
    match status:
        case 400:
            return "Bad request"
        case 404:
            return "Not found"
        case 418:
            return "I'm a teapot"
        case _:
            return "Something's wrong with the internet"
```

注意最后一个代码块：“变量名” _ 被作为 通配符 并必定会匹配成功。如果没有 case 匹配成功，则不会执行任何分支。

你可以用 | （“或”）将多个字面值组合到一个模式中：

```python
case 401 | 403 | 404:
    return "Not allowed"
```

```python
# point is an (x, y) tuple
match point:
    case (0, 0):
        print("Origin")
    case (0, y):
        print(f"Y={y}")
    case (x, 0):
        print(f"X={x}")
    case (x, y):
        print(f"X={x}, Y={y}")
    case _:
        raise ValueError("Not a point")
```

请仔细学习此代码！第一个模式有两个字面值，可视为前述字面值模式的扩展。接下来的两个模式结合了一个字面值和一个变量，变量 绑定 了来自主语（point）的一个值。第四个模式捕获了两个值，使其在概念上与解包赋值 (x, y) = point 类似。

我们可以为模式添加 if 作为守卫子句。如果守卫子句的值为假，那么 match 会继续尝试匹配下一个 case 块。注意是先将值捕获，再对守卫子句求值：

```python
match point:
    case Point(x, y) if x == y:
        print(f"Y=X at {x}")
    case Point(x, y):
        print(f"Not on the diagonal")
```
