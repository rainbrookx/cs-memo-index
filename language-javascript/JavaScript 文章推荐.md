# JavaScript 文章推荐

## JavaScript

[JS.ORG](https://js.org/)

[JS中循环遍历数组的几种常用方式总结](https://blog.csdn.net/weixin_45811256/article/details/115719416)

[js处理后端返回超过16位大数字方案](https://blog.csdn.net/StoneVivi/article/details/105259070)

[JavaScript 模板字符串](https://www.runoob.com/js/js-string-templates.html)

[HTML 字符集](https://www.runoob.com/charsets/html-charsets.html) 这是参考手册

[JavaScript 代码规范](https://www.runoob.com/js/js-conventions.html)

[JavaScript 严格模式(use strict)](https://www.runoob.com/js/js-strict.html) 对代码规范非常重要，还有很多稀奇的语句（Object.defineProperty(obj, "x", {value:0, writable:false});）

[JavaScript 使用误区](https://www.runoob.com/js/js-mistakes.html)

[JavaScript 表单](https://www.runoob.com/js/js-validation.html)

[JavaScript 表单验证](https://www.runoob.com/js/js-form-validation.html)

[JavaScript 验证 API](https://www.runoob.com/js/js-validation-api.html)

[JavaScript 保留关键字](https://www.runoob.com/js/js-reserved.html) 有必要看看

[JavaScript let 和 const](https://www.runoob.com/js/js-let-const.html) let、const、var的非常细节

[JavaScript 异步编程](https://www.runoob.com/js/js-async.html)

[JavaScript Promise](https://www.runoob.com/js/js-promise.html) 非常有用

## fetch()

[Fetch API 教程](https://www.ruanyifeng.com/blog/2020/12/fetch-tutorial.html)

```javascript
/*
注意，第一次 .then() 是 Promise 对象(参数名：response)，通过异步调用 response.json() 得到 JavaScript 对象（不是JSON字符串）
至少会使用两次 .then()，即使不用链式调用，即在第一个 .then() 中对 response 获取数据等操作，也要调用一次 .then()
*/
fetch('https://api.github.com/users/ruanyf')
  .then(response => response.json())
  .then(json => console.log(json))
  .catch(err => console.log('Request Failed', err));
```
