#include<iostream>  
  
using namespace std; 
 int main(){
	int a, b, c;
	cout<<"Enter 3 numbers respectively: ";
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<"The biggest number is: "<<a;
		return 0;
	}else if(b>a && b>c){
		cout<<"The biggest number is: "<<b;
		return 0;
	}else if(c>a && c>b){
		cout<<"The biggest number is: "<<c;
		return 0;
	}if(a==b && a==c && b==c){
		cout<<"The numbers are equal";
		return 0;
	}if(a==b || a==c || b==c){
		cout<<"you entered the same number 2 times";
	}
 }  
