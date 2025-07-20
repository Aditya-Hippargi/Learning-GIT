#include <iostream>
#include <string>
#include <algorithm>
int main(){
    std::string str;int u=0,l=0;
    std::cin>>str;
    for(int i=0;i<str.size();i++){
        if(toascii(str[i])>=65 && toascii(str[i])<=90) u++;
        else l++;
    }
    if(u>l) {
        std::transform(str.begin(),str.end(),str.begin(),toupper);
        std::cout<<str;
    }
    else{
        std::transform(str.begin(),str.end(),str.begin(),tolower);
        std::cout<<str;
    }
}