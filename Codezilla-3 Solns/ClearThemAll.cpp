#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <limits>
#include <vector>
#include <iostream>

using namespace std;

int arrayErasing(std::vector< int > A) {
  int i = A.size(), r = 3;
  while (--i) r += A[i] ^ A[i - 1];
  return r / 2;
}


int main() {
    vector<int> A;
    int input,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input;
        A.push_back(input);
    }
    cout<<arrayErasing(A)<<endl;
    return 0;
}