# 避免 JavaScript 和 CSS 冲突

> 要避免嵌入的 HTML 与父页面 HTML 的 JS、CSS 冲突，核心是隔离 CSS 作用域和避免 JS 全局变量 / 事件污染

## 一、CSS 隔离方案（核心：避免样式全局覆盖）

- 使用 Shadow DOM（推荐，最强隔离）
- 添加唯一 CSS 命名空间
- 使用 CSS Modules（需构建工具）

## 二、JS 隔离方案（核心：避免全局变量 / 事件冲突）

- 使用 IIFE（立即执行函数）包裹所有 JS
- 避免全局事件监听冲突
- 不修改全局对象

## 三、嵌入方式选择（辅助隔离）

优先使用 Shadow DOM + fetch 加载 或 iframe（适合完全独立的页面），避免直接用innerHTML 插入（易导致样式 / JS 泄漏）。
