import math

n = int(input())
i=0
while(i<n):
    i+=1
    a,b = map(int,input().split())
    div = math.ceil(a/b)
    ans = max(a,div*b) - min(a,div*b)
    print(ans)
