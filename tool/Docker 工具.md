# Docker 工具

[端口显示被占用，netstat -aon | findstr却找不到端口的解决方法](https://blog.csdn.net/chengmin123456789/article/details/116718586)

[tech-shrimp/docker_installer | 技术爬爬虾](https://github.com/tech-shrimp/docker_installer)

## Docker 镜像

```json
{
    "registry-mirrors": [
        "https://docker.m.daocloud.io",
        "https://docker.1panel.live",
        "https://hub.rat.dev",
        "https://docker-0.unsee.tech",
        "https://registry.cyou",
        "https://status.anye.xyz/",
        "https://mirror.kentxxq.com/image",
        "https://1ms.run/",
    ]
}
```

## 查看 Docker 镜像 latest 版本号的具体版本

```bash
docker image inspect redis:latest | grep -i version
```
