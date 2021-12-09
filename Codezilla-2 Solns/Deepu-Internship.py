def solution(prices, notes, x):
    ans = 0
    
    for note, price in zip(notes, prices):
        if 'higher' in note:
            j = note.index('higher') - 2
            frac = float(note[:j]) / 100
            original = round(price / (1 + frac), 4)
            diff = price - original
            ans += diff
        elif 'lower' in note:
            j = note.index('lower') - 2
            frac = float(note[:j]) / 100
            original = round(price / (1 - frac), 4)
            diff = original - price
            ans -= diff
            
    return ans <= x

n=int(input())
a = list(map(int,input().strip().split()))[:n]
notes=[]
for i in range(n):
    notes.append(str(input()))
x=int(input())
print(solution(a,notes,x))