#include <iostream>

using namespace std;

int main(){
bool doyouregretwhatyoudid = false ;
bool wouldyoudoitagain = true ;

    cout << "do you? - " << doyouregretwhatyoudid ;
    cout << "\n would you? - " << wouldyoudoitagain;
    cout << "\n------------------------------------------------------" ;
//o burr�o aq esqueceu que esse char a� embaixo s� consegue colocar um caracter, ou seja 1 ou 2 e n�o 19 ou 90
//tem como colocar como 2 eu acho mas n�o dessa forma que d� pra ter input do usuario, pelo que eu sei at� agora
char a , b, c;

    cout << "\n"<< "grade the first student boss: ";
    cin >> a ;
    cout << "\n"<< "now grade the second one: ";
    cin >> b ;
    cout << "\n"<< "now for the third one: ";
    cin >> c ;
    cout << "\n"<< "thanks teach";

    cout << "\n"<< "------------------------------------------------------";

 return 0;

}
