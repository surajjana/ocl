#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
	ifstream ifile;
	ifile.open("data.txt");
	char str[50],new_str[50]="";
	//string msg;
	
		while(!ifile.eof())
		{
			ifile.getline(str,50);
			//ifile>>ch;
			//cout<<str;
			strcat(new_str,str);
			//strcat(new_str," ");
		}
	
	ifile.close();
	//cout<<endl<<msg[5];
	//cout<<endl;
	cout<<new_str<<endl;
	return 0;
}
