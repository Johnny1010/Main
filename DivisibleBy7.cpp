#include<iostream>  
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
	bool run = true;
	int a;
	while(run){

	cout<<"Enter a number: ";
	while(!(cin>>a)){
		cout<<"Error!";
		return 0;
	}
	
	if(a%7 == 0){
		cout<<"This numer is divisible by 7"<<endl;
	}else{
		cout<<"This number is not divisible by 7"<<endl;
	}

}
return 0;
}


