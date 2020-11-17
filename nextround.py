n,k = map(int,input().split())
a = list(map(int,input().split()))
c = 0
for i in range(0,n):
    if a[k-1]<=a[i] and a[k-1]!=0:
        c=c+1
print(c)
