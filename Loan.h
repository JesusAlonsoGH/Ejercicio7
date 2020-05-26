//
// Created by jesus on 26/05/2020.
//

#ifndef UNTITLED3_LOAN_H
#define UNTITLED3_LOAN_H


class Loan {
private:
    int user;
    int movie;
    char initialD[100];
    char finalD[100];
    int status;
public:
    Loan();
    Loan(int,int,char []);
    void returnL(char[]);
    int getUser();
    int getMovie();
    int getStatus();
    void toString();

};


#endif //UNTITLED3_LOAN_H
