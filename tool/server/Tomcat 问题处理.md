# Tomcat 问题处理

## 基础

`startup.bat`     启动服务器
`shutdown.bat`    关闭服务器
`service.bat`     安装服务器等
`tomcat10w.exe`   GUI 服务器管理工具

## startup.bat 无法启动

如果各种配置检查后，还有问题，重启电脑就好了（P.S. 我就是重启后，解决了问题）

## 安装 Tomcat 服务器程序

[Windows Service How-To](https://tomcat.apache.org/tomcat-10.1-doc/windows-service-howto.html)

## 安装 Tomcat 服务器程序后无法启动

> 使用 Windows 系统的 `services.msc` 或 tomcat 的 `tomcat10w.exe` 无法启动服务器，错误码是 `1`，日志 `logs\commons-daemon.log` 记录如下

```text
[2023-07-18 18:28:24] [info]  [14012] Starting service...
[2023-07-18 18:28:24] [error] [14012] Found 'C:\Java\jdk-17\bin\server\jvm.dll' but couldn't load it.
    ...
    ...
    ...
[2023-07-18 18:28:24] [info]  [14124] Run service finished.
```

### 处理方法

双击运行 tomcat10 根目录的 `bin\tomcat10w.exe` 把 `Startup` 和 `shutdown` 下面的 `Mode` 都改成 `Java`
