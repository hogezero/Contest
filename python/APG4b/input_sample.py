# -*- coding: utf-8 -*-

"""
入力
1
"""
#a = int(input())

"""
入力
スペース区切りの整数の入力
1 2
"""
#b, c = map(int, input().split())

"""
入力
1 2 3 4 5
"""
#l = [int(_) for _ in input().split()]
#print(l)

"""
入力
abcdefg
"""
#a,*b,c = input()
#print("a: {} b: {} c:{}".format(a, b, c)) # a: a b: ['b', 'c', 'd', 'e', 'f'] c:g

"""
print(map(int,"2 1 4 3".split()))
# <map object at 0x6ffffd57198>

print(sorted(map(int,"2 1 4 3".split())))
# [1, 2, 3, 4]
"""

# R行/1行
"""
入力
1
2
"""
#a = int(input())
#b = int(input())
#print(a, b)

# 上に同じ
#a, b = (int(input()) for _ in range(2))
#print(a, b)

"""
入力
1
2
3
4
5
"""
#l = [int(input()) for _ in range(5)]
#print(l) # [1, 2, 3, 4, 5]


"""
入力
5 # 入力行数指定(M=5)
1
2
3
4
5
"""
#m = int(input())
#l = [int(input()) for _ in range(m)]
#print(l)

"""
入力
1
2
3
4
5
-1 # 終了フラグ
"""
'''
l = []
while True:
    n = int(input())
    if n == -1:
        break
    l.append(n)
print(l)
'''

#R行 / C列
"""
入力
3 # 行数(R)を指定する
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
"""
r = int(input())
l = [[int(n) for n in input().split()] for _ in range(r)]
print(l)
