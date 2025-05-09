#include <iostream>
using namespace std;


//hospital
//Medicos - Registrar Nome, Especialidade, Consultório que atua e CRM
//Consultas - Registrar Data da consulta, Nome do paciente e motivo da visita

//Por algum motivo strings bugam quando se colocam espaço entre as palavras,
//então tem que colocar como João_vitor ou Dor_De_Barriga, outro dia eu refaço esse codigo todo
int main(){
string Hospital;
string Med_nome, Med_Esp;
string Pac_nome, Mot_Vis;
int Cons_Num, CRM, data;


    cout << "Bem vindo ao hospital ";
    cin >> Hospital;

    cout << "Por favor, Preencha os dados que lhe forem pedidos.\n";

    cout << "Qual medico encerrou seu turno por hoje ";
    cin >> Med_nome;

    cout << "Qual era a sua especializacao? " ;
    cin >> Med_Esp;

    cout << "agora, por favor, insira os dados de uma consulta que este profissional atuou \n";
    cout << "qual era o Numero do Consultorio? ";
    cin >> Cons_Num;

    cout << "qual era o Nome do paciente? ";
    cin >> Pac_nome;

    cout <<"por favor, coloque tambem o motivo desta consulta: ";
    cin >> Mot_Vis ;

    cout <<"digite tambem a data desta consulta, por gentileza: ";
    cin >> data;

    cout << "por fim, por favor, digite o CRM do medico que atendeu esta consulta: ";
    cin >> CRM;

    cout << "entao, para resumir, o doutor " << Med_nome
    << " atuou como " << Med_Esp
    << "\n" << "no consultorio " << Cons_Num
    << " e atendeu o paciente " << Pac_nome
    << " que estava sentindo " << Mot_Vis
    << " no dia " << data << ". \n"
    <<"obrigado.";


 return 0;
}
