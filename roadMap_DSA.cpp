#include<iostream>
#include <windows.h>
using namespace std;
// Road map for dsa
int main(){
   // setting console color red
   HANDLE a = GetStdHandle (STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(a, 4 | FOREGROUND_INTENSITY);
   string data[]={"Array","Searching","Sorting","Matrix","String",
                  "Hashing","Linked list","Stack","Queue","Recurson",
                   "Backtracking","Tree","Binary search tree","Heap/Priority Queue",
                   "Graph","Dynamic programming"};
   cout<<"---------------- Road map for DSA ----------------\n";
   // setting console color cyan
   SetConsoleTextAttribute(a, 3 | FOREGROUND_INTENSITY);
   for (int i = 0; i<16; i++){
      cout << i+1 <<" " << data[i] <<"\n";
   }
   // setting console color red
   SetConsoleTextAttribute(a, 4 | FOREGROUND_INTENSITY);
   cout<<"----------------*****************------------------";
   return 0;
}