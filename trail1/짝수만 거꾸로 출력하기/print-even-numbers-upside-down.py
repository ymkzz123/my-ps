N = int(input())
l=list(map(int,input().split()))[::-1]
res = 0
for i in l:
    if not i%2:
        print(i, end=' ')
