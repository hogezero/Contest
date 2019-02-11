# -*- coding: utf-8 -*-
# 整数の入力

p = int(input())
if p == 1:
    price = int(input())

if p == 2:
    text = input()
    price = int(input())

N = int(input())

if p == 1:
    print(price * N)
elif p == 2:
    print( text + "!")
    print(price * N)

