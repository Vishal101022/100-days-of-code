#include<iostream>
#include<math.h>
using namespace std;
/* min Heap implementation using Array
   date- 17/april/2022 */                              
class minHeap{
  private:
  int capacity,heap_size,*array;
  public:
    minHeap(int n){
		array=new int[n];
		capacity=n;
		heap_size=0;
	}
	void insertKey(int k);
	int extractMin();

	int getMin()          {return array[0];}

	void deleteKey(int i);
	void decreaseKey(int i, int new_val);
	void minHeapify(int i);

	int parent(int i)      {return (i-1)/2;}
	int leftchild(int i)   {return (2*i+1);}
	int rightChild(int i)  {return (2*i+2);}

	int height() {return floor(log2(heap_size)+1);}
	void display()
	{
		if(heap_size<=0)
	   cout<<"Heap is empty\n";
	else{
	for(int i=0; i<heap_size; i++)
	    cout<<array[i] <<" ";
    cout << "\n";
	}
    }
};                         

          // function to insert new value in minHeap
void minHeap::insertKey(int k){
	if(heap_size==capacity){
		cout<<"overflow\n";
		return;
	}
	heap_size++;
	int i=heap_size-1;
	array[i]=k;
	while(i!=0 && array[parent(i)]>array[i]){
		swap(array[i],array[parent(i)]);
		i=parent(i);
	}
}
         // functon to remove  root element from minHeap
int minHeap::extractMin(){
	if(heap_size<=0){
		cout<<"Heap is empty\n";
		return 0;
	}
	else if(heap_size==1){
		heap_size--;
		return array[0];
	}
	int root=array[0];
	array[0]=array[heap_size-1];
	heap_size--;
	minHeapify(0);
	return root;
}

 // minHeapify function to restructure whole binary tree to maintain heap property
void minHeap::minHeapify(int i){
	int l,r,smallest=i;
	l=leftchild(i);
	r=rightChild(i);
	if(l<heap_size && array[l]<array[i])
	      smallest=l;
	else if(r<heap_size && array[r]<array[smallest])
	      smallest=r;
    else if(smallest!=i){
	     swap(array[i],array[smallest]);
		 minHeapify(smallest);
	}
}
    
void minHeap::decreaseKey(int i,int new_val){
	array[i]=new_val;
	while(i!=0 && array[parent(i)]>array[i]){
		swap(array[i],array[parent(i)]);
		i=parent(i);
	}
}
/* This function deletes node at index i. It first reduced value to minus
   infinite, then calls extractMin() */ 
void minHeap::deleteKey(int i){
     decreaseKey(i,INT32_MIN);
	 extractMin();
}
      // driver functon 
int main(){
	int val , option,n;
	cout<<"Enter Heap Capacity\n";
	cin>>n;
	cout<<"Heap is created\n";
	minHeap h(n);  // object created
	do{
	cout << "**********--Heap Operation--**********" << endl;
	cout << "1.Insert Value\n";
	cout << "2.Extract minimum value\n";
	cout << "3.Delete Node" << endl;
	cout << "4.Height" << endl;
	cout << "5.Get Minimum" << endl;
	cout << "6.Display" << endl;
	cout << "7.Exit"  << endl;
 	cout << "**********--------------------**********\n";
	cout << "Enter option\n";
	cin >> option;
	switch (option)
	{
	case 1:
		   cout << "Enter element to be inserted: ";
		   cin >> val;
           h.insertKey(val);
		   break;
	case 2:
	       cout<<"Extracted Root: "<<h.extractMin()<<"\n";
	       break;
	case 3:
	       cout<<"Enter Node to be deleted: ";
	       int del;
		   cin>>del;
	       h.deleteKey(del);
		   break;
	case 4:
	       cout<<h.height()<<"\n";
		   break;
    case 5:
	       cout<<h.getMin()<<"\n";
		   break;
	case 6:
	       h.display();
	       break;
	}
 }while(7!=option);
  return 0;
}
