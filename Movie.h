//
// Created by jesus on 21/05/2020.
//

#ifndef UNTITLED3_MOVIE_H
#define UNTITLED3_MOVIE_H
#include "Person.h"

class Movie {
private:
    char name[100];
    char director[100];
    char year[100];
    char gender[100];
    char producer[100];
    char minute[100];
public:
    Movie();
    Movie(char[],char[],char[],char[],char[],char[]);
    void toString();
    void getDirector();
};


#endif //UNTITLED3_MOVIE_H
