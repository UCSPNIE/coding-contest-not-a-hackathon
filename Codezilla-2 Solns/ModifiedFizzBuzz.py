n = int(input())

for i in range(1,n+1):
    s = str(i)
    if "3" not in s and "5" not in s:
        print(i)
        continue
    if "3" in s:
        print("FIZZ",end="")
    if "5" in s:
        print("BUZZ",end="")
    print()