# Python pass 语句

<https://docs.python.org/zh-cn/3/tutorial/controlflow.html#pass-statements>

pass 语句不执行任何动作。语法上需要一个语句，但程序毋需执行任何动作时，可以使用该语句。例如：

```python
while True:
    pass  # Busy-wait for keyboard interrupt (Ctrl+C)

class MyEmptyClass:
    pass

def initlog(*args):
    pass   # Remember to implement this!
```

pass 还可用作函数或条件语句体的占位符，**让你保持在更抽象的层次进行思考**。pass 会被默默地忽略。
