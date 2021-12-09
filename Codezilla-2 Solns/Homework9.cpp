#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <limits>
#include <vector>
#include <iostream>

using namespace std;

int specialPrimes(int N) 
{
  for(int i = 2, j;;i++) 
  {
    for (j = 1; j++ < i && i % j;);
    if (i == j) 
    {
      for (j = 0; j < i && (j * j - 2) % i; j++);
      if (i - j && !--N)
        return i;
    }
  }

}

int main() {
    int n;
    cin >> n;
    cout << specialPrimes(n) <<endl;
    return 0;
}