# Windows 10 11 任务栏设置为透明

《如何调整 Windows 10「任务栏」透明度》 <https://www.sysgeek.cn/windows-10-taskbar-transparent/>

《7 Easy Ways to Make the Taskbar Transparent in Windows 11》 <https://windowsreport.com/transparent-taskbar-windows-11/>

《How to Make the Taskbar Fully Transparent in Windows 10》 <https://www.winhelponline.com/blog/high-oled-taskbar-transparency-windows-10/>

---

## 摘要

1. Click Start, type `regedit.exe`, and go to:

    ```text
    HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced
    ```

2. Create a new **DWORD (32-bit) value** named **UseOLEDTaskbarTransparency**

3. Double-click UseOLEDTaskbarTransparency and **set its value data to 1**

4. Go to the following branch:

    ```text
    HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\Dwm
    ```

5. Create a **DWORD (32-bit) value** named **ForceEffectMode**

6. **Set the data for ForceEffectMode to 1**

7. Exit the Registry Editor.

8. Right-click Desktop, click Personalize

9. Click Color, and enable the Transparency effects.

10. Restart your device.
