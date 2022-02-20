#include<iostream>
#include<tuple>
using namespace std;
int main(){
    
    tuple<char, int, float,char> ZA;
    ZA=make_tuple('a', 9, 2.4,'Y');
    
    cout<< "Initial values of tuple are\n";
    cout<<get<0>(ZA)<<" "<<get<1>(ZA)<<" "<<get<2>(ZA)<<" "<<get<3>(ZA)<<endl;
    
    //Modifying values of tuple
    get<0>(ZA)= 'b';
    get<1>(ZA)= 3;
    get<2>(ZA)=9.7;
    get<3>(ZA)='K';
    
    cout<< "Modified values of tuple are\n";
    cout<<get<0>(ZA)<<" "<<get<1>(ZA)<<" "<<get<2>(ZA)<<" "<<get<3>(ZA)<<endl;
    
    return 0;
}