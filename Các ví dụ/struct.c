#include <stdio.h>

// Định nghĩa một struct có tên là Person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Khai báo một biến kiểu struct Person
    struct Person person1 = {.name="NguyenLuc" , .age=22, .height=23};
    printf("Ten: %s\n", person1.name);
    printf("Tuoi: %d\n", person1.age);
    // Gán giá trị cho các thành phần của struct
    printf("Nhap ten: ");
    scanf("%s", person1.name);

    printf("Nhap tuoi: ");
    scanf("%d", &person1.age);

    printf("Nhap chieu cao (m): ");
    scanf("%f", &person1.height);

    // Hiển thị thông tin vừa nhập
    printf("\nThong tin nguoi:\n");
    printf("Ten: %s\n", person1.name);
    printf("Tuoi: %d\n", person1.age);
    printf("Chieu cao: %.2f m\n", person1.height);

    return 0;
}