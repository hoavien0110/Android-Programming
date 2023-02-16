#include <iostream>
#include "Frac.h"
using namespace std;

int main(){
    int x;
    Frac f1, f2, f3;

    cout << "----- 1. Thao tac nhap xuat phan so -----" << endl;
    cout << "A. Nhap phan so dau tien (phan so f1): " << endl;
    f1.input();
    cout << "B. Xuat phan so f1: ";
    f1.output();
    cout << endl;

    cout << "----- 2. Thao tac lay tu so, mau so -----" << endl;
    cout << "A. Lay tu so f1: " << f1.getNum() << endl;
    cout << "B. Lay mau so f1: " << f1.getDen() << endl;
    cout << endl;

    cout << "----- 3. Thao tac gan gia tri cho tu so, mau so -----" << endl; 
    cout << "A. Nhap so nguyen de gan tu so: "; cin >> x;
    f1.setNum(x);
    cout << "Phan so f1 sau khi duoc gan tu so moi: ";
    f1.output();
    cout << "B. Nhap so nguyen de gan mau so: "; cin >> x;
    f1.setDen(x);
    cout << "Phan so f1 sau khi duoc gan mau so moi: ";
    f1.output();  
    cout << endl;

    cout << "----- 4. Nghich dao, rut gon -----" << endl;
    f2 = f1.inverse();
    cout << "A. Phan so nghich dao cua f1: ";
    f2.output();
    f2 = f1.symplify();
    cout << "B. Phan so rut gon cua f1: ";
    f2.output();
    cout << endl;

    cout << "----- 5. Cong, nhan, so sanh voi phan so khac -----" << endl;
    cout << "Nhap phan so f2: " << endl;
    f2.input();
    cout << "Xuat phan so f2: ";
    f2.output();    
    cout << "A. Ket qua sau khi cong phan so f1 va f2: ";
    f3 = f1.plus(f2);
    f3.output();
    cout << "B. Ket qua sau khi nhan phan so f1 va f2: ";
    f3 = f1.multiply(f2);
    f3.output();    
    cout << "C. So sanh f1 va f2: ";
    if (f1.compare(f2) > 0) cout << "f1 > f2";
    else if (f1.compare(f2) == 0) cout << "f1 == f2";
    else cout << "f1 < f2";
    
    return 0;
}