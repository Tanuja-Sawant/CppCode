#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int num;
string s;

void findLessOrEq(stack<int> &st, int x){
    if (st.size()>0){
        int a = st.top();
        if(a<=x){
            num++;
        }
        else
            return;
        st.pop();
        findLessOrEq(st,x);
        st.push(a);
    }
}

void span(stack<int> &st){
    if(st.size()>0){
        int x = st.top();
        st.pop();
        span(st);
        num=1;
        findLessOrEq(st, x);
        st.push(x);
        s+=to_string(num);
        s+=" ";
    }
}

int main() {
	int t,n;
	cin>>t;
	while(t>0){
	    stack<int> st;
	    s="";
	    cin>>n;
	    int arr[n];
	    int i=0;
	    while(n>0){
	        cin>>arr[i];
	        st.push(arr[i]);
	        i++;
	        n--;
	    }
	    span(st);
	    cout<<s<<endl;
	    t--;
	}
	return 0;
}
