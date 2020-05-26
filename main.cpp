#include <iostream>
#include "Movie.h"
#include "Person.h"
#include "Loan.h"
using namespace std;

void mainF(){
    cout<<endl<<"************ Menu Principal*********"<<endl;
    cout<<"1.Usuarios 2. Películas 3.Prestamos"<<endl;
    cout<<"Ingrese la opcion:";

}
Person registerU(){
    char nameU[100];
    char age[100];

    cout<<"Ingrese nombre:";
    cin>>nameU;
    cout<<"Edad:";
    cin>>age;

    return Person(nameU,age);

}
Movie registerF(){
    char name[100];
    char director[100];
    char year[100];
    char gender[100];
    char producer[100];
    char minute[100];


    cout<<"Ingrese el nombre de la pelicula:";
    cin>>name;
    cout<<"Ingresar el director";
    cin>>director;
    cout<<"Ingrese el año:";
    cin>>year;
    cout<<"Ingrese productora:";
    cin>>producer;
    cout<<"Ingrese genero:";
    cin>>gender;
    cout<<"Ingrese la productora:";
    cin>>minute;





    return Movie(name,director,year,gender,producer,minute);

}
Loan registerL(int movie){
    int user;
    char initialD[100];


    cout << "Ingrese el numero de usuario"<<endl;
    cin >> user;

    cout << "Ingrese la fecha inicial"<<endl;
    cin >> initialD;


    return Loan(user,movie,initialD);
}
int main() {
    bool end=true;
    int optionM=0;
    int accumulator=0;
    Movie movies[100];
    Person users[100];
    int accumulatorU=0;
    Loan loans[100];
    bool l=true;
    int movieT;
    int accumulatorL=0;
    char finalD[100];
    while(end== true) {
        mainF();
        cin >> optionM;
        if (optionM == 1) {
            cout << "Menu de usuario" << endl;
            cout << "1.Registrar 2.Editar 3.Consultar 4.Eliminar 5. Menú principal" << endl;
            cin >> optionM;
            switch (optionM) {
                case 1:
                    cout << "*********Registro**********" << endl;
                    users[accumulatorU] = registerU();
                    cout << "Numero de usuario:" << accumulatorU;
                    cout << "****Usuario registrado****" << endl;
                    accumulatorU++;
                    break;

                case 2:

                    cout << "********* Edicion**********" << endl;
                    cout << "Ingrese usuario:";
                    cin >> optionM;

                    users[optionM] = registerU();
                    break;
                case 4:
                    cout << "*********** Eliminar *********" << endl;
                    cout << "Ingrese  usuario:";
                    cin >> optionM;
                    l=true;
                    for (int e = 0; e <= accumulatorL ; ++e) {
                        if(optionM == loans[e].getUser() && loans[e].getStatus()==0){
                            l = false;
                        }
                    }

                    if(l == true){
                        users[optionM] = Person();
                        cout << "*******usuario eliminado*****" << endl;
                    }else{
                        cout << "Usuario tiene un prestamo"<<endl;
                    }

                    break;

                case 3:
                    cout << "Ingrese usuario que desee ver sus datos:";
                    cin >> optionM;

                    users[optionM].toString();
                case 5:
                    break;
            }

        }
        if (optionM == 2) {
            cout << "Menu de peliculas:" << endl;
            cout << "1.Registrar 2.Editar 3.Consultar 4.Eliminar 5. Menú principal" << endl;
            cin >> optionM;
            switch (optionM) {
                case 1:
                    cout << "*********Registro**********" << endl;
                    movies[accumulator] = registerF();
                    accumulator++;
                    cout << "****Pelicula registrada****" << endl;
                    break;

                case 2:

                    cout << "********* Edicion**********" << endl;
                    cout << "Ingrese pelicula la cual quiera editar:";
                    cin >> optionM;

                    movies[optionM] = registerF();
                    break;
                case 4:
                    cout << "*********** Eliminar *********" << endl;
                    cout << "Ingrese pelicula a eliminar:";
                    cin >> optionM;
                    movies[optionM] = Movie();
                    cout << "*******Pelicula eliminada*****" << endl;
                    break;

                case 3:
                    cout << "Ingrese pelicula que desee ver sus datos:";
                    cin >> optionM;

                    movies[optionM].toString();

                    for(int x=0;x<=accumulatorL;x++){
                        if(optionM==loans[x].getMovie()) {

                            loans[x].toString();
                        }
                    }
                case 5:
                    break;
            }
        }
            if (optionM == 3) {
                cout << "Menu de prestamos" << endl;
                cout << "1.-Solicitar prestamo 2.-devolver  prestamo 3.-Menu pricipal" << endl;
                cin >> optionM;
                switch (optionM) {
                    case 1:

                        for (int i = 0; i < accumulator; ++i) {
                            cout << "numero de pelicula" << i << endl;
                            movies[i].toString();
                        }
                        cout << "Seleccione la pelicula:";
                        cin >> optionM;
                        l=true;
                        for (int j = 0; j < accumulatorL ; ++j) {
                            if(optionM == loans[j].getMovie() && loans[j].getStatus()==1){
                                l = false;
                            }
                        }

                        if(l == true){
                            loans[accumulatorL] = registerL(optionM);
                            accumulatorL++;
                        }else{
                            cout << "Pelicula  prestada"<<endl;
                        }

                        break;
                    case 2:
                        cout << "Ingresa el numero de prestamo"<<endl;
                        cin >> optionM;

                        users[loans[optionM].getUser()].toString();

                        movieT= loans[optionM].getMovie();
                        movies[optionM].toString();

                        loans[optionM].toString();

                        if(loans[optionM].getStatus()==1){

                            cout << "Ingresa la fecha de devolucion"<<endl;
                            cin >> finalD;

                            loans[optionM].returnL(finalD);
                            cout << "Pelicula  devuelto"<<endl;

                        }else{
                            cout << "El prestamo ha sido finalizado anteriormente"<<endl;
                        }

                        break;
                    default:
                        break;
                }


            }
        }



    return 0;
}
