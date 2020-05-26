//
// Created by jesus on 26/05/2020.
//

#include "Loan.h"
#include <cstring>
#include <iostream>

using namespace std;

Loan::Loan() {

}

Loan::Loan(int user, int movie, char initialD[100]) {
    this->user=user;
    this->movie=movie;
    strcpy(this->initialD,initialD);
    this->status=1;
}

void Loan::returnL(char finalD[100]) {
    strcpy(this->finalD,finalD);
    this->status=0;
}
int Loan::getUser() {
    this->user;
}
int Loan::getMovie() {
    this->movie;
}
int Loan::getStatus() {
    this->status;
}

void Loan::toString() {
    cout<<"Fecha inicial"<<this->initialD<<endl;
    if(this->status == 1){
        cout << "Estado: ocupado"<<endl;
    }else{
        cout << "Estado: devuelto"<<endl;
        cout << "Fecha final "<< this->finalD<< endl;
    }
}