#include <string>
#include <iostream>
#include "aluno.h"

using namespace std;


int main(){
    Aluno a("Davi Kirchmaier Paiva", "202176021");
    double median = 0;
    a.leNotas();
    median = a.calculaMedia();
    cout<<"Media e de: "<<median<< endl;
    return 0;
}