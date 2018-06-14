import math
t=int(input())
for i in range(t):
    n=int(input())
    a=math.factorial(n)
    a=str(a)
    a=list(a)
    s=0
    for j in a:
        s=s+int(j)
    print(s)