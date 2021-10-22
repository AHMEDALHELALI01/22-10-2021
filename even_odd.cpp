#include <iostream>

using namespace std;

string odd_even(int n)
{
  if (n%2 == 0){
      return "even";
   }else{
      return "odd";
   }
}

int main()
{
   int n;

   cout <<" enter numbe " ;
   cin >> n ;
   cout << odd_even(n) << endl;
   return 0;
}

