#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* hackerRank > practice > c++ > stl > vector-sort*/
int main() {
    int N;
    cin >> N;  // taking N number of integer
    vector<int> v;
    
    // pushing an integer into a vector
    for(int i=0; i <N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    //  sorting vector
    sort(v.begin(),v.end());
    
    // display vector element
    for (int j=0; j<N; j++) {
       cout << v[j] << " ";
    }
    return 0;
}
