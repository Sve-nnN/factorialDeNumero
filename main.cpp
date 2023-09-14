#include <iostream>
using namespace std;
int calcFactorial(int &numero){
  int factorial=1;
  int i=1;
  while(i<=numero){
    factorial=factorial*i;
    i++;
  }
  return factorial;
  
}

int main() {
  int numCalcular;
  cout<<"Ingrese el numero a calcular: ";cin>>numCalcular;
  cout<<"El factorial de "<<numCalcular<<" es: "<<calcFactorial(numCalcular);
}