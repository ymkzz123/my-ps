N=int(input());l=list(map(float,input().split()))
avg=sum(l)/N
print("%.1f"%avg)
if avg>=4.0:print("Perfect")
elif avg>=3.0:print("Good")
else:print("Poor")