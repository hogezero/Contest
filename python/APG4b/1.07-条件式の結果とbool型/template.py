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
l = [int(_) for _ in input().split()]
print(l)



"""
入力
5 # 入力行数指定(M=5)
1
2
3
4
5
"""
m = int(input())
l = [int(input()) for _ in range(m)]
print(l)

"""
入力
1
2
3
4
5
-1 # 終了フラグ
"""
l = []
while True:
    n = int(input())
    if n == -1:
        break
    l.append(n)