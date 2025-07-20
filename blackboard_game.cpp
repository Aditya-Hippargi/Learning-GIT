#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n;
    vector<char*> result;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        (n%4==0)? result.push_back("Bob"):result.push_back("Alice");
    }
    for(auto i:result) cout<<i<<endl;
}