#include <iostream>
using namespace std;
int main(){
    int w;cin>>w;
    cout<< ((w%2==0 && w>=4 && 0<=w<=100)? "Yes":"No");
    return 0;
}