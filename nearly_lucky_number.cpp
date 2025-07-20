#include <iostream>
#include <string>

void solve(){
    long long n;std::string str;std::cin>>n;
    int flag=1,count=0;
    str=std::to_string(n);
    for(int i=0;i<str.size();i++){
        
        if(str[i]=='4' || str[i]=='7') count++;
    }
    
    str=std::to_string(count);
    
    for(int i=0;i<str.size();i++){
        //std::cout<<str[i]<<std::endl;
        if(str[i]!='4' && str[i]!='7') {flag=0;break;}
    }
    
    std::cout<<((flag)? "YES":"NO")<<std::endl;
}
int main(){
    solve();
}