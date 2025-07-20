#include <iostream>
#include <string>
using namespace std;

void check(string str,int n){
    int count=0;
    while(str.find("xxx")!=string::npos){
        str.erase(str.find("xxx")+1,1);
        count++;
    }
    cout<<count<<endl;
}
int main(){
    int n;string str;
    cin>>n>>str;
    check(str,n);
}