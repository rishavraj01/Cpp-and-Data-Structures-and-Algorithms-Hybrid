#include<iostream>
using namespace std;
int main(){
	string name;
	cin>>name;
	for(int i=0;i<name.length();i++){
		cout<<name[i]<<endl;
	}
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	string c,d;
	cin>>a>>b;
	c = a+b;
	cout<<"The strings which you have given as input are: "<<a<<" "<<b<<endl; 
	cout<<"The combined word is: "<<c<<endl;
	cout<<"Length of combined word: "<<c.length()<<endl; 
	cout<<"d: "<<d;
	return 0;
}
