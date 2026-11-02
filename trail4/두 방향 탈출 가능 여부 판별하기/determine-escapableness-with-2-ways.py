import sys
from collections import deque

n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]
# Please write your code here.
if grid[n-1][m-1] == 0:
    print(0)
    exit()

def bfs(x, y):
    dx = [1, 0]
    dy = [0, 1]
    q = deque()
    q.append([x, y])

    while q:
        x, y = q.popleft()

        for i in range(2):
            nx = x+dx[i]
            ny = y+dy[i]

            if (0 <= nx < n and 0 <= ny < m and grid[nx][ny] == 1):
                q.append([nx, ny])
                grid[nx][ny] = 0
    
    if grid[n-1][m-1] == 0:
        return 1
    else: return 0

print(bfs(0, 0))