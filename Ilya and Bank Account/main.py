n = int(input())

if n>=0:
    ans = n
else:
    string = str(n)
    if(int(string[len(string)-1]) < int(string[len(string)-2])):
        ans = string[0:len(string)-2] + string[len(string)-1]
    else:
        ans = string[0:len(string)-1]
ans = int(ans)
print(ans)