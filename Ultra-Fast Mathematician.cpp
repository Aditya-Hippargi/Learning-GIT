#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b,final;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) final.insert(i,"1");
        else final.insert(i,"0");
    }
    cout<<final<<endl;
}