# Conda 的使用

## 镜像源

[Anaconda 镜像使用帮助 | 清华源](https://mirrors.tuna.tsinghua.edu.cn/help/anaconda/) 看官网配置，不要去网上搜索

## 创建纯净的虚拟环境

[【Python】conda创建完全干净的虚拟环境](https://blog.csdn.net/weixin_43982238/article/details/132123757)

```shell
# 使用纯净的方式，创建 Python 版本 3.9.*、名字为 py39_pure 的虚拟环境
# 注意，即使这样，也会安装必要的 conda 的 package
conda create --name py39_pure python=3.9 --no-default-packages
```

## 列出环境与删除

```shell
# 列出环境
conda env list

# 例如删除 env_001
conda remove -n env_001 --all
# Everything found within the environment (C:\Users\你的用户名\.conda\envs\env_001), including any conda environment configurations and any non-conda files, will be deleted. Do you wish to continue?【这是第二个对话框，选择 y ，确认删除，这样会把所有文件删除】
```

## Conda 会默认启动 base 环境

这是一个坑，特别是用 Python 自带的 `venv` 时候，在 PowerShell 的时候，提示符前面有个 `(base)`

```shell
# 默认不进入base环境
conda config --set auto_activate_base false
# 默认进入base环境
conda config --set auto_activate_base true
```

## Conda 安装 package 的坑

使用 conda 虚拟环境，最好不要使用 pip 命令安装，虽然 pip 可以安装到 conda 虚拟环境。

如果确定在 conda 虚拟环境使用 pip ，那么就永远使用 pip，不要混合使用两个命令

理由如下：

- PyPI (pip) 和 Package repository for anaconda ，是不一样的库
- pip 的 package 比 conda 多得多
- 相同 package ，在 pip 中版本更新、更全
- 两者有不相同的 package，这也是 `pip list` 和 `conda list` 列出的 package 可能不一致的原因，也是 `pip freeze` 出现 `@ file:///` 的原因，且不能导出某些 `conda list` 的 package

【**综上最佳实践**】

绝大多数情况，使用 Python3 自带的 `venv` ，创建虚拟环境

```shell
# Windows
py -3 -m venv .venv

# Linux
python3 -m venv .venv
```
