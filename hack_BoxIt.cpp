#include<bits/stdc++.h>
using namespace std;
/*hackerrank >Prepare> C++> Classes> Box It!*/
class Box{
    private: long long l, b, h;
    public:
    Box(){l=0, b=0, h=0;} // default constructor
    Box(int length, int breadth, int height){ // parameterized constructor
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box &B){ // copy constructor
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength(){return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}
    long long CalculateVolume(){ return l*b*h;}

    friend bool operator < ( Box&A,Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }

};