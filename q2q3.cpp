#include<iostream>

using namespace std;

void perfectnumber()
{
	int n, i, sum = 0;
	
	cout << "Enter  number (Perfect ) : ";
	cin >> n;
	
	for(i = 1 ; i < n ; i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		}
	}
			
	if(n == sum)
	{
		cout << n << " is a Perfect n";
	}
	else
	{
		cout << n << " is Not a Perfect n";
	}
 
}

void amstrong(){
    int n,r,sum=0,temp;    
       cout << " enter amstrong number  : " ; 
       cin >> n ;    
     temp=n;    
            while(n>0)    
       {    
             r=n%10;    
             sum+=r*r*r;    
            n=n/10;    
}    
             if(temp==sum)    
             cout <<"armstrong  number  " ;  
             else    
             cout <<"not armstrong number" ; 
}

int main() {
amstrong() ;
cout << "\n" << endl; 
perfectnumber() ;

}