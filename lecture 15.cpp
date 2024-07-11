#include<iostream>
using namespace std;
int compare(int a,int b) {
    if(a > b) {
        return a;
    }else {
        return b;
    }
}
int main(){
    int a = 4;
    int b = 6;
    cout<<"The greater number is "<<compare(a,b);
    return 0;
}

#include<iostream>
using namespace std;
int Finder(int a){
    if(a==5){
    cout<<"Its five";
    }else {
        cout<<"ERROR";
    }
    return 0; // Add a return statement here
}
int main(){
    int a = 5;
    Finder(a);
    return 0;
}
