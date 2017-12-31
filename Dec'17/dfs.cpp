#include <bits/stdc++.h>
using namespace std;
vector <int> * a;
bool * marked;
int n;

int maxx;
int minn;

void pgrap(){
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i].size();j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}
}

void dfs(int v, int d){
	marked[v]=true;
	if(a[v].size()==1){
		if(d>maxx)
			maxx=d;
		if(d<minn)
			minn=d;
	}
	//cout<<v<<" "<<d<<endl;
	for(int i=0;i<a[v].size();i++){
		if(!marked[a[v][i]])
			dfs(a[v][i],d+1);
	}
}

int main(){
	cin>>n;
	a=new vector<int> [n];
	marked=new bool[n];
	int v1,v2;

	maxx=-INT_MAX;
	minn=INT_MAX;

	for(int i=0;i<n-1;i++){
		cin>>v1>>v2;
		a[v1].push_back(v2);
		a[v2].push_back(v1);
	}

	dfs(0,0);
	cout<<maxx<<" "<<minn<<endl;
	return 0;
}