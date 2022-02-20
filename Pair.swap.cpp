#include <iostream>
#include<utility>
using namespace std;

int main()
{
    
	pair<string,int> ZA= make_pair("Hello world", 69);
    pair<string,int> ZA2= make_pair("Fuck the world", 96);
    
    ZA.swap(ZA2);
    cout<<ZA.first<<" "<<ZA.second;
    cout<<"\n"<<ZA2.first<<" "<<ZA2.second<<endl;

    return 0;
}

