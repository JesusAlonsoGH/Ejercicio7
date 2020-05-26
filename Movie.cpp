//
// Created by jesus on 21/05/2020.
//

#include "Movie.h"
#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;
Movie::Movie() {

}
Movie::Movie(char name[100], char director[100], char year[100], char gender [100], char producer [100], char minute [100]) {
    strcpy(this->name,name);
    strcpy(this->director,director);
    strcpy(this->year,year);
    strcpy(this->gender,gender);
    strcpy(this->producer,producer);
    strcpy(this->minute,minute);
}
void Movie::toString() {
    cout<<"********** Datos de la pelicula**********"<<endl;
    cout<<"Nombre:"<<this->name<<endl;
    cout<<"Director:"<<this->director<<endl;
    cout<<"Año:"<<this->year<<endl;
    cout<<"Genero:"<<this->year<<endl;
    cout<<"Productora:"<<this->producer<<endl;
    cout<<"Minutos:"<<this->minute<<endl;

}
