#include<iostream>
using namespace std;

int Recursion(int n);

int main()
{
	int x = 0;
	cout <<"Enter number:"<<endl;
	cin>>x;
	cout<<(Recursion(x));
}

int Recursion(int n)
{
	int n2 = n/2;
	if (n<2){
		return n;
	}else{
		return n % 2 + Recursion(n2);
	}
}
