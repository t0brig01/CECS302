#include<iostream>
#include<vector>
using namespace std;

int minSubSum(const vector<int> & v);
int maxSubProd(const vector<int> & v);

int main()
{
	vector<int> test = {1,7,4,65,34,-70,23,-12,-8,7,9};
	vector<int> test2 = {1,2,3,-2,-2,0,1,4,2}; 
	
	cout << "Min subsequence sum " << minSubSum(test) << endl;
	cout << "Max subsequence product " << maxSubProd(test2) << endl;
	
	return 0;
}

int minSubSum(const vector<int> & v)
{
	int minSum = 0, thisSum = 0;
	
	for(int i = 0; i < v.size(); i++)
	{
		thisSum += v[i];
		if((v[i] + v[i-1]) < thisSum)
		{
			thisSum = v[i] + v[i-1];
		}
		
		if(thisSum < minSum)
		{
			minSum = thisSum;
		}
	}
	
	return minSum;
}

int maxSubProd(const vector<int> & v)
{
	int maxProd = 1, thisProd = 1;

	for(int i = 0; i < v.size(); i++)
	{
		thisProd *= v[i];
		if(thisProd > maxProd)
		{
			maxProd = thisProd;
		}
		if(thisProd == 0)
		{
			thisProd = 1;
		}
	}
	
	return maxProd;
}

