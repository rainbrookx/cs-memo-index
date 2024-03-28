# curl 工具

[《curl网站开发指南》](https://www.ruanyifeng.com/blog/2011/09/curl.html)

[《curl 的用法指南》](https://www.ruanyifeng.com/blog/2019/09/curl-reference.html)

> Postman 占用内存大，或者单纯不想用 Postman，那么可以用 curl 命令工具并配合批处理

```bat
@echo off

set url=127.0.0.1:5000/login
curl %url% -X POST
```
