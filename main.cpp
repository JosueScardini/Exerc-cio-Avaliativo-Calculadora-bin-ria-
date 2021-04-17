#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int soma(int novoValor, int novoValor2){
    int somatorio= novoValor+novoValor2;
    return somatorio;
}

int subtracao(int novoValor, int novoValor2){
  int sub= novoValor-novoValor2;
  return sub;
}

int multiplicacao(int novoValor, int novoValor2){
   int multi= novoValor*novoValor2;
   return multi;
}

int divisao(int novoValor, int novoValor2){
   int div= novoValor/novoValor2;
   return div;
}

 int resto(int novoValor, int novoValor2){
   int rest = (novoValor%novoValor2);
   return rest;
}

//Conversão de decimal para binário
string converterBinario(int nconv)
{
    string nconv2;
    while (nconv != 0){
        nconv2 += ( nconv % 2 == 0 ? "0" : "1" );
        nconv /= 2;
    }

    return nconv2;
}

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
      if (num1!=1&&num1!=0) {
        cout<<"Número inválido"<<endl;
        return -1;
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
      if (num2!=1&&num2!=0) {
        cout<<"Número inválido"<<endl;
        return -1;
      }
    }
  
  if(operacao == '+')
  {soma(novoValor, novoValor2);

  } else if(operacao == '-')
  { subtracao (novoValor,novoValor2);

  } else if(operacao == 'x')
  {multiplicacao(novoValor, novoValor2);

  } else if(operacao == '/')
  { divisao (novoValor, novoValor2);

  } else if(operacao == '%')
  {resto(novoValor, novoValor2);
  }

}