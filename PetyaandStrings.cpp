#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return toupper(c);});
    transform(b.begin(),b.end(),b.begin(),[](unsigned char c){return toupper(c);});
    cout<<a.compare(b)<<endl;
}