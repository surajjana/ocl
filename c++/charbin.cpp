#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	char c;
	cout<<"Enter a character : ";
	cin>>c;
	bitset<8> x(c);
	cout<<x<<"\n";
	cout<<(char)x.to_ulong()<<"\n";
	return 0;
}
