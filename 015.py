import math
t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    a=math.factorial(n+m)//(math.factorial(n)*math.factorial(m))
    print(a%1000000007)
