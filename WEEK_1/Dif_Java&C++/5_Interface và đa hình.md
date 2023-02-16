# INTERFACE VÀ ĐA HÌNH

## 1. Hàm ảo
- Trong Java, các phương thức được mặc định là hàm ảo ngoại trừ các phương thức có từ khóa `final, static, private`, không cần sử dụng con trỏ ở hàm main
- Trong C++ sử dụng từ khóa `virtual`, phải sử dụng con trỏ

- Vd: Java
```java
class A {
    public void print(){
        System.out.println("Print function in A"); 
    }
}

class B extends A {
    public void print(){
        System.out.println("Print function in B"); 
    }
}

public class Main{
    public static void main(String[] args){
        A obj = new B;
        obj.print(); // Print function in B
    }
}
```
- VD: C++
```C++
class A{
public:
    virtual void print(){
        cout << "Print function in A";
    }
}

class B : public A {
public:
    void print() {
        cout << "Print function in b";
    }
}

void main(){
    A* obj = new B;
    obj->print(); //  Print function in B
}
```

## 2. Lớp trừu tượng
- Trong C++, lớp trừu tượng được định nghĩa là chứa 1 hoặc nhiều hơn các hàm thuần ảo
- Trong Java, sử dụng từ khóa `abstract` cho các hàm thuần ảo và `abstract` tại lóp trừu tượng
- VD C++:
```C++
class A{
public:
    virtual void print() = 0;
}
```
- Vd Java:
```java
abstract class A{
    abstract void print();
}
```

## 3. Interface

```java
interface Animal {
    public void animalSound(); // interface method (does not have a body)
    public void sleep(); // interface method (does not have a body)
}

// Pig "implements" the Animal interface
class Pig implements Animal {
    public void animalSound() {
        // The body of animalSound() is provided here
        System.out.println("The pig says: wee wee");
    }
    public void sleep() {
        // The body of sleep() is provided here
        System.out.println("Zzz");
    }
}

class MyMainClass {
    public static void main(String[] args) {
        Pig myPig = new Pig();  // Create a Pig object
        myPig.animalSound();
        myPig.sleep();
    }
    // Output:
    // The pig says: wee wee
    // Zzz
}
```
- Khi sử dụng Interface trong Java cần nhớ từ khóa `Interface` và `implements`

## 4. Đa hình
```java
class Animal {
    public void animalSound() {
        System.out.println("The animal makes a sound");
    }
}

class Pig extends Animal {
    public void animalSound() {
        System.out.println("The pig says: wee wee");
    }
}

class Dog extends Animal {
    public void animalSound() {
        System.out.println("The dog says: bow wow");
    }
}

class Main {
    public static void main(String[] args) {
        Animal myAnimal = new Animal();  // Create a Animal object
        Animal myPig = new Pig();  // Create a Pig object
        Animal myDog = new Dog();  // Create a Dog object
        myAnimal.animalSound();
        myPig.animalSound();
        myDog.animalSound();
    }
}
```