# npm 命令

```bash
npm run dev     # 启动 vue/vite 服务器（静态网站）
npx serve       # 启动通用的静态网站服务器
```

## 包管理

```bash
npm ls -g               # 列出全局安装包
npm install -g xxx      # 全局安装
```

## nodejs 学习--NPM全局包管理

> <https://blog.csdn.net/lovecwh/article/details/130988925>

```text
全局包是保存在电脑user目录下的，只需安装一次。

1.安装全局包

码农版：

npm install --global 包名

懒人版:

npm i -g 包名

2.查看已安装的所有全局包

npm ls -g

3查看已安装的指定包

npm ls -g 包名

3.更新全局包

npm update -g 包名

4.卸载全局包

npm rm -g  包名
```
