#include<stdio.h>
#include<stdint.h>

#define LUC 10000
#define VIP 20000





// int test(){

// return 5;
//             }

// void hienThi(uint16_t id, char* ten, uint8_t tuoi){
// printf("ID: %d, TEN: %s, TUOT: %d\n", id, ten, tuoi);}

// uint8_t tong( uint8_t a , uint8_t b) { return a + b ;};



// float thuong(uint8_t a, uint8_t b )
// {if (b==0) {printf(" nice try ");} 
// else return (float)a/b; 

// }


//  int main( int argc, char const *argv[])
//  {

// hienThi(20, "Luc", 22);
// printf("tong a va b la %d\n", tong(2,1));
// printf("thuong a va b la %f\n", thuong(4,3));

//  }

int main(int argc, char const *argv[])
{   uint16_t dis;
     uint32_t mon;

     printf("Nhap So km la:");
    scanf("%d",&dis);
    if(dis>30)
    {
        mon=14000+29*12000+(dis-30)*10000;
    }
    else if(dis<=30 && dis>1)
    {
        mon=14000+(dis-1)*12000;
    }
    else
    mon=14000;
    printf("So tien la: %d",mon);

    int thang = 0, ten = LUC ;

switch (thang)
{   
    case 1: 
    case 3: 
    case 5: 
    case LUC:
    printf("chung ta co 31 ngay\n"); break; 

    default: break;
}

// while

// do-while


// char *string = "This is test";



// int i = 0;

// while (*(string+i) != 0x00)

// {

// printf("ky tu: %c = 0x%x\n", *(string+i), *(string+i));

// i++;

// printf("size: %d\n", 1);

// }


char string[] = "This is test";



int j = 0;

while (j <17 )

{

printf("ky tu: %c\n", (string[j]));

j++;



}





}


