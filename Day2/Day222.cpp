#include<iostream>
using namespace std;
int main()
{
//int x=70;
//for(x=69 ; x <= 70; x++) //69  ... 70.... 71
//{
//	if( x<75)
//		break;
// cout<<x<<endl;
//}
//cout<<x;

// Creating infinite loop without using 
// while, for or do while loops
int a = 5;
k : 
	a = a + 10; // 2147483645+10 = 3655, 3647 
	cout<<a;
	if (a<2)
		goto h; // 
	else
		goto k;
h:
	cout<<a;








return 0;
}
