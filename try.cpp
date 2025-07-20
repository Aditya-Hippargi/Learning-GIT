#include <iostream>
#include <vector>
#include <algorithm>
int solve(std::vector<int>& vec,int n){
    for(int i=1;i<=n;i++){
        if(vec[i+1]==vec[i]) return vec[i+1];
    }
    return -1;
}
int main(){
    int n;std::cin>>n;
    std::vector<int> vec(n);
    std::sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        std::cin>>vec[i];
    }
    std::sort(vec.begin(),vec.end());

}















/*#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
    int pm;
    if(s[8]=='A' && s[0]=='1' && s[1]=='2'){
        s[0]='0';s[1]='0';
    }
    else if(s[8]=='P' && !(s[0]=='1' && s[1]=='2')){
        pm=stoi(s.substr(0,2));
        s.at(0)=to_string(pm/10)[0];
        s.at(1)=to_string(pm-(pm%10))[1];
        //printf("%d",pm-48);
    }
    s.erase(s.end()-2,s.end());
    return s;
}

int main()
{
    

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
*/