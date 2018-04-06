#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int radio;
    int area;
    cout<<"ingrese en radio del ciculo"<<endl;
    cin>>radio;
    area=(3.1419*pow(radio,2))/2;
    cout<<"el area del circulo es: "<<area<<endl;
    return 0;
}
