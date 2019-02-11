N = int(input())
B = []
A = int(input())
for x in range(N):
    B.append([_ for _ in input().split()])


for num ,i in enumerate(B):
    if i[0] == '+':
        A += int(i[1])
        print('{}:{}'.format(num+1, A))
    elif i[0] == '-':
        A -= int(i[1])
        print('{}:{}'.format(num+1, A))
    elif i[0] == '*':
        A *= int(i[1])
        print('{}:{}'.format(num+1, A))
    elif i[0] == '/' and not(int(i[1]) == 0):
        A /= int(i[1])
        A = int(A)
        print('{}:{}'.format(num+1, A))
    else:
        print("error")
        break
