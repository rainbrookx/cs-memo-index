# Web 前端的坑

1. 通过 `file://` 协议访问 HTML 的时候，加上 `type="module"` 会出现跨域问题

    ```js
    <script type="module" src="script.js"></script>
    ```

2. 加了 `type="module"` 就应该放在 head 结束标签的前面，而不应该放在 body 结束标签的前面，因为 module 中的 JavaScript 在 HTML DOM 完全生成后，才会执行，放在 head 标签内部，这样可以提前加载文件
