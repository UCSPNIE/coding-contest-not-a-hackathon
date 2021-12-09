T = int(input())
for i in range(T):
    
    count=0
    l = list(input())
    for j in range(len(l)-1):
        if(l[j]=='<' and l[j+1]=='>'):
            count+=1

    print(count)