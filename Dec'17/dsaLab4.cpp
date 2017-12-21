//The Square Root Sale

#include <bits/stdc++.h>
using namespace std;

double bs(long double lo, long double hi){
    long double n=hi;
    long double mid;
    while(hi-lo>0.01){
        mid= (hi+lo)/2;
        // cout<<lo<<mid<<hi;
        if(mid >n/mid)
            hi=mid;
        else lo=mid;
    }
    return mid;
}


int main() {
    long double n;
    cin>>n;
    cout<<(int)ceil(bs(0.0,n));
    return 0;
}







//Battle of the Nerds

#include <bits/stdc++.h>
using namespace std;

int bs(int lo,int hi,int arr[],int s){
    if(s>arr[hi])
        return hi+1;
    int mid;
    while((hi!=lo)){
        mid=(lo+hi)/2;
        //cout<<lo<<" "<<mid<<" "<<hi<<endl;
        if(arr[mid]>s)
            hi=mid;
        else
            lo=mid+1;
    }
    return lo;
}

int main() {
    int n,q;
    cin>>n>>q;
    int d1,d2;
    int arr[n];
    int s[q];
    double l[q];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int j=0;j<q;j++)
        cin>>s[j]>>l[j];
    for(int k=0;k<q;k++){
        int g= bs(0,n-1,arr,s[k]);
        //cout<<g<<endl;
        if(g==0){
           d1=(arr[g]-s[k])*2;
          if(d1<l[k])
                cout<<arr[g]<<endl;
            else
                cout<<-1<<endl;
            continue;
        }
        else if(g==n){
            d2=(s[k]-arr[g-1])*2;
            if(d2<=l[k])
                cout<<arr[g-1]<<endl;
            else
                cout<<-1<<endl;
            continue;
        }
        d1=(arr[g]-s[k])*2;
        d2=(s[k]-arr[g-1])*2;
        //cout<<d1<<" "<<d2<<endl;
        if(d1<d2){
            if(d1<l[k])
                cout<<arr[g]<<endl;
            else
                cout<<-1<<endl;
        }   
        else{
            if(d2<=l[k])
                cout<<arr[g-1]<<endl;
            else
                cout<<-1<<endl;
        }    
    }
    return 0;
}
