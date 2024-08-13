# 多个 git 仓库合并到一个仓库

## Step 1

创建一个文件夹，作为新项目的文件夹

```shell
git init
```

除了 `.git` 文件夹，不要有其他内容，避免麻烦

## Step 2

> 注意 `remote` 可以是远程的，也可以是本地的，路径用正斜杠（除号），不能用发斜杠，路径最好用双引号括起来

```shell
git remote add bookstore "D:/AppDemo/demo-old/bookstore"
git fetch bookstore
git merge bookstore/master --allow-unrelated-histories
```

## Step 3

- 移动文件到新文件夹
- `git commit` 一次

## Step 4

- 重复 Step 1 ~ Step 2

## Step 5

> 这是最后一步，用于清除 `remote` 仓库

```shell
# <origin> 远程的仓库名称
git branch -a
git branch -r

git remote show <origin>
git remote prune <origin>

git remote rm <origin>
git remote -v
```

---

## 参考资料

[How to Merge Two Git Repositories](https://www.w3docs.com/snippets/git/how-to-merge-two-git-repositories.html)

[如何将一个git仓库移动到另一个目录并将该目录变为git仓库](https://geek-docs.com/git/git-questions/1579_git_how_to_move_a_git_repository_into_another_directory_and_make_that_directory_a_git_repository.html)

[How to merge two Git repositories into one (not two branches)](https://www.slingacademy.com/article/how-to-merge-two-git-repositories-into-one/)

[使用git将两个项目合并一个新的项目（保姆级）](https://blog.csdn.net/qq_52054879/article/details/133613959)
