#include <iostream>
#include <cmath>
#include <stdlib.h>
void squareYear(char year[]){
    float Year=atof(year);
    int sqrt=pow(Year,0.5);
    if(sqrt*sqrt==Year) std::cout<<sqrt<<" "<<0<<std::endl;
    else std::cout<<-1<<std::endl;
};

int main(){
    int t;
    char year[5];
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>year;
        squareYear(year);
    }
}

