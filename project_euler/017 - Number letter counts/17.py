a = 3+3+5+4+4+3+5+5+4                       # from 1-9
b = 3+6+6+8+8+7+7+9+8+8                     # from 10-19
c = (8*36)+((6+6+5+5+5+7+6+6)*10)           # from 20-99

d = (a*100)+((a+b+c)*9)+(7*9)+(10*9*99)     # from 100-999

e = a+b+c+d+11                              # from 1-1000

print(e)
