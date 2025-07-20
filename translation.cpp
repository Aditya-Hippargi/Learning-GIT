#include <iostream>
#include <string>
#include <algorithm>
int main(){
    std::string main,rev;
    std::cin>>main>>rev;
    std::reverse(main.begin(),main.end());
    if(main.compare(rev)==0) std::cout<<"YES";
    else std::cout<<"NO";
}