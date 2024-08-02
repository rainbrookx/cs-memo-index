# JetBrains IDE 问题处理

Revise IDE folders locking mechanism (don't fail startup if all ports in range are taken, limited network due to firewall/VPN)

- <https://youtrack.jetbrains.com/issue/IDEA-238995>

---

## 解决方案

管理员模式下的 cmd 窗口中，分别先后执行以下两个命令：

net stop winnat

net start winnat

## 解决方案的 bat 批处理

```bat
echo off

%1 mshta vbscript:CreateObject("Shell.Application").ShellExecute("cmd.exe","/c %~s0 ::","","runas",1)(window.close)&&exit

net stop winnat

net start winnat

pause
```

## 解决失效的 Global Liberal 无法删除

> 找配置文件的思路，在 IDEA 中编辑配置，然后通过文件的修改时间判断哪个文件是配置文件

```txt
C:\Users\%username%\AppData\Roaming\JetBrains\IntelliJIdea2023.2\options\applicationLibraries.xml
```
