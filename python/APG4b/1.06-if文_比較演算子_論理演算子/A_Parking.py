N, A, B = map(int, input().split())

parking = lambda total, B: total if  total < B else B
total = N*A
print(parking(total, B))