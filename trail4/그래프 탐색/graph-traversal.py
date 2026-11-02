import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)




n, m = map(int, input().split())
g = [[] for _ in range(n + 1)]

for _ in range(m):
    u, v = map(int, input().split())
    g[u].append(v)
    g[v].append(u)
visited = [False] * (n + 1)
res = 0

def dfs(v):
  global res
  visited[v] = True
  res += 1
  for i in g[v]:
    if not visited[i]:
      dfs(i)


dfs(1)
print(res-1)

