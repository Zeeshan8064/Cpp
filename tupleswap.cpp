#include<iostream>
#include<tuple>
using namespace std;

int
main ()
{

  tuple < int, char, int, char >ZA (9, 'H', 8, 'L');
  tuple < int, char, int, char >ZA2 (1, 'A', 5, 'B');

  cout << "ZA elements before swapping are : ";
  cout << get < 0 > (ZA) << " " << get < 1 > (ZA) << " "
    << get < 2 > (ZA) << " " << get < 3 > (ZA) << endl;

  cout << "ZA2 elements before swapping are : ";
  cout << get < 0 > (ZA2) << " " << get < 1 > (ZA2) << " "
    << get < 2 > (ZA2) << " " << get < 3 > (ZA2) << endl;

  //Swapping the tuples.
  ZA.swap (ZA2);


  cout << "ZA elements after swapping are : ";
  cout << get < 0 > (ZA) << " " << get < 1 > (ZA) << " "
    << get < 2 > (ZA) << " " << get < 3 > (ZA) << endl;

  cout << "ZA2 elements after swapping are : ";
  cout << get < 0 > (ZA2) << " " << get < 1 > (ZA2) << " "
    << get < 2 > (ZA2) << " " << get < 3 > (ZA2) << endl;


}
