# Python 开发工具、依赖库

## Python 官方提供的库

- urllib：一系列用于操作URL的功能。
- re：正则表达式
- unittest：单元测试

## 环境管理工具

- conda
- venv
- virtualenv
- pipenv
- [pixi](https://pixi.sh/)、[prefix.dev](https://prefix.dev/)：pixi supports Python, R, C/C++, Rust, Ruby, and many other languages.

[可能是最全的 Python 环境管理工具对比](https://zhuanlan.zhihu.com/p/681222081)

[【Python】Python创建虚拟环境的三种方式](https://blog.csdn.net/ARPOSPF/article/details/113616988)

[一文解读 virtualenv & venv & pipenv 之间的联系与区别](https://blog.csdn.net/weixin_40922744/article/details/103721870)

## 开发工具

- Anaconda
- miniforge：Anaconda 的替代品
  - [Anaconda商用要收费了怎么办？没关系，我们有miniforge](https://zhuanlan.zhihu.com/p/379567315)
- Jupyter Notebook
- Jupyter Lab
- Spyder
- PandasGUI

## 打包工具

- setuptools
- wheel

```shell
# setuptools
python setup.py sdist
python setup.py bdist_egg


# wheel 和 setuptools
python setup.py bdist_wheel

```

## 小工具

- mypy：检查 Python 代码是否规范

## 数据库

- Python Gadfly

## 数据可视化、图表、图形学

- Gephi
- pyecharts、pyecharts-gallery
- PyOpenGL

## 数学、科学计算

- SciPy
- NumPy
- SymPy
- Matplotlib
- Spyder

## 分词

- jieba

## 人工智能

- scikit-learn

## 二维码、条码

- segno：<https://pypi.org/project/segno/>
- qrcode：<https://pypi.org/project/qrcode/>

## GUI

- Tkinter
- PySide
- PyQt
- NiceGUI
- wxPython
- PyGObject

## 网络

- Twisted
- py4web
- web2py
- Zope

## 打包成可执行文件

- Pyinstaller
- Nuitka

## 文章参考

[Python 网络爬虫的常用库汇总（建议收藏）](https://blog.csdn.net/l01011_/article/details/133348896)

## 有趣的库

- GitPython
- [uv](https://docs.astral.sh/uv/) An extremely fast Python package and project manager, written in Rust.
- wordcloud 词云
