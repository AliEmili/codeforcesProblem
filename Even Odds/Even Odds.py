import math

n,k = map(int,input().split())

if k>math.ceil(n/2.0):
  print((k-math.ceil(n/2.0))*2)
else:
  print(2*(k-1)+1)