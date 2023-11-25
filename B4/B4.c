#include <stdio.h>
#include <string.h>

// Hàm để đảo ngược một từ
void daoTu(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Hàm để đảo ngược các từ trong đoạn văn bản
void daoCau(char *cau) {
    char *start = cau;
    char *end = cau + strlen(cau) - 1;

    // Đảo ngược toàn bộ đoạn văn bản
    daoTu(start, end);

    // Đảo ngược từng từ
    while (*cau) {
        start = cau;

        // Tìm ký tự khoảng trắng hoặc ký tự kết thúc chuỗi
        while (*cau != ' ' && *cau != '\0') {
            cau++;
        }

        // Đảo ngược từng từ
        daoTu(start, cau - 1);

        // Bỏ qua ký tự khoảng trắng
        if (*cau == ' ') {
            cau++;
        }
    }
}

int main() {
    char cau[100];

    // Nhập đoạn văn bản từ người dùng
    printf("Nhap vao mot doan van ban: ");
    fgets(cau, sizeof(cau), stdin);

    // Loại bỏ ký tự '\n' cuối dòng nếu có
    if (cau[strlen(cau) - 1] == '\n') {
        cau[strlen(cau) - 1] = '\0';
    }

    // Gọi hàm để đảo ngược các từ trong đoạn văn bản
    daoCau(cau);

    // Hiển thị kết quả đảo ngược
    printf("Ket qua sau khi dao nguoc: %s\n", cau);

    return 0;
}
