#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,k;vector<int> vec;
    int flag=0,a;
    for(int i=1;i<n;i++) {cin>>a;vec.push_back(a);}
    if(k==1){
        for(int i=1;i<n;i++){
            if(vec[i-1]>vec[i]) {flag=1;break;}
        }
    }
    else{
        
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}