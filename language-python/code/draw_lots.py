# -*- coding: UTF-8 -*-

# 抽签

import random
import pprint

num = 5     # 抽签人数

rs = random.sample(range(1, 26), num)   # range(1, 26) ==> 学号 1, 2, 3, ..., 25
rs.sort()                               # 排序
pprint.pprint(rs)
