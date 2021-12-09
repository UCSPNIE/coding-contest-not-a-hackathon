n = int(input())

for i in range(n):
    x = 1
    for j in range(n):
        if j < n - i - 1:
            print(" ",end=" ")
        else:
            print(x,end=" ")
            x+=1
    print()