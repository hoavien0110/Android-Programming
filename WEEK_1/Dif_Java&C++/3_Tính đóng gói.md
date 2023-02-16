# TÍNH ĐÓNG GÓI TRONG JAVA

- Tính đóng gói trong Java tương tự vs C++

```C++
class fraction{
private:
    int _num;
    int _den;
public:
    double getValue(){
        return (1.0 * _num) / (1.0 * _den);
    }
};
```

```java
public class Fraction{
    private int _num;
    private int _den;

    public double getValue(){
        return Double.valueOf(_num) / Double.valueOf(_den);
    }
}
```