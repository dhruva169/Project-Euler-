n=int(input())
d={"0":1,"1":1,"2":2,"3":6,"4":24,"5":120,"6":720,"7":5040,"8":40320,"9":362880}
sum2=0
for i in range(10,n+1):
    a=list(str(i))
    sum1=0
    for j in a:
        sum1=sum1+d[j]
    if sum1%i==0:
        sum2=sum2+i
print(sum2)
    
