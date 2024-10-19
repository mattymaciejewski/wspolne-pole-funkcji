#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double funkcja1(double x) {
  
  return pow(x,2);
    
}

double funkcja2(double x) {

  return sin(x);
    
}

int main() {
  double dx = 0.001;
  double a = 0;
  double b = 0.875;
  double pole = 0;

  for(double x = a; x<=b; x+=dx) {
    
    pole += fabs(funkcja2(x) - funkcja1(x)) * dx;
    
  }

  cout << fixed << setprecision(4) << pole << endl;
  
}
