A, B, C = map(int, input().split())

max_height = max(A, B, C)
min_height = min(A, B, C)

print(max_height - min_height)