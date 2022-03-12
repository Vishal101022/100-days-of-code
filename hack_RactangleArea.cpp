#include<bits/stdc++.h>
using namespace std;
/* hackerrank>prepare>c++>inheritance> rectangle area
 * date 9-march-2020
 * Create classes Rectangle and RectangleArea
 */
 // bsse class 
class Rectangle{
    public:
    int width,
        height;
    public:
    void display(){
       cout << width <<" " <<height <<endl;        
    }
};
// derived class
class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin >> width >> height;
    }
    // function overload
    void display(){
        cout << width * height;
    }
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}