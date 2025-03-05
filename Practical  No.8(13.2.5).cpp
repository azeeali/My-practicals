#include<iostream>
using namespace std;

int main(){
	int m1[4][4], m2[4][4], sum[4][4], sub[4][4], mul[4][4]={0},
	resultant[4][4], add;
	
for(int i=0; i<4; i++){
		for(int k=0; k<4; k++ ){
		    cout<<"Enter elements of m1 \t";
			cin>>m1[i][k];
		}
	}
	for(int i=0; i<4; i++){
		for(int k=0; k<4; k++ ){
		   
			cout<< " "<<m1[i][k];
		}
		cout<<endl;
	}
for(int i=0; i<4; i++){
		for(int k=0; k<4; k++ ){
		    cout<<"Enter elements of m2 \t";
			cin>>m2[i][k];
		}
	}
	for(int i=0; i<4; i++){
		for(int k=0; k<4; k++ ){
		   
			cout<< " "<<m2[i][k];
		}
		cout<<endl;
	}
	
	 cout<<"Result of adding both m1 and m2"<<endl;
for(int i=0; i<4; i++){
		for(int k=0; k<4; k++ ){
		   sum[i][k]= m1[i][k]+m2[i][k];
		   cout<<" "<<sum[i][k];
		}
		cout<<endl;}
			 cout<<"Result of subtracting both m1 and m2"<<endl;
for(int i=0; i<4; i++){
		for(int k=0; k<4; k++ ){
		   sub[i][k]= m1[i][k]-m2[i][k];
		   cout<<" "<<sub[i][k];
		}
		cout<<endl;
	}

		cout << endl << "Multiplication of two matrices" << endl << endl;
	for (int i = 0; i < 4; i++){
		
		for(int j = 0; j < 4; j++){
				add = 0;	
		for (int k = 0; k < 4; k++){
		add += m1[i][k] * m2[k][j];
									}
		mul[i][j] = add;
									}
								}
								
								
	for (int i = 0; i < 4; i++){
		for (int k = 0; k < 4; k++){
			cout << mul[i][k] << " ";
		}
		cout << endl;
					


	
}
cout<<"chaaka chaakk la";
}


