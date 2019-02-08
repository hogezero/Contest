import sys

N = int(input())
A = [int(_) for _ in input().split()]

if not(N == len(A)):
    print('error')
    sys.exit()

# 平均点
mean = sum(A) / N
mean = int(mean)

for x in A:
    if x >= mean:
        print(x - mean)
    else:
        print(mean - x)