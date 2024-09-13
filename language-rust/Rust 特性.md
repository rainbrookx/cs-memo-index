# Rust 特性

## 把 Rust 当作（伪）脚本用

> 作者：[无色明天](https://www.zhihu.com/people/zhou-xin-ting)
>
> 链接：<https://www.zhihu.com/question/282113351/answer/3622421263>

```rust
#!/bin/sh
#![allow(unused_attributes)] /*
OUT=/tmp/tmp && rustc "$0" -o ${OUT} && exec ${OUT} $@ || exit $? #*/

use std::process::Command;
use std::io::Result;
use std::path::PathBuf;
use std::fs;

fn mkdir(dir_name: &str) -> Result<()> {
    fs::create_dir(dir_name)
}

fn main() {
    // 省略
}
```
