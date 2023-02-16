# KẾ THỪA TRONG JAVA SO VỚI C++

- Truy cập vào lớp cha:
    - Trong C++: Sử dụng cú pháp ```<tên lớp cha>::```
    - Trong Java: Sử dụng từ khóa `super`
- Xác định kế thừa:
    - Trong C++ sử dụng `public, protected hoặc private`
    - Trong Java sử dụng `extends`
- Phạm vi:
    - Ở ví dụ dưới đây, trong trường hợp C++, lớp `Child` có thể gọi phương thức `print()` của lớp `GrandParent` không cần thông qua lớp `Parent`
    - Trong java phải thông qua lớp `Parent`

`VD C++`
```C++
#include <iostream>
using namespace std;

class GrandParent
{
public:
    void print()
    {
        cout << "GrandParent\n";
    }
};

class Parent : public GrandParent
{
public:
    void print()
    {
        cout << "Parent\n";
    }
};

class Child : public Parent
{
public:
    void print()
    {
        GrandParent::print();
        cout << "Child\n";
    }
};

int main()
{
    Child child;
    child.print();
    // Output:
    // GrandParent
    // Child

    return 0;
}
```
`VD lỗi: Java`
```Java
class Grandparent {
    public void Print() {
        System.out.println("Grandparent's Print()");
    }
}

class Parent extends Grandparent {
    public void Print() {
        System.out.println("Parent's Print()");
    }
}

class Child extends Parent {
    public void Print() {   
    // Trying to access Grandparent's Print()
        super.super.Print(); // ERROR
        System.out.println("Child's Print()");
    }
}

public class Main {
    public static void main(String[] args) {
        Child c = new Child();
        c.Print();
    }
}
```

`VD đúng: Java`
```Java
class Grandparent {
    public void Print() {
        System.out.println("Grandparent's Print()");
    }
}

class Parent extends Grandparent {
    public void Print() {
        super.Print();
        System.out.println("Parent's Print()");
    }
}

class Child extends Parent {
    public void Print() {
        super.Print();
        System.out.println("Child's Print()");
    }
}

public class Main {
    public static void main(String[] args) {
        Child c = new Child();
        c.Print();
        // Output:
        // Grandparent's Print()
        // Parent's Print()
        // Child's Print()
        
    }
}
```
