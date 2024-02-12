# Python 循环中的 break、continue 语句及 else 子句

<https://docs.python.org/zh-cn/3/tutorial/controlflow.html#break-and-continue-statements-and-else-clauses-on-loops>

break 语句将跳出最近的一层 for 或 while 循环。

**for 或 while 循环可以包括 else 子句。**

在 for 循环中，else 子句会在循环成功结束最后一次迭代之后执行。

在 while 循环中，它会在循环条件变为假值后执行。

无论哪种循环，如果因为 break 而结束，那么 else 子句就 不会 执行。

else 子句用于循环时比起 if 语句的 else 子句，更像 try 语句的。try 语句的 else 子句在未发生异常时执行，循环的 else 子句则在未发生 break 时执行。 try 语句和异常详见 异常的处理。
