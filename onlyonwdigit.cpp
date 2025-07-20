#include <iostream>
#include <string>
#include <vector>
std::vector<int> vec;
int main(){
    int n,t;std::cin>>t;
    int min;
    for(int j=0;j<t;j++) {
        std::cin>>n;std::string str=std::to_string(n);
        min=(int)str[0]-48;
        for(int i=1;i<str.size();i++) if(min>(int)str[i]-48) min=(int)str[i]-48;
        vec.push_back(min);
    }
    for(int i=0;i<t;i++) std::cout<<vec[i]<<std::endl;
}