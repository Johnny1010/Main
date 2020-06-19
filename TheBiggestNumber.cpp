#include<iostream>  
  
using namespace std; 
 int main(){
	int a, b, c;
	cout<<"Enter 3 numbers respectively: ";
	cin>>a>>b>>c;
	/*while(!cin>>a>>b>>c){
		cout<<"You did not enter 3 valid numbers!";
		cin.ignore();
	}*/
	while(cin.fail())
{
    cin.clear();
    cout << "You didn't enter 3 valid numbers!";
    return 0;
}
	
	if(a>=b && a>=c){
		cout<<"The biggest number is: "<<a;
		return 0;
	}else if(b>a && b>=c){
		cout<<"The biggest number is: "<<b;
		return 0;
	}else if(c>a && c>b){
		cout<<"The biggest number is: "<<c;
		return 0;
	}
}
 
