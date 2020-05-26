//
// Created by jesus on 21/05/2020.
//

#include "Person.h"
#include <cstring>
#include <iostream>

using namespace std;
Person::Person() {

}
Person::Person(char nameU[100], char age[100]) {
    strcpy(this->nameU,nameU);
    strcpy(this->age,age);
}

void Person::toString() {
    cout<<"*********** Datos del usuario *********"<<endl;
    cout<<"Nombre: "<< this->nameU<<endl;
    cout<<"Edad:"<<this->age<<endl;

}