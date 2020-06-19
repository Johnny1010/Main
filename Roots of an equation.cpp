#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float a,b,c,D,x1,x2;
	
	cout<<"The equation: ax^2 + bx + c = 0"<<endl;
	cout<<"Enter a, b, c respectively: ";
	cin>>a>>b>>c;
	D = pow(b, 2) - 4*a*c;
	
	if(D>0&&a!=0){
		x1 = (-b + sqrt(D))/(2*a);
		x2 = (-b - sqrt(D))/(2*a);
		cout<<"2 real roots are: "<<x1<<" "<<x2;
	}else if(D==0&&a!=0){
		x1 = -b/(2*a);
		cout<<"1 real root is: "<<x1;
	
    }
	else if(a==0){
		x1 = -c/b;
		cout<<"1 answer is: "<<x1;
	}else{
		cout<<"There are no real roots!";
	}
	
	
	
}
