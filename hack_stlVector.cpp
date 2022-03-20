#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*hackerrank>>prepare>>c++>>stl >> vecter erase
date = 20-March-2022 */

int main() {
    int N;
    cin >> N;
    vector<int> vec;
    // taking element in vec
    for(int i=1; i<=N; i++){
		int val;
		cin >> val;
		vec.push_back(val);
    }
	//removing index element
	int x;
	cin >> x;
	vec.erase(vec.begin()+(x-1));
	//removing elements in the range [a,b)
	int a,b;
	cin >> a >>b;
	vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));

	//display output
	cout << vec.size() << endl;
	for(int x : vec){
		cout << x << " ";
	}
    return 0;
}


