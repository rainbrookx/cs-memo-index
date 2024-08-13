# git 操作

[更改.gitignore文件并立刻生效](https://juejin.cn/post/7224696614458523709)

```shell
git rm -r --cached .
git add .
git commit -m "Update .gitignore"
```

[git reset --hard后的本地代码找回（commit和没有commit但add了两种情况）](https://blog.csdn.net/wangyueshu/article/details/90919019)

> 明确一点：没有 `commit` ，没有 `add` 那么 git，无法找回被删除的本地代码
