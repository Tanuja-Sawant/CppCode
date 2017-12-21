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
