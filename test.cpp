#include <iostream>
#include <iomanip> 
using namespace std;
/* hackerrank>>prepare>>c++>> manipulator >>print pretty
date -14/march/2020 */
int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        // A formatting
        cout << hex << left
             << showbase << nouppercase
             << (long long)A <<"\n";
             
        // B  formatting
        cout <<dec << right <<setw(15) 
             << setfill('_') <<showpos
             <<fixed << setprecision(2)
             << B <<"\n";
        
        // C formatting
        cout <<scientific << uppercase
             <<noshowpos << setprecision(9)
             << C <<"\n";
	}
	return 0;

}