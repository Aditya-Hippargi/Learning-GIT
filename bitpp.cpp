#include <iostream>
#include <string>
using std::string;

int main(){
    int n;string str;int x=0;
    std::cin>>n;
    if(n<=150){
        for(int i=0;i<n;i++){
            std::cin>>str;
            if(str.find('+')!=string::npos) x++;
            if(str.find('-')!=string::npos) x--;
        }
        std::cout<<x;
    }
}