#include<iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


struct
{
float r1;
float r2;
float i1;
float i2;
}
bilangan;

int main(int argc, char** argv)
{
 cout<<"\n_________________________________";
 cout<<"\n|	BILANGAN KOMPLEKS	|";
 cout<<"\n_________________________________\n";
 cout<<" "<<endl;
 cout<<"bilangan real 1 = "; cin>>bilangan.r1;
 cout<<"bilangan imajiner 1 = "; cin>>bilangan.i1;
 cout<<endl<<endl;
 cout<<"bilangan real 2 = "; cin>>bilangan.r2;
 cout<<"bilangan imajiner 2 = "; cin>>bilangan.i2;
 cout<<endl<<endl;


cout<<"* PENJUMLAHAN *"<<endl;

	cout<<"("<<bilangan.r1<<"+"<<bilangan.i1<<"i) "
	    <<" + "<<"("<<bilangan.r2<<"+"<<bilangan.i2<<"i) = " 
	    <<bilangan.r1 + bilangan.r2 <<"+"<<bilangan.i1 + bilangan.i2<<"i"<<endl;
	cout<<endl<<endl;

cout<<"* PENGURANGAN *"<<endl;
	cout<<"("<<bilangan.r1<<"+"<<bilangan.i1<<"i) "
	    <<" - "<<"("<<bilangan.r2<<"+"<<bilangan.i2<<"i) = " 
	    <<bilangan.r1 - bilangan.r2 <<"+"<<bilangan.i1 - bilangan.i2<<"i"<<endl;
	cout<<endl<<endl;

cout<<"* PERKALIAN *"<<endl;
	cout<<"("<<bilangan.r1<<"+"<<bilangan.i1<<"i) "
	    <<" * "<<"("<<bilangan.r2<<"+"<<bilangan.i2<<"i) = " 
	    <<bilangan.r1*bilangan.r2<<"+"<<bilangan.r1*bilangan.i2<<"i"<<" + "
	 <<bilangan.r2*bilangan.i1<<"i"<<" - "<<bilangan.i1*bilangan.i2
	 <<" = "<<(bilangan.r1*bilangan.r2) - (bilangan.i1*bilangan.i2)<<" + "
	 <<(bilangan.r1*bilangan.i2) + (bilangan.r2*bilangan.i1)<<"i"<<
	cout<<endl<<endl;
	
cout<<"* PEMBAGIAN *"<<endl;
	cout<<"("<<bilangan.r1<<"+"<<bilangan.i1<<"i) "
		<<" / "<<"("<<bilangan.r2<<"+"<<bilangan.i2<<"i) = " 
		<<bilangan.r1/bilangan.r2<<"+"<<bilangan.i1/bilangan.i2<<"i"<<" + "
	<<bilangan.r2/bilangan.i1<<"i"<<" - "<<bilangan.i1/bilangan.i2
	<<" = "<<(bilangan.r1/bilangan.r2) - (bilangan.i1/bilangan.i2)<<" + "
	<<(bilangan.r1/bilangan.i2) + (bilangan.r2/bilangan.i1)<<"i"<<
	
	endl;
	
}

