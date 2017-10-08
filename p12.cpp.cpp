#include <iostream>
using namespace std;
#include <

int main()
{
  void lcm(int num1,int num2,int c){
	if(c%num1==0 && c%num2==0)
		cout<<"LCM of the 2 numbers:"<<c;
	else	
		lcm(num1,num2,++c);
}
 
int main()
{
	int num1,num2,c;
        cout<<"\n \nProgram to find LCM of two numbers using recurssions";
	cout<<"\nEnter First Number";
	cin>>num1;
	cout<<"Enter Second Number";
	cin>>num2;
	c=max(num1,num2);
	lcm(num1,num2,c);
	return 0;
}
