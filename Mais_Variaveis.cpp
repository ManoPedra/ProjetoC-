#include <iostream>
using namespace std;

int main(){
//mais variaveis numa s� variavel :)
 int va1, va2, va3;
 va1 =20, va2 =40,
va3 = va1 + va2;
//Aqui est�o constantes, elas n�o conseguem mudar de valor como as vari�veis
const string con1= "Sou uma constante";
const string con2= " e eu nao";

 cout <<"a soma da variavel que contem "<< va1 <<"\n";

 cout <<"e da variavel que contem "<< va2 <<"\n";

 cout <<"tornam-se o valor da terceira variavel "<< va3 <<"! \n";

 cout <<"aqui tamb�m se encontram constantes"<< con1 <<" " <<con2 ;


 return 0;
}
