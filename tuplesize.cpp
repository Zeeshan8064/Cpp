#include<iostream>
#include<tuple>
using namespace std;

int
main ()
{

  tuple < char, char, int, int, int, int >ZA ('Z', 'A', 8, 0, 6, 4);
  cout << "The size of the tuple is\n";
  cout << tuple_size < decltype (ZA) >::value << endl;
  return 0;
}
