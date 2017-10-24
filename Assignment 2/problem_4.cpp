#include<iostream>
#include<list>
using namespace std;

template <typename Object>
list<Object> uniqueValues(const list<Object> & l1, const list<Object> & l2);

int main()
{
	list<int> l1 = {1,3,4,6,57,2456};
	list<int> l2 = {2,3,5,34,57,2456};
	
	list<int> result = uniqueValues(l1,l2);
	
	for(auto r: result)
		cout << r << endl;
	
	return 0;
}

template <typename Object>
list<Object> uniqueValues(const list<Object> & L1, const list<Object> & L2)
{
	list<Object> uniqueValues;
	typename list<Object>:: const_iterator iterL1 = L1.begin();
	typename list<Object>:: const_iterator iterL2 = L2.begin();
	
	while(iterL1 != L1.end() && iterL2 != L2.end())
	{
		if(*iterL1 == *iterL2)
		{
			uniqueValues.push_back(*iterL1);
			iterL1++;
			iterL2++;
		}
		else if(*iterL1 < *iterL2)
			iterL1++;
		else
			iterL2++;
	}
	
	return uniqueValues;
}
