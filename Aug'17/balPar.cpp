//check balanced parantheses of a string

#include <iostream>
#include <stack>
#include <string>
using namespace std;

void balPar(string s){
    stack<char> st;
    int i=0;
    while(i<s.length()){
        if(s[i]=='(' or s[i]=='{' or s[i]== '[')
            st.push(s[i]);
        else if(s[i]==')' or s[i]=='}' or s[i]== ']')
            {
                if(st.empty())
                 {
                    cout<<"not balanced"<<endl;
                    return;
                }
                char t=st.top();
                st.pop();
                if(!(t=='['&&s[i]==']' or t=='{'&&s[i]=='}' or t=='('&&s[i]==')'))
                {
                    cout<<"not balanced"<<endl;
                    return;
                }
                    
            }
        i++;
    }
    if(!st.empty())
        cout<<"not balanced"<<endl;
    else
        cout<<"balanced"<<endl;
}

int main() {
	int t;
	cin>>t;
	string s;
	while(t>0){
	    cin>>s;
	    balPar(s);
	    t--;
	}
	return 0;
}
