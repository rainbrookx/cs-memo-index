# Django

## VS Code 工具

### 解决 batisteo.vscode-django 导致 Emmet, Formatter 失效

```json
// - 配置 VS Code 内置的 Emmet
// - 安装 HookyQR.beautify 插件，并配置
"emmet.includeLanguages": {
    "django-html": "html"
},
"beautify.language": {
    "html": [
        "django-html"
    ]
},
```
