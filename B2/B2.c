#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<math.h>




int nice()
{
    int phim = 0;

do {

printf(" Chuong trinh toan hoc\n");

printf("1. Chuong tinh khoang cach\n");

printf("2. Chuong trinh dien tich tam giac\n");

printf("3. Thoat\n");

printf("Vui long chon:...");

scanf("%d", &phim);

} 

while (phim!= 1 && phim!= 2&& phim!= 3 );

printf("Ban da chọn chuong trinh : %d\n", phim);

return(phim);
}



void vip()
{ 
int phim = 0;

do {



printf("\n1. Quay lai\n");

printf("2. Thoat\n");

printf("Vui long chon:...");

scanf("%d", &phim);

} 

while (phim!= 1 && phim!= 2 );

printf("Ban da chon : %d\n", phim);



switch (phim)
{
case 1:
    nice();
    break;

default:
    break;
}
}



int main(int argc, char const *argv[])
{ int phim = 1;
    while(phim=1){

int phim = nice();
switch (phim)
{
case 1:
float a1,a2,b1,b2, s;
    printf("chuong trinh tinh khoang cach\n");
    printf("nhap diem A(a1,b1):\n");
    printf("nhap toa do (a1 b1):");
    scanf("%f %f",&a1, &b1);
 printf("\nnhap diem B(a2,b2):");
    printf("\nnhap toa do (a2 b2)");
    scanf("%f %f",&a2, &b2);
s= sqrt(pow(a1-a2,2)+pow(b1-b2,2));
printf("khoang cach la %.2f", s);
vip();

    break;
case 2:
float x1,x2,y1,y2,y3,x3, P;
printf("chuong trinh tinh khoang cach\n");
    printf("nhap diem A(x1,y1):\n");
    printf("nhap toa do (x1 y1):");
    scanf("%f %f",&x1, &y1);
 
printf("\nnhap diem B(x2,y2):");
    printf("\nnhap toa do (x2 y2)");
    scanf("%f %f",&x2, &y2);

    printf("\nnhap diem C(x3,y3):");
    printf("\nnhap toa do (x3 y3)");
    scanf("%f %f",&x3, &y3);
    P = fabs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0);
     printf("\ndien tich la %.2f", P);
     vip();
default:
    break;
}

    }

return 0;
}