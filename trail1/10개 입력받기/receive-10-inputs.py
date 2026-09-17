l=list(map(int,input().split()));cnt=0;
for i in range(len(l)):
    if l[i] == 0:
        l = l[:cnt]
        break
    cnt += 1
print("%d %.1f"%(sum(l), sum(l)/cnt))