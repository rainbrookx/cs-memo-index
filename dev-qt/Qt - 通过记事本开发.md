# Qt - 通过记事本开发

1. 打开 `Qt (MinGW)` 命令行工具（qt-cmd）
2. 在 qt-cmd 切换到无英文路径的空文件夹执行 `qmake -project`，生成 `xxx.pro` （这个 `xxx` 就是父级的文件夹名称）
3. 在 `xxx.pro` 末尾换行添加 `QT += widgets gui`
4. 执行 `qmake`，生成 `Makefile` 等文件
5. 在 Windows 系统中，执行 `mingw32-make` 生成可执行文件（在 Linux 系统中执行 `make`）
6. 在 `./release/` 中看到编译好的可执行文件，如果没有配置环境变量，那么直接双击 `*.exe` 文件是无法运行的，所以可以直接在 `qt-cmd` 中执行这个生成的 `*.exe` 文件
