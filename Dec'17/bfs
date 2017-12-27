//dsa lab6, gaurav and aishwarya

#include <bits/stdc++.h>
using namespace std;
vector<int> * a;
bool * marked;
int * level;
void bfs(int s){
    marked[s]=true;
    queue <int> q;
    q.push(s);
    level[s]=0;
    while(!q.empty()){
        int v=q.front();
        cout<<v<<" "<<level[v]<<endl;
        q.pop();
        for(int i=0;i<a[v].size();i++){
            if(!marked[a[v][i]]){
                marked[a[v][i]]=true;
                q.push(a[v][i]);
                level[a[v][i]]=level[v]+1;
               }
        }
    }   
}
int main() {
    int n;
    cin>>n;
    a= new vector<int> [n];
    marked= new bool[n];
    int v1,v2;
    level=new int[n]; 
    for(int i=0;i<8;i++){
        cin>>v1>>v2;
        a[v1].push_back(v2);
        a[v2].push_back(v1);
    }
    bfs(0);
    
    
    
    return 0;
}
