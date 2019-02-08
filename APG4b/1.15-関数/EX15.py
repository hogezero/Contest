N = int(input())

A = [int(_) for _ in input().split()]
B = [int(_) for _ in input().split()]
C = [int(_) for _ in input().split()]

if (N != len(A)) or (N != len(B)) or (N != len(C)):
    print('error')

def output(A, B, C):
    print(sum(A) * sum(B) * sum(C))

output(A, B, C)

