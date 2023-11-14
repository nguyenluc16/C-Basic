#include<stdio.h>
#include<stdint.h>

#define HinhChuNhat 1
#define HinhVuong 2
#define HinhTamGiacVuong 3

void hinhChuNhat(int chieuDai , int chieuRong) 
{
for(int i=0; i<chieuDai;i++ ) { printf("*"); }

for(int i=2;i<chieuRong;i++)
    {
        printf("\n*");
       for(int i=2; i<chieuDai;i++ ) { printf(" "); }
       printf("*");
    }
printf("\n");
for(int i=0; i<chieuDai;i++ ) { printf("*"); }
}


void hinhVuong(int canh ) 
{ hinhChuNhat(canh,canh);

}

void hinhTamGiacVuong(int chieuDai , int chieuRong) 
{
    for(int i=0; i<chieuDai;i++ ) { printf("*"); }

for(int i=2;i<chieuRong;i++)
    {
        printf("\n*");
       for(int i=2; i<chieuDai;i++ ) { printf(" "); chieuDai--;}
       printf("*");
    }
printf("\n");
 printf("*"); 

}

int main()
{ 
    int loaihinh;
    printf(" Vui long chon loai hinh:");
    scanf("%d",&loaihinh);
switch(loaihinh)
{ 
    case HinhChuNhat: 
        int CD, CR;
        printf(" Nhap CD:");
        scanf("%d",&CD);
        printf(" Nhap CR:");
        scanf("%d",&CR);
        hinhChuNhat(CD,CR);
        break;
     case HinhVuong: 
        int canh;
        printf(" Nhap Canh:");
        scanf("%d",&canh);
        hinhVuong(canh);
        break;
    case HinhTamGiacVuong: 
        int cd, cr;
        printf(" Nhap CD:");
        scanf("%d",&cd);
        printf(" Nhap CR:");
        scanf("%d",&cr) ;
        hinhTamGiacVuong(cd,cr);
        break;

    default: break;
}

    return 0;
}