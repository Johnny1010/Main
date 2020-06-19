#include<iostream>  
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
	char Character;
	char BigCharacter;
	bool run = true;
	while(run){
	
	cout<<"Enter a letter: ";
	cin>>Character;
	
	BigCharacter = toupper(Character);
	
	if(BigCharacter  == 'A' || BigCharacter  == 'O' || BigCharacter  == 'E' || BigCharacter  == 'I'  || BigCharacter  == 'U'){
		cout<<"This letter is a vowel"<<endl;
	}else{
		cout<<"This letter is not a vowel"<<endl;
	}

}}

