class Frac{
private:
    int num;
    int den;
public:
    void input();           // nhap
    void output();          // xuat
    int getNum();           // lay tu so
    int getDen();           // lay mau so
    void setNum(int num1);  // gan tu so
    void setDen(int den1);  // gan mau so
    Frac inverse();         // nghich dao
    Frac symplify();        // rut gon
    Frac plus(Frac p);
    Frac multiply(Frac p);
    int compare(Frac p);
};