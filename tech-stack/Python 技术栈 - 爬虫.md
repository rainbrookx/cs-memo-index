# Python 技术栈 - 爬虫

## 爬虫法律、法规、规则【☆ 重要 ☆】

- The Web Robots Pages：<https://www.robotstxt.org/>

## Python Standard Library 中的爬虫工具

- urllib：一系列用于操作URL的功能。
- re：正则表达式
- sys
- os
- sqlite3

## HTTP 请求

- urllib：一系列用于操作URL的功能。
- requests：基于 urllib 编写的，阻塞式 HTTP 请求库，发出一个请求，一直等待服务器响应后，程序才能进行下一步处理。
- selenium：自动化测试工具。一个调用浏览器的 driver，通过这个库你可以直接调用浏览器完成某些操作，比如输入验证码。
- aiohttp：基于 asyncio 实现的 HTTP 框架。异步操作借助于 async/await 关键字，使用异步库进行数据抓取，可以大大提高效率。
- httpx

## HTML、JSON 解析

- beautifulsoup：html 和 XML 的解析,从网页中提取信息，同时拥有强大的API和多样解析方式。
- pyquery：jQuery 的 Python 实现，能够以 jQuery 的语法来操作解析 HTML 文档，易用性和解析速度都很好。
- lxml：支持HTML和XML的解析，支持XPath解析方式，而且解析效率非常高。
- tesserocr：一个 OCR 库，在遇到验证码（图形验证码为主）的时候，可直接用 OCR 进行识别。

## Excel 操作

- xlwt：Excel 操作

## 爬虫框架

- Scrapy：很强大的爬虫框架，可以满足简单的页面爬取（比如可以明确获知url pattern的情况）。用这个框架可以轻松爬下来如亚马逊商品信息之类的数据。但是对于稍微复杂一点的页面，如 weibo 的页面信息，这个框架就满足不了需求了。
- Crawley：高速爬取对应网站的内容，支持关系和非关系数据库，数据可以导出为 JSON、XML 等。
- Portia：可视化爬取网页内容。
- newspaper：提取新闻、文章以及内容分析。
- python-goose：java 写的文章提取工具。
- cola：一个分布式爬虫框架。项目整体设计有点糟，模块间耦合度较高。
