#include <iostream>
#include <string>
#include <stack>
#include <cstring>
using namespace std;

void revString(char *s, int len){
	stack<char> st;
	int i=0;
	while(i<len){
		st.push(s[i]);
		i++;
	}
	string str;
	while(i>0){
		str=str+st.top();
		st.pop();
		i--;
	}
	
	cout<<str<<endl;
}

int main()
{
	/*int t;
	cin>>t;
	string s;
	while(t>0){
		cin>>s;
		evalPostfix(s);
		t--;*/
	//}

	char s[50]="GeeksQuiz";
	revString(s,strlen(s));
	return 0;
}