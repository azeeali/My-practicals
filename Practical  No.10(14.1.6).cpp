#include<iostream>
using namespace std;

int Area(int radius){
    int formulla = 2 * 3.14 * radius;
    cout<<"Area of circle is "<<formulla<<endl;
}

int tri(int lenght, int width){
    int Area = ( lenght * width) * 1/2;
    cout<<"The area of triangle is "<<Area<<endl;
}

int para(int base , int height){
    int parr = (base * height);
    cout<<"The area of parallelogram is "<<parr;
}

int main(){
    int radius;
    int length,width,base,height;
cout<<"What is the radius of circle? ";
cin>>radius;
cout<<"What is the length of triangle? ";
cin>>length;
cout<<"What is the width of triangle? ";
cin>>width;
cout<<"What is the height of parallelogram? ";
cin>>height;
cout<<"What is the base of parallelogram? ";
cin>>base;

Area(radius);
tri(length, width);
para(base,height);

return 0;
}