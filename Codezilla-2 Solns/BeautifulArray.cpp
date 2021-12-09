#include <string>
#include <iostream>
#include <algorithm>

bool isPalindrome(std::string S)
{
    for (int i = 0; i < S.length() / 2; i++) 
    {
        if (S[i] != S[S.length() - i - 1]) 
            return(false);
    }
    return(true);
}

int TorF(int n)
{
    std::string s;
    for(int i=0;i<n;i++)
    {
        std::cin >> s;
        if(!isPalindrome(s))
            return(0);
    }
    return(1);
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << TorF(n);
}