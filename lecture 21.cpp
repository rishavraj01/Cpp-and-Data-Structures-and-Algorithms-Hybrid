#include<iostream>
using namespace std;
int main (){
	int a=5;
	cout<<"address of a is "<<&a;
	return 0;	
}

// Declare the pointers concepts.

#include<iostream>
using namespace std;
int main(){
	string name="Mumbai";
	string*ptr=&name;
	cout<<ptr<<endl<<&name;
	return 0;
}
