/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no){
  long fac;
  fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }
  return fac;
}
long nCr(int n, int r){
  long nCr, nfac,rfac,xfac;
  int x;
 //nCr = n!/ r!(n−r)! 
  x=(n-r);
  xfac=Factorial(x);
  nfac=Factorial(n);
  rfac=Factorial(r);
 nCr=nfac/(rfac*xfac);
  return nCr;
}