# -*- coding: utf-8 -*-
a, b = map(int, input().split())

get_odd_even = lambda x: 'Even' if x % 2 == 0 else 'Odd'
print(get_odd_even(a*b))