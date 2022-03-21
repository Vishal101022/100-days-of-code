#include<bits/stdc++.h>
using namespace std;
/* hackerrank>>prepare>>c++>>stl >>map-stl
date = 21-march-2022 */
int main() {
    int q,y,type;
    string x;
    cin >> q;
    map <string,int> m;
    for(int i =0; i<q; i++){
      cin >> type  >> x;
        switch (type) {
            case 1: cin >> y; 
                    m[x]+=y; break;
                    
            case 2: m.erase(x); break;
            case 3: cout << m[x] << endl;
        }
   
    }
    return 0;
}