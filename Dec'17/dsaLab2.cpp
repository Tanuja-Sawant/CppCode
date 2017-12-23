//modular exponentiation
#include <bits/stdc++.h>
using namespace std;

long long int m=1000000007;

long long int fa(long long int a, long long int b){
    if(b>2){
       long long int q=b/2;
        long long int s=fa(a,q);
        
        if(b%2==0)
            return ((s%m)*(s%m))%m;
       return ((s%m)*((s*a)%m))%m;
    }
    else return ((long long int)pow(a,b))%m;
}
int main() {
    long long int a,b;
    cin>>a>>b;
    cout<<fa(a,b);
    return 0;
}

//mergeSort

#include<bits/stdc++.h>
using namespace std;

vector <int> mergee(vector<int> arr1,vector<int> arr2){
    vector <int> arr;
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0;
    int j=0;
    while(i+j<n1+n2){
        if(i==n1){
            arr.push_back(arr2.at(j++));
        }
        else if(j==n2){
            arr.push_back(arr1.at(i++));
        }
        else if(arr1[i]<arr2[j])
            arr.push_back(arr1[i++]);
        else
            arr.push_back(arr2[j++]);
    }
    return arr;
}

vector <int> sort(vector <int> arr){
    if(arr.size()==1)
        return arr;
    int n1=arr.size()/2;
    int n2=arr.size()-n1;
    vector <int> arr1;
    vector <int> arr2;
    
    for(int i=0; i<n1;i++)
        arr1.push_back(arr[i]);
    for(int i=0;i<n2;i++)
        arr2.push_back(arr[n1+i]);
    
    
     arr1 = sort(arr1);
     arr2 = sort(arr2);
    return mergee(arr1,arr2);
}

int main() {
    int n;
    cin>>n;
    int t;
    vector <int> arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    
    arr=sort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
