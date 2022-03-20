#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* hackerrank>>prepare>>c++>>stl>lower_bound
date = 20-march-2022 */

int main() {
    int N;
    cin >> N;
    vector<int> vec;

    //taking sorted element in vec
    for(int i=1; i<=N; i++){
        int val;
        cin >> val;
        vec.push_back(val);
    }
    // taking no. of queries
    int q;
    cin >> q;
    for(int i=1; i<=q; i++){
        int y;
        cin >> y;
        // iterator 
        auto it = lower_bound(vec.begin(),vec.end(),y);
        if(*it == y)
           cout << "Yes " << (it - vec.begin()+1) << endl;
        else 
           cout <<"No " << (it - vec.begin()+1) << endl;
    }
    return 0;
}
