#include <iostream>
#include <string>
#include <stack>
using namespace std;

void evalPostfix(string s){
	stack<int> st;
	int i=0;
	while(i<s.length()){
		if (s[i]>='0' && s[i]<='9')
			st.push(s[i]-'0');
		else 
			{
				int j=st.top();
				st.pop();
				int k=st.top();
				st.pop();
				int l;
				if(s[i]=='+')
					l=k+j;
				else if (s[i]=='-')
					l=k-j;
				else if(s[i]=='/')
					l=k/j;
				else if(s[i]=='*')
					l=k*j;
				else 
					l=k^j;
				st.push(l);
			}
		i++;
	}
	int c=st.top();
	st.pop();
	cout<<c<<endl;
}

int main()
{
	int t;
	cin>>t;
	string s;
	while(t>0){
		cin>>s;
		evalPostfix(s);
		t--;
	}
	return 0;
}