/*program to perform stack operation using array */
#include <iostream>
using namespace std;

class StackUsingArray {
	int *array;
	int index;
	int capacity;	

	public:
	StackUsingArray(int totalSize) {
		array = new int[totalSize];
		index = 0;
		capacity = totalSize;
	}

	// return the number of elements present in my stack
	int size() { 
		return index;
	}

	bool isFull(){
		return index == capacity; // return 1 when true and 0 when false
		    
	}
     
	bool isEmpty() {
		return index == 0; // return 1 when true and 0 when false
			
	}

	// insert element
	int push(int element) {
		if(isFull()) 
			cout <<endl <<"Stack full"<< endl;
		else{
		    array[index] = element;
		    index++;
		}
	}

	// delete element
	int pop() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;	
		}
		index--;
		return array[index];
	}
    // return top element of stack
	int top() {
		if(isEmpty()) 
			cout << "Stack is empty " << endl;	
		else
		    return array[index - 1];
	}
    // printing all element in stack
	void display(){
		if(isEmpty())
		   cout << "Stack is empty" << endl;
		else{
			cout <<"--------------------\n";
	        for(int i=size()-1; i>=0; i--)
	           cout << array[i] << "\n";
		    cout <<"--------------------\n";
		}
	}
};
int main(){
	int val , option;
	StackUsingArray s(5); // creating object and passing 5 
	cout << "**********--Stack Operation--**********" << endl;
	cout << "1.Push" << endl;
	cout << "2.Pop" << endl;
	cout << "3.Top" << endl;
	cout << "4.Size" << endl;
	cout << "5.IsEmpty" << endl;
	cout << "6.IsFull" << endl;
	cout << "7.Display" << endl;
	cout << "8.Exit"  << endl;
 	cout << "**********--------------------**********\n";
 do{
	cout << "Enter option\n";
	cin >> option;
	switch (option)
	{
	case 1:
		   cout << "Enter element to be pushed" << endl;
		   cin >> val;
           s.push(val);
		   break;
	case 2:
	       cout << s.pop() <<endl;
	       break;
	case 3:
	       cout << s.top() <<endl;
		   break;
	case 4:
	       cout << s.size() <<endl;
		   break;
    case 5:
	       cout << s.isEmpty() <<endl;
		   break;
	case 6:
	       cout << s.isFull() <<endl;
		   break;
	case 7:
	       s.display();
	       break;
     
	}
 }while(8!=option);
  return 0;
}
	
	