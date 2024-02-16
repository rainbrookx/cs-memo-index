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
