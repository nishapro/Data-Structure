#include<iostream>
#include<stack>
using namespace std;
void reversestack(stack<int>&s)
{
	stack<int>s1;
	stack<int>s2;
	while(!s.empty())
	{
		int x=s.top();
		s1.push(x);
		s.pop();
	}
	while(!s1.empty())
	{
		int x=s1.top();
		s2.push(x);
		s1.pop();
	}
	while(!s2.empty())
	{
		int x=s2.top();
		s.push(x);
		s2.pop();
	}
	cout<<"after reversing of the stack by using 2 stack is:";
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main()
{
	stack<int>s;
	for(int i=1;i<=5;i++)
	{
		s.push(i);
	}
	reversestack(s);
	return 0;
}
