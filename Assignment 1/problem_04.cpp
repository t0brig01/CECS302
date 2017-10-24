#include<iostream>

using namespace std;

template <class temp>
class Collection{
	public:
		Collection();
		bool isEmpty() const;
		void makeEmpty();
		void insert(temp t,int e);
		void remove(temp t);
		bool contains(temp t) const;
	private:
		temp* obj;
		int size;
};
template <class temp>
Collection<temp>::Collection()
{
	size = 10;
	obj = new temp[size];
	for(int i = 0;i<size;i++)
	{
		obj[i] = '\0';
	}
}
template <class temp>
bool Collection<temp>::isEmpty() const
{
	for (int j = 0;j<size;j++)
	{
		if (obj[j] != '\0')
		{
			return false;
		}
	}
	return true;
}
template <class temp>
void Collection<temp>::makeEmpty()
{
	for (int k = 0; k<size;k++)
	{
		obj[k] = '\0';
	}
	cout<<"makeEmpty was used"<<endl;
}
template <class temp>
void Collection<temp>::insert(temp t, int e) {
	obj[e] = t;
	cout<<t<<" was inserted"<<endl;
}
template <class temp>
void Collection<temp>::remove(temp t)
{
	obj[t] = '\0';
}
template <class temp>
bool Collection<temp>::contains(temp t) const
{
	for (int s = 0; s<size;s++)
	{
		if (obj[s]==t)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	string emp;
	Collection<int> a;
	if (a.isEmpty() == false)
	{
		emp = "not ";
	}
	cout<<"The collection is " << emp << "empty"<<endl;
	
	a.insert(5,2);
	a.insert(9,6);
	emp = "";
	if (a.isEmpty() == false)
	{
		emp = "not ";
	}
	cout<<"The collection is " << emp << "empty"<<endl;
	emp = "";
	if (a.contains(5)==false)
	{
		emp = "does not ";
	}
	cout<<"The collection "<< emp<< "contains 5"<<endl;
	emp = "";
	if (a.contains(2)==false)
	{
		emp = "does not ";
	}
	cout<<"The collection "<< emp<< "contain 2"<<endl;
	emp = "";
	if (a.contains(9)==false)
	{
		emp = "does not ";
	}
	cout<<"The collection "<< emp<< "contains 9"<<endl;
	emp = "";
	a.makeEmpty();
	if(a.isEmpty() == false)
	{
		emp = "not ";
	}
	cout<<"The collection is "<<emp<< "empty"<<endl;
	return 0;
}
