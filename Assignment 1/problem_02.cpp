#include<iostream>

using namespace std;

void permute(const string &str); //because nothing seems to work if i dont declare them first
void permute(const string &str, int low, int high);

void permute(const string &str)
{
	permute(str,0,str.length());
}

void permute(const string &str, int low, int high)
{
	string str2 = str;
	if(low == high)
	{
		cout<<str<<endl;
	}
	else
	{
		for (int i=low; i < str.length();i++)
		{
			swap(str2[i],str2[low]);
			permute(str2,low+1,high);
			swap(str2[i],str2[low]);
		}
	}
}

int main(){
	permute("abc"); 
}

