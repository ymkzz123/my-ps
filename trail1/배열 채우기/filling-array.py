l=input().split()
for i in range(len(l)):
    if l[i]=='0':l=l[:i]; break
print(' '.join(reversed(l)))