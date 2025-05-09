#include <iostream>

using namespace std;

int main(){
bool doyouregretwhatyoudid = false ;
bool wouldyoudoitagain = true ;

    cout << "do you? - " << doyouregretwhatyoudid ;
    cout << "\n would you? - " << wouldyoudoitagain;
    cout << "\n------------------------------------------------------" ;
//o burrão aq esqueceu que esse char aí embaixo só consegue colocar um caracter, ou seja 1 ou 2 e não 19 ou 90
//tem como colocar como 2 eu acho mas não dessa forma que dá pra ter input do usuario, pelo que eu sei até agora
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
