# Visual Studio Code 技巧

Visual Studio Code，可以安装丰富多样的插件。

安装插件后，可以打开PDF文件，绘制思维导图、流程图，可以编译C/C++，可以运行Java……

## 编译运行 C\C++

安装了 Dev-C++ 的同时，在 Dev-C++ 根目录有一个 `MinGW64` 文件夹，可以在系统环境变量 PATH 中 添加 `MinGW64\bin` 的绝对路径，这样之后，VSCode 就可以编译 C/C++ 文件。配合 CMake 可以编译链接 C/C++ 项目（多个文件）。

## VS Code 有意思的命令

### 导出已安装的插件名称

```bash
code --list-extensions > vs-code-extensions.txt
```
