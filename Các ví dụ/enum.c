#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

typedef enum{ // dinh nghia luon de sau can khong can khai bao enum
    MONDAY,
    TUESDAY=3,
    WEDNESDAY,
    THURSDAY,
    FRIDAY=32,
    SATURDAY,
    SUNDAY
} Weekdays;



// enum Weekday { //cos the ko co ten, co the dungf khi su dung cuc bo trong ham 
//     MONDAY,
//     TUESDAY=3,
//     WEDNESDAY,
//     THURSDAY,
//     FRIDAY=32,
//     SATURDAY,
//     SUNDAY
// };

void hienThi(Weekdays tuans)
{
    switch (tuans)
    {
    case MONDAY: 
    printf("Thu hai\n");
        break;
    
    default:
        break;
    }
}


 int main(int argc, char const *argv[])
 {
   // printf("size: %d\n", sizeof(enum Weekday) ); //4 byte, se toi thieu de luu mot bien 

   // enum Weekday tuan; tuan= THURSDAY;
   

    Weekdays tuans, th; tuans = THURSDAY; th= MONDAY;
    hienThi(th);
            
    printf("Test: %d\n", MONDAY);
    printf("Test: %d\n",TUESDAY);
    printf("Test: %d\n", WEDNESDAY);
    printf("Test: %d\n", THURSDAY);
    printf("Test: %d\n", FRIDAY);
    printf("Test: %d\n", SATURDAY);
    printf("Test: %d\n", SUNDAY);


    return 0;
 }