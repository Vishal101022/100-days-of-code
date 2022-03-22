#include <iostream>
using namespace std;
/*hackerrank>all contest> hourrank 19 > recover the array
date = 22/march/2022 */
int main()
{   int count=0,n,val;
    cin >> n;
    int *array = new int[n];
    // taking each element one by one 
    for(int i = 0; i< n; i++){
        cin >> val;
        array[i] = val;
    }
    // recover new line
    for(int i = 0; i<n; i++){
          i += array[i];
          //cout << "\n";
          count++;
    }
    cout << count;
    return 0;
}