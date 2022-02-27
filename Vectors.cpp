#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> ZA;

	cout << "Vector ZA" << endl;

	for (int i = 1; i <= 5; ++i)
		ZA.push_back(i);

	cout << "Output of begin and end:";
	for (auto i = ZA.begin(); i != ZA.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of Cbegin and Cend:";
	for (auto i = ZA.cbegin(); i != ZA.cend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend:";
	for (auto i = ZA.rbegin(); i != ZA.rend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of crbegin and crend:";
	for (auto i = ZA.crbegin(); i != ZA.crend(); ++i)
		cout << *i << " ";

	cout << "\n\nSize of vector:" << ZA.size();
	cout << "\nCapacity of vector:" << ZA.capacity();
	cout << "\nMax-Size of vector:" << ZA.max_size();

	cout << "\n\nAfter resizing the vecotr";
	ZA.resize(4);
	cout << "\nSize of vector:" << ZA.size();

	if (ZA.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";

	ZA.shrink_to_fit();
	cout << "\nVector elements are:" ;
	for (auto it = ZA.begin(); it != ZA.end(); ++it)
		cout << *it << " ";
	cout << "\n";

	vector<int> ZA2;

	cout << "\nVector(ZA2)";

	for (int x = 1; x <= 10; ++x)
		ZA2.push_back(x*10);

	cout << "\nReference Operator at [g]: ZA2[2] = " << ZA2[2];
	cout << "\nat : ZA2.at(4) = " << ZA2.at(4);
	cout << "\nfront() : ZA2.front() = " << ZA2.front();
	cout << "\nback() : ZA2.back() = " << ZA2.back();

	int* pos = ZA2.data();

	cout << "\nThe First Element is " << *pos;
	cout << "\n";


	std::vector<int> V;
	V.assign(5, 10);
	cout << "\nVector(V)";
	cout << "\nThe vector elements are: ";
	for (int i = 0; i < V.size(); i++)
		cout << V[i] << " ";
			
		//Insert 15 to the last position;

	V.push_back(15);
	int n = V.size();
	cout << "\nThe last element of the vector is : " << V[n - 1];

	cout << "\nThe vector elements after push_back(): ";
	for (int i = 0; i < V.size(); i++)
		cout << V[i] << " ";

	//remove the last element;

	V.pop_back();
	cout << "\nThe vector elements after pop_back(): ";
	for (int i = 0; i < V.size(); i++)
		cout << V[i] << " ";

	//Inster element in begining;

	V.insert(V.begin(), 6);
	cout << "\nThe First element is V.begin(): " << V[0];

	//Insert element at end;

	V.emplace_back(90);
	

	cout << "\nThe last element after emplace(): " << V[ V.size() - 1];

	
	//Erase the Vector;
	V.clear();
	cout << "\nVector size after clear(): " << V.size();
	
	//Swap v1 with v2;
	vector<int> v1, v2;

	v1.push_back(7);
	v1.push_back(8);
	v2.push_back(1);
	v2.push_back(2);
	
	cout << "\n\nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	v1.swap(v2);

	cout << "\n\nafter Swap: \nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nAfter Swap: \nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";
	cout << "\n";


	
	return 0;
}