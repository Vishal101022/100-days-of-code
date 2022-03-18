#include <bits/stdc++.h>
using namespace std;
// recursion TOH(towerOfHanoi)
// date 18-march-2022
void TOH(int n, char Beg_rod,char End_rod, char aux_rod)
{
	if (n == 0)
	{
		return;
	}
	TOH(n - 1, Beg_rod, aux_rod, End_rod);
	cout << "Move disk " << n << " from rod " << Beg_rod <<" to rod " << End_rod << endl;
	TOH(n - 1, aux_rod, End_rod, Beg_rod);
}


int main()
{
     int n; 
     cout << "Enter Number of Disks\n";
     cin >> n;
	TOH(n, 'A', 'C', 'B'); // A, B and C are names of rods
	return 0;
}

