#include<iostream>
#include<stack>

using namespace std;

void Store(stack<int>& s, int temp)
{
	if(s.empty() || temp>=s.top())
	{
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	Store(s, temp);
	s.push(val);
}

void sort(stack<int>&s)
{
	if(s.size()==1)
	{
		return;
	}
	int temp = s.top();
	s.pop();
	sort(s);
	Store(s, temp);
}


int main()
{
	stack<int> s1;
	s1.push(10);
	s1.push(2);
	s1.push(12);
	s1.push(16);
	sort(s1);
	while(s1.size()!=0)
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
    return 0;
}