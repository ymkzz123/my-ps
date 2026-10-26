res = 0
for _ in range(int(input())):
    score = list(map(int, input().split()))
    avg = sum(score)/4
    if avg >= 60: print("pass"); res += 1
    else: print("fail")
print(res)