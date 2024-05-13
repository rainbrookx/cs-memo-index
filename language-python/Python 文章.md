# Python 文章

[Python 中 -m 的典型用法、原理解析与发展演变](https://zhuanlan.zhihu.com/p/91120727/)

```bash
# 在 Python3 中，只需一行命令就能实现一个简单的 HTTP 服务：
python -m http.server 8000
​
# 注:在 Python2 中是这样
python -m SimpleHTTPServer 8000
```

## package 工具、虚拟环境

[Why you should use `python -m pip`](https://snarky.ca/why-you-should-use-python-m-pip/)

[原来我一直安装 Python 库的姿势都不对呀！](https://mp.weixin.qq.com/s/_LcztvEsz-fipjhlVnic8w)

> 1. 建议用 `python-m pip` 安装三方库
> 2. 务必使用**虚拟环境**，不要安装至系统 Python
> 3. 建议用 `pipx` 独立安装工具
> 4. 建议用 `python-m venv` 创建虚拟环境
> 5. 可以将容器整体作为一个环境，跳过虚拟环境

## Python 打包

[Python 进阶必学库：Pyinstaller 使用详解 ！](https://zhuanlan.zhihu.com/p/71081512)

## 高阶函数

[Python高级特性-高阶函数](https://zhuanlan.zhihu.com/p/622302793)

[自从搞懂了回调函数，我对Python的理解上了一个台阶！](https://zhuanlan.zhihu.com/p/544780403)

[python中5个常用的内置高阶函数](https://zhuanlan.zhihu.com/p/93225449)

- 函数作为参数传递
- 函数作为返回值返回（函数内部还可以定义子函数）
- 函数可以嵌套定义
- 函数式编程
- 装饰器（@符号，类似 Java 的注解）
- 回调函数
- 匿名函数（lambda 函数）

## 函数装饰器

[Python 函数装饰器](https://www.runoob.com/w3cnote/python-func-decorators.html)
