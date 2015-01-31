/**
  * Program : Implementation of Single Pad Cryptography Algorithm
  * Developer : Suraj Kumar Jana
  * Company : Opencube Labs
**/


#include<iostream>
#include<cstring>
#include<bitset>
#include<fstream>

using namespace std;

char singlepad(char str,int key[]);
int xor_fn(int a,int b);

//int key[] = {0,0,1,0,0,0,0,1};

int main()
{
	char input[50],msg[50],new_msg[50];
	int i=0,len,key[8];
  	ifstream ifile;
	ifile.open("data.txt");
	while(!ifile.eof())
	{
		ifile.getline(input,50);
		strcat(msg,input);
	}
	len = strlen(msg);
	for(int j=0;j<=255;j++){
		bitset<8> m(j);
		for(int p=0;p<8;p++){
			key[p] = m[p];
		}
		cout<<"Key "<<j<<": "<<m<<endl;
		cout<<"Decryption "<<j<<" : ";
		for(i=0;i<len;i++)
		{
			new_msg[i] = singlepad(msg[i],key);
			cout<<new_msg[i];
		}
		cout<<"\n";
	}
	cout<<"\n";
	return 0;
}

char singlepad(char str,int key[])
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
