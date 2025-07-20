#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> result;
void solve(){
    int n,j,k;cin>>n>>j>>k;vector<int> vec;vec.resize(n);
    int target,size,i=0,flag=0,max;
    for(int p=0;p<n;p++) cin>>vec[p];
    if(k>=2){
        flag=1;
    }else{
        max=*max_element(vec.begin(),vec.end());
        //cout<<vec[j-1]<<max<<endl;
        if(max<=vec[j-1]) flag=1;
        else flag=0;
    }
    
    if(flag==1) result.push_back("YES");
    else result.push_back("NO");
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    for(int i=0;i<result.size();i++) cout<<result[i]<<endl;
}