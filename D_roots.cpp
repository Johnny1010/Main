#include<iostream>  
#include<cmath>


using namespace std;

int main(){
	float a,b,c,D;
	cout<<"Enter a, b, c respectively: ";
	cin>>a>>b>>c;
	while(cin.fail()){
		cin.clear();
		cout<<"Please enter 3 valid numbers!";
		return 0;
	}
	D = pow(b,2) - 4*a*c;
	if (D<0 && a != 0) {
		cout<<"There are 2 imaginary roots";
	}
	else if (D>0 && a!=0){
		cout<<"There are 2 real roots";
	}else if (D==0 && a!= 0){
		cout<<"There is 1 real root";
	}else{
		cout<<"There are no roots!";
	}
	
	
}
