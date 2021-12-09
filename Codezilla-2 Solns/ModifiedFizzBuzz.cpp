#include <iostream>
#include <string>
#include <algorithm>

bool charPresent(std::string S, char ch)
{
    return find(S.begin(),S.end(),ch) != S.end();
}

int main() 
{
    int n,flag;
    std::string str;
    std::cin >> n;
    for(int i=1;i<=n;i++)
    {
        flag = 0;
        str = std::to_string(i);
        if(charPresent(str,'3'))
        {
            std::cout << "FIZZ";
            flag++;
        }
        if(charPresent(str,'5'))
        {
            std::cout << "BUZZ";
            flag++;
        }
        if(!flag)
        {
            std::cout << str;
        }
        std::cout << std::endl;
    }
    return 0;
}