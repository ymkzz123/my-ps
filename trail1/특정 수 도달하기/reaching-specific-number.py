l=list(map(int,input().split()))
res=0
le=0
for i in l:
    if i<250: res += i;le+=1
    else: break
print("%d %.1f"%(res, res/le))