#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	bitset<8> x(a);
	cout<<"Result : "<<x<<endl;
	return 0;
}
