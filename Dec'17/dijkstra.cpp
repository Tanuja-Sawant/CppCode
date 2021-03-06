//dijkstra with min heap


#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n,e;
	cin>>n>>e;
	vector < pair<int,int> > a[n];

	int v1,v2,w;

	for(int i=0;i<e;i++){
		cin>>v1>>v2>>w;
		a[v1].push_back(make_pair(w,v2));
		a[v2].push_back(make_pair(w,v1));
	}
	
	for(int i=0;i<n;i++){
		cout << i << ": ";
		for(int j=0;j<a[i].size();j++){
			cout << a[i][j].first<<" "<<a[i][j].second<<"|";	
		}cout<<endl;
	}

	cout<<endl;
	int dist[n];
	for(int i=0;i<n;i++){
		dist[i]=INT_MAX;
	}

	priority_queue< pair< int, int > ,vector< pair< int, int> >, greater< pair <int,int> > > pq;
    
    pq.push(make_pair(0,0));
	//cout<<p.first<<" "<<p.second<<endl;
	int wt,val;

	while(!pq.empty()){
		pair< int,int > p= pq.top();
		wt=p.first;
		val=p.second;
		pq.pop();
		cout<<wt<<" "<<val<<endl;
		if(dist[val]==INT_MAX)
			dist[val]=wt;

		for(int i=0;i<a[val].size();i++){
			if(dist[a[val][i].second]==INT_MAX){
				p=a[val][i];
				pq.push(make_pair(wt+p.first,p.second));
			}
		}
	
	}

	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<i<<" "<<dist[i]<<endl;


	
	return 0;
}



//dijkstra with max heap

#include <bits/stdc++.h>
using namespace std;
int * dist;
int n;
vector < pair<int,int> > *a;

void dijkstra(int sw,int sv ){
	priority_queue < pair<int,int> > q;
	q.push(make_pair(-sw,sv));

	int val;int wt;


	while(!q.empty()){
		pair<int,int> p=q.top();
		q.pop();
		wt=-p.first;
		val=p.second;

		if(dist[val]==INT_MAX)
			dist[val]=wt;

		for(int i=0;i<a[val].size();i++){
			if(dist[a[val][i].second]==INT_MAX){
				q.push(make_pair(-wt-a[val][i].first,a[val][i].second));
			}
		}
		

	}

	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<dist[i]<<endl;
}

int main()
{
	int e;
	cin>>n>>e;
	a= new vector < pair<int,int> >[n];

	int v1,v2,w;

	for(int i=0;i<e;i++){
		cin>>v1>>v2>>w;
		a[v1].push_back(make_pair(w,v2));
		a[v2].push_back(make_pair(w,v1));
	}
	
	for(int i=0;i<n;i++){
		cout << i << ": ";
		for(int j=0;j<a[i].size();j++){
			cout << a[i][j].first<<" "<<a[i][j].second<<"|";	
		}cout<<endl;
	}

	cout<<endl;
	dist=new int[n];
	for(int i=0;i<n;i++){
		dist[i]=INT_MAX;
	}

	dijkstra(0,0);



	
	return 0;
}
