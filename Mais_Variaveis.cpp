#include <iostream>
using namespace std;

int main(){
//mais variaveis numa só variavel :)
 int va1, va2, va3;
 va1 =20, va2 =40,
va3 = va1 + va2;
//Aqui estão constantes, elas não conseguem mudar de valor como as variáveis
const string con1= "Sou uma constante";
const string con2= " e eu nao";

 cout <<"a soma da variavel que contem "<< va1 <<"\n";

 cout <<"e da variavel que contem "<< va2 <<"\n";

 cout <<"tornam-se o valor da terceira variavel "<< va3 <<"! \n";

 cout <<"aqui também se encontram constantes"<< con1 <<" " <<con2 ;


 return 0;
}
