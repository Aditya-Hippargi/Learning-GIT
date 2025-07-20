#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> result;
void solve(){
    int n,k;string str;
    cin>>n>>k>>str;
    int good=0,bad=0;
    for(int i=0;i<n;i++){
        if(str[i]==str[n-i-1]) good++;
        else bad++;
    }
    cout<<(n/k)%2<<endl;
    if((n/k)%2==0){
        result.push_back("YES");
    }else result.push_back("NO");
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    for(int i=0;i<result.size();i++) cout<<result[i]<<endl;
}