#include <iostream>
#include <fstream>
using namespace std;
/** 
 * * Program to Write ODD, and EVEN Numbers Integer in Data Files
 * * date 27/march/2022
 * */
int main()
{
  string line;
	fstream file,even,odd;
  //creating file 
  file.open("master.txt",ios::trunc|ios::out);
  even.open("even.txt",ios::trunc|ios::out);
  odd.open("odd.txt",ios::trunc|ios::out);
  // writing operation
 cout << "enter number or press -1 to exit" << endl;
  while(getline(cin, line)){
    if(line == "-1")break;
    file << line; // write line in file
    file.close();
  }
  // fetching master file for even or odd
  file.open("master.txt",ios::in);
  int num;
  while(file >> num){
    if(num%2==0)
       even << num << " ";
    else
       odd << num << " "; 
  }
  file.close();
  even.close();
  odd.close();
  cout << "file operation success";
return 0;
}
