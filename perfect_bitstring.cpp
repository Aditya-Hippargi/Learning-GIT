#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n,k;cin>>t;vector<vector <int>> vec;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        vec.push_back({n,k});
    }
    for(auto i: vec){
        for(int j=0;j<i[1];j++){
            cout<<"1";
        }
        for(int j=0;j<i[0]-i[1];j++){
            cout<<"0";
        }
        cout<<endl;
    }
}
