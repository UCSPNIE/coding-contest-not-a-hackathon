a,b,c = map(int,input().strip().split(" "))

if a*b*c >= 50 and max(a,b,c) <= 40:
    print("YES")
else:
    print("NO")