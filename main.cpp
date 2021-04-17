#include <iostream>
using namespace std;

int main() {
  int num1, num2,j, sobra, novoValor = 0, novoValor2=0;
  int somatorio, sub, multi, div, rest;
  char operacao;

  //numero 1
  cout<< "Digite um número binário entre 0 e 11111111 "<<endl;
  cin>> num1;
  
  //Transformando para decimal
   for (j = 0; j < 6; j++) {
        sobra = num1 - ((num1 / 10)*10);
        num1 = num1 / 10;
        novoValor += sobra * pow(2,j);
    }

  //numero 2
  






}