#include <iostream>
using namespace std;

int main (){
  const string NomTrab = "Milos Prime";
  const int IdadeTrab = 1923;
  const int CargaHor = 8;
  const double salphora = 42.00;
  const float SalPmes = CargaHor * salphora * 25 ;
  const string Setor = "Materiais anomalos - 7";

  cout << "Nome do empregado: " << NomTrab <<"\n";
  cout << "idade do empregado: " << IdadeTrab <<"\n";
  cout << "salario por hora: " << salphora <<"\n";
  cout << "salario por mes: " << SalPmes <<"\n\n";

  cout << "//BEM VINDO:"<< NomTrab << "\n//Voce sera atribuido ao setor:" << Setor <<"\n";
  cout << "//Espero que tenha um otimo dia de trabalho!\n";
  cout << "//se houver caso de algum pertence nos laboratorios de teste, \n";
  cout << "//queime\n//pulverize \n//e notifique os seus supervisores que o mesmo foi completamente destruido\n";
  cout << "//caso o contrario evacue todo o setor e notifique a \n//equipe de retensao para que o mesmo seja removido\n";
  cout << "//tenha um bom dia";

 return 0;
}
