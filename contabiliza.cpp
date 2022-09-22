#include<iostream>
using namespace std;

int main()
{
	int BDGO_i=0,BDGO_l;
	float BDGO_x,BDGO_s=0;
	cout<<"ingrese el limite BDGO_l="; cin>>BDGO_l;
	do{
		
	cout<<"ingrese el numero BDGO_x="; cin>>BDGO_x;
	BDGO_i=BDGO_i+1;
	BDGO_s=BDGO_s+BDGO_x;



	}while(BDGO_i<BDGO_l);
	cout<<"Se ingresaron "<<BDGO_l<<" numeros "<< "que sumaron "<<BDGO_s<<endl;
	return 0;



}
