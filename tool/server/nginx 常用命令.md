# nginx 常用命令

我目前的习惯是，不给 nginx 配置环境变量，所以需要 cmd/shell 到 nginx 所在目录

## 启动

```shell
# 1.直接启动

# 进入nginx目录，执行启动命令
cd /usr/local/nginx/sbin
./nginx

# 或者直接
/usr/local/nginx/sbin/nginx

#2.指定配置文件方式启动
#进入nginx目录，执行启动命令
cd /usr/local/nginx/sbin
./nginx -c /usr/local/nginx/conf/nginx.conf

#或者
/usr/local/nginx/sbin/nginx -c /usr/local/nginx/conf/nginx.conf
```

## 检查nginx配置文件

```shell
#检查配置文件是否有语法操作
./nginx -t
# 或者显示指定配置文件
./nginx -t -c /usr/local/nginx/conf/nginx.conf
```

## 参考资料

[Nginx常用命令（启动、重启、关闭、检查）](https://blog.csdn.net/qq_28624243/article/details/115598416)
