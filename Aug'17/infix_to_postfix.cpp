#include <iostream>
#include <string>
#include <stack>
using namespace std;

int prec(char c){
	if(c=='^')
		return 3;
	if(c=='/' or c=='*')
		return 2;
	if(c=='+' or c=='-')
		return 1;
	return -1;
}

void infix2postfix(string infix){
	std::stack<char> st;
	st.push('N');
	string ns;
	for(int i=0; i<infix.length();i++){
		if((infix[i]>='a' && infix[i]<='z')||(infix[i]>='A' && infix[i]<='Z')){
			ns+=infix[i];
		}
		else if((infix[i])=='(')
			st.push('(');
		else if((infix[i])==')')
		{
			while(st.top() != 'N' && st.top()!='('){
				char c = st.top();
				st.pop();
				ns+=c;
			}
			if(st.top()=='('){
				st.pop();
			}
		}
		else{
			while(st.top()!='N' && prec(infix[i])<=prec(st.top())){
				char c = st.top();
				st.pop();
				ns+=c;
			}
			st.push(infix[i]);
		}

	}
	while(st.top()!='N'){
		char c = st.top();
		st.pop();
		ns+=c;
	}
	cout<<ns<<endl;
}

int main()
{

	string infix="(a+b)";
	infix2postfix(infix);
	return 0;
}
