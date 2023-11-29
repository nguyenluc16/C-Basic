#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// neu deo co * thi tạo ra hai bien a b voi dia chi doc lap voi x y vi the khi in ra thi x y se khong khac me gi ban dau


int main()
{
    // Khai báo và khởi tạo biến
    int num = 42;
       int *n= &num;

    double pi = 3.14159;
    char letter = 'A';
   // int *m =(int*) 0x00000045ebdffcec; // chinh la bang &num a ;kieu int la tai dia chi do gia tri cua no la int 

int *m =&num;

    // Hiển thị giá trị và địa chỉ của biến
    printf("Gia tri cua num: %d\n", num); 
    printf("Dia chi cua num: %p\n", (void *)&num);

    printf("Gia tri cua pi: %lf\n", pi);
    printf("Dia chi cua pi: %p\n", (void *)&pi);

    printf("Gia tri cua letter: %c\n", letter);
    printf("Dia chi cua letter: %p\n", (void *)&letter);

    printf("Gia tri cua n: %d\n", *n);
    printf("Dia chi cua n: %p\n", n);


// cua bien dia chi thi khac
    printf("Gia tri cua m la dia chi cua num: %p\n", m);
    printf("gia tri cua num thong qua m : %d\n", *m);

    #include <stdio.h>

// Hàm swap nhận vào hai con trỏ và thực hiện việc hoán đổi giá trị của hai biến



    int x = 5;
    int y = 10;

    printf("Truoc khi swap: x = %d, y = %d\n", x, y);

    // Gọi hàm swap để thay đổi giá trị của x và y
    swap(&x, &y);

    printf("Sau khi swap: x = %d, y = %d\n", x, y);



    return 0;
}
