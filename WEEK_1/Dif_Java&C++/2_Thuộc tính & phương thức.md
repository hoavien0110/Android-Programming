# THUỘC TÍNH VÀ PHƯƠNG THỨC TRONG JAVA SO VỚI C++
## 1. Constructor
```C++
class A {
public:
    A() {
        this->print();
    }

    void print() {
        cout << "Initializing in A";
    }
};

class B : public A {
public:
    B() {}

    void print() {
        cout << "Initializing in B";
    }
};

void main() {
    B object; // Initializing in A
}
```
Trong C++ thực hiện phương thức khởi tạo của lớp cha trước. Nếu có phương thức mà lớp cha và lớp con cùng tên thì thực hiện phương thức tại lớp được khai báo (trường hợp không có virtual)

```java
class A {
    public A() {
        this.print();
    }

    public void print() {
        System.out.println("Initializing in A");
    }
}

class B extends A {
    public B() {
    }

    public void print() {
        System.out.println("Initializing in B");
    }
}

public class Main {
    public static void main(String[] args) {
        B object = new B(); // Initializing in B
    }
}
```

Trong Java vẫn thực hiện phương thức khởi tạo của lớp cha trước. Nếu có phương thức mà lớp cha và lớp con cùng tên thì thực hiện phương thức tại lớp con. 

**Note trong seminar:**
- Trong C++, các phương thức được gọi trong hàm tạo của lớp cơ sở được thực thi từ lớp cơ sở.
- Trong Java, các phương thức đó thực thi từ lớp kế thừa gần nhất.
- Trong Java, nếu có bất kỳ lỗi nào xảy ra trong hàm tạo, thì hàm hủy sẽ tự động được gọi, nhưng trong C++ điều này không xảy ra.
- Java không hỗ trợ phương thức khởi tạo sao chép mặc định.

## 2. Destructor
- Trong C++, nếu không thiết lập hàm hủy thì sẽ bị rò rỉ bộ nhớ nếu đã xin cấp phát bộ nhớ.
- Người lập trình không được phép sửa đổi hàm hủy trong Java vì trong Java đã có *garbage collector* giải phóng bộ nhớ không sử dụng
- *garbage collector* có nhược điểm là runtime khá chậm. Vì vậy, khi lập trình game sẽ có xu hướng chọn C++ hoặc những ngôn ngữ khác thực hiện nhanh.

## 3. Quá tải toán tử
- Java không hỗ trợ quá tải toán tử
- Đối tượng trong Java được truyền qua tham chiếu, không phải tham trị
