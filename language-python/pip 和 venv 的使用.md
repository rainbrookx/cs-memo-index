# pip 和 venv 的使用

## 创建虚拟环境

```shell
# Windows
py -3 -m venv .venv

# Linux
python3 -m venv .venv

# 激活环境（启动 .venv 文件夹下的脚本）
.venv\Scripts\activate
```

## requirements.txt 的用法

```shell
## 导出
pip freeze > requirements.txt

## 安装
pip install -r requirements.txt

## 卸载
pip uninstall -r requirements.txt
```
