//prints next greater element in array using two loops

#include <iostream>
using namespace std;

void nextGreat(int a[],int size){
    
    for(int i=0;i<size;i++){
        int temp=0;
        for(int j=i+1;j<size;j++){
            if(a[j]>a[i]){
                temp=1;
                cout<<a[j]<<" ";
                break;
            }
        }
        if(temp==0)
            cout<<-1<<" ";
    }
    
}

int main() {
    int t,n;
    cin>>t;
    while(t>0){
        cin>>n;
        int a[n];
        int i=0;
        while(i<n){
            cin>>a[i];
            i++;
        }
        nextGreat(a,n);
        cout<<endl;
        t--;
    }
	return 0;
}
