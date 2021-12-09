n = int(input())
array = list(map(str,input().strip().split(" ")))

def isPalindrome(S):
    if S == S[::-1]:
        return True
    return False

def TorF():
    for i in range(n):
        if not isPalindrome(array[i]):
            return 0
    return 1

print(TorF())