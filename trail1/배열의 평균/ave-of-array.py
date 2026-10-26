l=[]
for _ in range(2):l.append(list(map(int,input().split())))
for i in l: print(sum(i)/4, end=' ')
print()
for i in range(4):
    print((l[0][i]+l[1][i])/2, end=' ')
print()
print("%.1f"%(sum(l[0]+l[1])/8))