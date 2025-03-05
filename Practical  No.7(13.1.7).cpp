#include<iostream>
using namespace std;

int main(){
	int number[5];
	for(int i=0; i<5; i++){
		cout<<"Enter number of elements \t";
		cin>>number[i];
		
	}
	cout<<"The values you entered: \t"<<endl;
	for(int i=0; i<5; i++){
		cout<<number[i]<<endl;
	}
	
	int max = number[2];
	int avg ;
	int min = number[2];
	int sum =0;
	
	for(int i=0; i<5; i++){
		
	if(max < number[i]){
		max= number[i];
	}
	
	}
	cout<<"The max value is "<<max<<endl;
	
		for(int i=0; i<5; i++){
		
	if(min > number[i]){
		min= number[i];
	}
	
	}
	cout<<"The min value is "<<min;
	
	for(int i =0; i<5; i++){
	    sum= sum+number[i];
	}
   avg = sum/5;
   cout<<endl<<"avg is "<< avg;
}
