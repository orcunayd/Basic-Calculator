#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{

   float sayi1,sayi2,x; char islem; 
   
   cout<<"You Can Use This Operations: /,*,+,-"<<endl;
   cout<<"Enter The Values: "<<endl;
   x:cin>>sayi1;
   
   for(; true;)
   {
   	cin>>islem>>sayi2;
   	if(islem =='+')
   	{ 
   	sayi1=sayi1+sayi2;
   	cout<<sayi1;
    }
   	else if(islem == '-')
   	{
	   
   	sayi1=sayi1-sayi2;
   	cout<<sayi1;
   	}
   	else if(islem == '*')
   	{
	   
   	sayi1=sayi1*sayi2;
   	cout<<sayi1;
   	}
   	else if(islem=='/')
   	{
	   
   	sayi1=sayi1/sayi2;
   	cout<<sayi1;
   	}
   	else
   	{
   	    cout<<"Please Enter The Correct Value! "<<endl;
   	    goto x;
	   }
   }
	
}