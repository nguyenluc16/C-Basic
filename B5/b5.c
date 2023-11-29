#include <stdio.h>
#define so_Am -1 
double canBacHai(double x) {
    if (x < 0) {
        printf("Khong the tinh can bac hai cua so am.\n");
        return so_Am; // Giá trị không hợp lệ
    }

    // Đặt giới hạn cho khoảng cần kiểm tra
    double epsilon = 1e-6; // Độ chính xác mong muốn
    double low = 0.0;
    double high = x;
    double guess = (low + high) / 2;

    // Sử dụng phương pháp Bisection để tìm nghiệm gần đúng
    while (high - low > epsilon) {
        if (guess * guess > x) {
            high = guess;
        } else {
            low = guess;
        }
        guess = (low + high) / 2;
    }

    return guess;
}

int main() {
    double so;
    
    // Nhập số cần tính căn bậc hai
    printf("Nhap so can tinh can bac hai: ");
    scanf("%lf", &so);

    // Tính và in ra căn bậc hai
    double ketQua = canBacHai(so);
    if (ketQua >= 0) {
        printf("Can bac hai cua %lf la: %lf\n", so, ketQua);
    }

    return 0;
}
