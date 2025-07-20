#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int func(int n,int k,string str){
    map<char,int> pair;
    for(int i=0;i<str.length();i++){
        if(pair.count(str[i])==0){
            pair.insert({str[i],1});
        }
        else{
            pair[str[i]]+=1;
        }
    }
    if(str.length()%2==0){
        
    }
}

int main(){
    int t,n,k;string str;map<char,int> pair;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n>>k>>str;
        
    }
}