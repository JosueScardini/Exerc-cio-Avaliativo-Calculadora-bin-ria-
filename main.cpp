#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int num1, num2,j, sobra, novoValor = 0, novoValor2=0;
  int somatorio, sub, multi, div, rest;
  char operacao;

  cout << "Qual operação deseja fazer? 'Digite +,-,x,/ ou %'" << endl;
    cin >> operacao;

  //numero 1
  cout<< "Digite um número binário entre 0 e 11111111 "<<endl;
  cin>> num1;
  
  //Transformando para decimal
   for (j = 0; j < 7; j++) {
        sobra = num1 - ((num1 / 10)*10);
        num1 = num1 / 10;
        novoValor += sobra * pow(2,j);
    }
    for (j = 0; j < 7; j++) {
      if (num1!='1'&&num1!='0') {
        cout<<"Número inválido"<<endl;
      }
    }

  //numero 2
  cout << "Digite outro número binário entre 0 e 11111111 "<<endl;
    cin >> num2;

  //Transformando para decimal
    for (j = 0; j < 7; j++) {
        sobra = num2 - ((num2 / 10)*10);
        num2 = num2 / 10;
        novoValor2 += sobra * pow(2,j);
    }
   
  for (j = 0; j < 7; j++) {
      if (num2!='1'&&num2!='0') {
        cout<<"Número inválido"<<endl;
      }
    }
  




}