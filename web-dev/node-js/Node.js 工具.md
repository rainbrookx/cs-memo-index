# Node.js 工具

## 包管理工具

- npm
- yarn
- pnpm

npx 侧重于执行命令的，执行某个模块命令。虽然会自动安装模块，但是重在执行某个命令。
npm 侧重于安装或者卸载某个模块的。重在安装，并不具备执行某个模块的功能。

## tree-node-cli

生成目录结构树

> Note: Use the command **`treee`** on Windows and Linux to avoid conflicts with built-in **`tree`** command.

```bash
treee -a > tree.txt     # 导出该路径下所有的文件夹、文件的“目录结构树”
```
