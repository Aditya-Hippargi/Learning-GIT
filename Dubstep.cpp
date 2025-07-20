#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    while(str.find(string("WUB"),0)!=string::npos){
        //cout<<str.find(string("WUB"),0)<<"\n";
        if(str.find(string("WUB"),0)!=0) str.insert(str.find(string("WUB"),0),string(" "));
        str.erase(str.find(string("WUB"),0),3);
    }
    cout<<str;
}