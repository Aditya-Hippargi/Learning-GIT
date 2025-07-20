#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;int n,count=0;
    cin>>n>>str;
    for(int i=1;i<n;i++){
        if(str[i-1]==str[i]) count++;
    }
    cout<<count<<endl;
}