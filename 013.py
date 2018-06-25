n=int(input())
s=0
for i in range(n):
    p=int(input())
    s=s+p
s=str(s)
s=list(s)
l=[]
for i in range(10):
    l.append(s[i])
print(''.join(l))
