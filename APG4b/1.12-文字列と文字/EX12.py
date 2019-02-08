s = input()
ans = 1
for x in s:
    if x == '1':
        continue
    elif x == '+':
        ans += 1
    elif x == '-':
        ans -= 1
print(ans)

