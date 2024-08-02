# Node.js 的问题解决方法

## 安装 yarn 运行 `corepack enable` 出错

因为 nodejs 安装路径没有权限，所以用管理员权限运行，有个坑就是 nodejs 安装的时候只能使用管理员权限

```txt
PS D:\code\node> corepack enable
Internal Error: EPERM: operation not permitted, open 'C:\DeveloperTool\nodejs\pnpm'
Error: EPERM: operation not permitted, open 'C:\DeveloperTool\nodejs\pnpm'
```
