#include <bits/stdc++.h>
using namespace std;
int main(){
	// only declaring
	pair<char , int> d1;
	
	d1.first = 'B';
	d1.second = 69;
	
	cout<< d1.first<<d1.second;
		
	// declaring and intializing
	
	pair<char , float> b('A',10.10);
	cout<<"\n"<<b.first<<b.second<<endl;
	return 0;
}
