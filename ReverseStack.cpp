#include<iostream>
#include<stack>

using namespace std;

vector<int> helper;
int i = 0;

void reverse(stack<int>&s)
{
	if(s.size()==0)
	{
		return;
	}
	int temp = s.top();
	helper.push_back(temp);
	s.pop();
	reverse(s);
	s.push(helper[i++]);
}


int main()
{
	stack<int> s1;
	s1.push(10);
	s1.push(2);
	s1.push(12);
	s1.push(16);
	reverse(s1);
	while(s1.size()!=0)
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
    return 0;
}