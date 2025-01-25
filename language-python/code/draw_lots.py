# -*- coding: UTF-8 -*-

# 抽签

import random
import pprint


def draw_lots_01():
    '''
    根据学号抽签
    '''
    num = 5     # 抽签人数

    # range(1, 26) ==> 学号 1, 2, 3, ..., 25
    rs = random.sample(range(1, 26), num)
    rs.sort()                               # 排序
    pprint.pprint(rs)


def draw_lots_02():
    '''
    根据姓名抽签 - 抽取多个
    '''
    num = 3     # 抽签人数
    names = ['赵伟强', '钱明军', '孙勇杰', '李超峰', '周宇浩', '吴浩伟']

    rs = random.sample(names, num)
    pprint.pprint(rs)


def draw_lots_03():
    '''
    根据姓名抽签 - 抽取一个
    '''
    names = ['赵伟强', '钱明军', '孙勇杰', '李超峰', '周宇浩', '吴浩伟']
    selected_name = random.choice(names)
    print(selected_name)


def draw_lots_04():
    '''
    男女概率不同的抽签
    '''
    boys = ['赵伟强', '钱明军', '孙勇杰', '李超峰', '周宇浩', '吴浩伟']
    girls = ['赵丽敏', '钱静芳', '孙悦瑶', '李怡雪', '周婷怡', '吴瑶瑶']
    x = 0
    y = 0
    for i in range(20):
        if random.random() > 0.7:
            x += 1
            selected_name = random.choice(boys)
            print(f'男-{selected_name}', end=', ')
        else:
            y += 1
            selected_name = random.choice(girls)
            print(f'女-{selected_name}', end=', ')
    print()
    print('男生概率：', x / (x + y), sep='')
    print('女生概率：', y / (x + y), sep='')


if __name__ == '__main__':
    draw_lots_01()
    print('-' * 20)
    draw_lots_02()
    print('-' * 20)
    draw_lots_03()
    print('-' * 20)
    draw_lots_04()
