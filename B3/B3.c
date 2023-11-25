#include <stdio.h>
enum DayOfWeek {
    SATURDAY =0,
    SUNDAY ,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
    
};
int main() {
  int d, m, y, ngayCuaNam;
  
  printf("Nhap ngay: ");
  scanf("%d", &d);

  printf("Nhap thang: "); 
  scanf("%d", &m);

  printf("Nhap nam: ");
  scanf("%d", &y);

  ngayCuaNam = d; // Ngay trong thang
  
  // Tinh so ngay dao dien cua cac thang da qua trong nam
  int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
  for (int i = 0; i < m - 1; i++) {
    ngayCuaNam += months[i];
  }
  
  // Kiem tra nam nhuan
  if (m <= 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))) {
    ngayCuaNam++;
  }

  // Tinh ngay trong tuan
  int weekday = (ngayCuaNam + y + y/4 - y/100 + y/400) % 7;

 

    enum DayOfWeek Thu;
    Thu = weekday;
    switch (Thu) {
        case SUNDAY:
            printf("Chu nhat\n");
            break;
        case MONDAY:
            printf("Thu hai\n");
            break;
        case TUESDAY:
            printf("Thu ba\n");
            break;
        case WEDNESDAY:
            printf("Thu tu\n");
            break;
        case THURSDAY:
            printf("Thu nam\n");
            break;
        case FRIDAY:
            printf("Thu sau\n");
            break;
        case SATURDAY:
            printf("Thu bay\n");
            break;
        default:
            printf("Khong xac dinh\n");
            break;
    }

  return 0;
}