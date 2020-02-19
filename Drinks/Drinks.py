x = int(input())

li = list(map(int,input().split()))

sum = 0
for i in li:
  sum = sum + i

print(sum / x)