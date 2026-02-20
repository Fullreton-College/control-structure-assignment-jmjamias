#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int unit;
  double discount, total; 

  cout << "Enter the number of units purchased: ";
  cin >> unit;
 
  if (unit >= 10 && unit <= 19) {
    discount = 0.20; 
  } else if (unit >= 20 && unit <= 40) {
    discount = 0.30;
  } else if (unit >= 50 && unit <= 99) {
    discount = 0.40;
  } else if (unit >= 100) {
    discount = 0.50;
  } else {
    discount = 0.0;
  }
  total = 199 * unit * (1 - discount);

  cout << fixed << setprecision(2);

  cout << "Total cost: $" << total << endl;
  
return 0;
}
