l=list(map(int,input().split()))
res,cnt=0, 0
for i in l:
    if i == 0: break
    elif i%2==0:
        res += i
        cnt += 1

print(cnt, res)