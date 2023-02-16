#include <iostream>
using namespace std;
#include "Frac.h"

void Frac::input(){
    cout << "Nhap tu so: "; cin >> this->num;
    while (true){
        cout << "Nhap mau so: ";
        cin >> this->den;
        if (this->den != 0)
            break;
        else{
            cout << "Nhap khong hop le, moi nhap lai !!!";
        }
    }
}

void Frac::output(){
    cout << this->getNum() << "/" << this->getDen() << endl;
}

int Frac::getNum(){
    return this->num;
}

int Frac::getDen(){
    return this->den;
}

void Frac::setNum(int num1){
    this->num = num1;
}

void Frac::setDen(int den1){
    this->den = den1;
}

Frac Frac::inverse(){
    Frac temp;
    if (this->num == 0)
        return (*this);
    temp.num = this->den;
    temp.den = this->num;
    return temp;
}

int GCD(int u, int v) {
    while (v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    return u;
}

Frac Frac::symplify(){
    Frac temp;
    int x = GCD(this->num, this->den);
    temp.num = this->num/x;
    temp.den = this->den/x;
    return temp;
}

Frac Frac::plus(Frac p){
    Frac res;
    res.num = this->num*p.den + this->den*p.num;
    res.den = this->den*p.den;
    return res;
}

Frac Frac::multiply(Frac p){
    Frac res;
    res.num = this->num*p.num;
    res.den = this->den*p.den;
    return res;
}

int Frac::compare(Frac p){
    if ((this->num*p.den - this->den*p.num)* this->den *p.den > 0)
        return 1;
    if ((this->num*p.den - this->den*p.num)* this->den *p.den == 0)
        return 0;
    return -1;
}