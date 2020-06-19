#include<iostream>  
#include<cmath>


using namespace std;

int main(){
	float a,b,c,D;
	cout<<"Enter a, b, c respectively: ";
	cin>>a>>b>>c;

	D = pow(b,2) - 4*a*c;
	if (D<0) {
		cout<<"There are 2 imaginary roots";
	}
	else if (D>0){
		cout<<"There are 2 real roots";
	}else{
		cout<<"There is 1 real root";
	}
	
	
}
