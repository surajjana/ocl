/**
  * Program : Implementation of Single Pad Cryptography Algorithm
  * Developer : Suraj Kumar Jana
  * Company : Opencube Labs
**/


#include<iostream>
#include<cstring>
#include<bitset>

using namespace std;

char singlepad(char str);
int xor_fn(int a,int b);

int key[] = {0,0,1,0,0,0,0,1};

int main()
{
	char input[50],key[8],msg[50],msg1[50];
	int i=0,len;
	//cout<<"Enter Key : ";
	//cin.getline(key,8);
	//cout<<"\n\n";
	cout<<"Enter a string : ";
	cin.getline(input,50);
	len = strlen(input);
	cout<<len<<"\n";
	for(i=0;i<len;i++)
	{
		msg[i] = singlepad(input[i]);
	}
	for(i=0;i<len;i++)
	{
		msg1[i] = singlepad(msg[i]); 
	}
	cout<<i<<"\n";
	cout<<"Secret Message : "<<msg<<"\n";
	cout<<"Decrypted Message : "<<msg1;
	cout<<"\n";
	return 0;
}

char singlepad(char str)
{
	int i,j,b[8];
	char res;
	bitset<8> x(str);
	bitset<8> y;
	for(j=0;j<8;j++)
	{
		int a = x[j];
		b[j] = xor_fn(a,key[j]);
	}
	for(i=0;i<8;i++){
		y[i] = b[i];
	}
	res = (char)y.to_ulong();
	return res;
}

int xor_fn(int a,int b)
{
	if(a==b)
		return 0;
	else
		return 1;
}
