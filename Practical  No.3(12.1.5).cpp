#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"Enter any number less theb 4 \t";
	cin>>number;
	
	switch(number){
		case 1:
			cout<<"your number is 1";
			break;
			
		case 2:
			cout<<"your number is 2";
			break;
			
		case 3:
			cout<<"your number is 3";
			break;
			
		case 4:
			cout<<"your number is 4";
			break;
		default: cout<<"number is not less then 4";
	}
}
