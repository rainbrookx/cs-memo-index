# PHP 特性

## 三元运算符

[三元运算符](https://www.php.net/manual/zh/language.operators.comparison.php#language.operators.comparison.ternary)

1. 常规的：表达式 (expr1) ? (expr2) : (expr3)
2. 可以省略三元运算符中间那部分。表达式 expr1 ?: expr3 等同于如果 expr1 求值为 true 时返回 expr1 的结果，否则返回 expr3。expr1 在这里仅执行一次。
3. NULL 合并运算符：当 expr1 为 null，表达式 (expr1) ?? (expr2) 等同于 expr2，否则为 expr1。
