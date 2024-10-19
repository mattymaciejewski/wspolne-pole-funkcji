#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

double funkcja(double x) {

  return pow(x,2) - sin(x);
  
}

double funkcja1(double x) {

  return pow(x,2);

}

double funkcja2(double x) {

  return sin(x);

}

double bisekcja(double a_bisekcja, double b_bisekcja, double epsilon)
{
  if(funkcja(a_bisekcja)==0.0) {
    
    return a_bisekcja;
    
  }
  
  if(funkcja(b_bisekcja)==0.0){
    
    return b_bisekcja;
    
  }

  double srodek;

  while(b_bisekcja-a_bisekcja > epsilon) {
    
    srodek = (a_bisekcja+b_bisekcja)/2;

    if(funkcja(srodek) == 0.0) {
      
      return srodek;
      
    }

    if(funkcja(a_bisekcja)*funkcja(srodek)<0) {
      
      b_bisekcja = srodek;
      
    } else {
      
      a_bisekcja = srodek;
      
    }
  }
  
  return (a_bisekcja+b_bisekcja)/2;
  
}

int main() {
  double dx = 0.001;
  double a = 0;
  double pole = 0;
  double a_bisekcja = 0.5;
  double b_bisekcja = 2;
  double epsilon = 0.00001;
  double b = bisekcja(a_bisekcja, b_bisekcja, epsilon);

  for(double x = a; x<=b; x+=dx) {

    pole += fabs(funkcja2(x) - funkcja1(x)) * dx;

  }
  
  cout << "Wspolne pole obu funkcji wynosi: " << fixed << setprecision(4) << pole << endl;

  return 0;
  
}
int main() {
  double dx = 0.001;
  double a = 0;
  double pole = 0;
  double a_bisekcja = 0.5;
  double b_bisekcja = 2;
  double epsilon = 0.00001;
  double b = bisekcja(a_bisekcja, b_bisekcja, epsilon);

  for(double x = a; x<=b; x+=dx) {

    pole += fabs(funkcja2(x) - funkcja1(x)) * dx;

  }
  
  cout << "Wspolne pole obu funkcji wynosi: " << fixed << setprecision(4) << pole << endl;

  return 0;
  
}
