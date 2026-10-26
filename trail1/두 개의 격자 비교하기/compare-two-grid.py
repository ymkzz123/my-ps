N, M = map(int, input().split())
l1=list(list(map(int,input().split())) for _ in range(N))
l2=list(list(map(int,input().split())) for _ in range(N))

for x in range(N):
    for y in range(M):
        if l1[x][y] != l2[x][y]:
            print(1, end = ' ')
        else: print(0, end=' ')
    print()