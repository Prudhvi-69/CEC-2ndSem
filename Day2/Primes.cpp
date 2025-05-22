#include<iostream>
using namespace std;
int main()
{
//int x=70;
//for(x=69 ; x <= 70; x++) //69  ... 70.... 71
//{
//		if( x<75)
//				break;
//		cout<<x<<endl;
//}
//cout<<x;








int n;
int factors=0;
cin>>n;
for(int i=1; i<=n ;i++)
	if ( n % i == 0)
		factors++;
if(factors == 2)  cout<<"Prime";
else	cout<<"Not Prime";



return 0;
}
