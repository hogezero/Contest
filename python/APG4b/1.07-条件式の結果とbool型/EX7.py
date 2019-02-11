# -*- coding: utf-8 -*-

a = True
b = False
c = True

if (a):
    print("At", end="")
else:
    print("Yo", end="")

if not a and b:
    print("Bo", end="")
elif not b or c:
    print("Co", end="")

if a and b and c:
    print("foo!")
elif True and False:
    print("yeah!")
elif not a or c:
    print("der",)