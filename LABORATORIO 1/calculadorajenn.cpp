#include <iostream>

using namespace std;
int main () {
  int num1, num2, opcion, resultado;
  cout<<"INGRESE EL PRIMER NUMERO: ";
  cin>>num1;
  cout<<"INGRESE EL SEGUNDO NUMERO: ";
  cin>>num2;

  cout<<"1) SUMAR"<<endl;
  cout<<"2) RESTAR"<<endl;
  cout<<"3) MULTIPLICAR"<<endl;
  cout<<"4) DIVIDIR"<<endl;
  cout<<"OPCION: ";
  cin>>opcion;

  switch (opcion){
      case 1: resultado=num1+num2;
            break;
      case 2: resultado=num1-num2;
            break;
      case 3: resultado=num1*num2,2;
            break;
      case 4: resultado=num1/num2;
            break;
      default:
            break;
  }
  cout<<"EL RESULTADO ES: "<<resultado<<endl;
  system("pause");
  return 0;

}
