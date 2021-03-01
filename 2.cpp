#include<iostream>
#include<string.h>

using namespace std;

int main()

{
    char kata[10];
    int panjang_kata,a;
    bool palindrome = true;
    int belakang;
    
    cout<<"masukan kata : "; cin>>kata;
    panjang_kata=strlen(kata);
    
    cout<<"hasil : "<<endl;
    for(a=panjang_kata;a>=1;a--)
    {
        char stack=kata[a-1];
        cout<<stack;
    }
    cout<<""<<endl;
	for(int a=0; a<panjang_kata; a++)
    {
        
        if((char)tolower(kata[a])!=(char)tolower(kata[belakang]))
        {
            palindrome = false;
            break;
        }
        belakang--;
    }
    if(palindrome)
    cout<<"Palindrom"<<endl;
    else
    cout<<"Bukan Palindrom"<<endl;
}
