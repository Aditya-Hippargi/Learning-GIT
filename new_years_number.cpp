#include <iostream>
#include <vector>
using namespace std;
vector<string> vec;

void func(int year){
    int first=year/1000,flag=1;
    for(int i=0;i<=first/2;i++){
        for(int j=0;j<=first/2;j++){
            if(year==i*2020 + j*2021) {flag=0;break;}
        }
        if(flag==0) break;
    }
    if(flag==0) vec.push_back("YES\n");
    else vec.push_back("NO\n");
}

int main(){
    int t,year;string str;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>year;
        func(year);
    }
    for(int i=0;i<t;i++){
        cout<<vec[i];
    }
}