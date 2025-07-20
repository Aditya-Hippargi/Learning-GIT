#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

int main(){
    string str;vector<string> vec;int n;
    std::cin>>n;
    if(0<=n<=100){
        for(int i=0;i<n;i++){
            std::cin>>str;
            if(str.size()>10){vec.push_back(string(1,str[0])+std::to_string(str.size()-2)+string(1,str[str.size()-1]));}
            else vec.push_back(str);
        }
        for(auto s: vec) std::cout<<s<<std::endl;
    }
}