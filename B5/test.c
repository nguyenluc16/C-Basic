#include <stdio.h>
int strlen(char *s) 
{
  int len = 0;
  while (s[len] != '\0') {
    len++; 
  }
  return len;
}
void removeSpaces(char *exp) 
{
  int i, j;
  for (i = 0, j = 0; i < strlen(exp); i++) {
    if (exp[i] != ' ') {
      exp[j++] = exp[i];
    }
  }
  exp[j] = '\0';
}
// Hàm xử lý dấu ngoặc đơn 
void handleBrackets(char *exp) 
  {
    // Duyệt chuỗi, 
    // Nếu gặp dấu ( thì đẩy vào stack
    // Nếu gặp dấu ) thì pop stack ra xử lý
    // Thay thế (biểu thức) = kết quả tính được
    // Sử dụng stack lưu kết quả tính toán các biểu thức con
  struct Stack {
    int top;
    char data[MAX];
  } myStack;

  // Khởi tạo ngăn xếp
  myStack.top = -1;

  char temp[MAX]; 
  int len;

  for(int i = 0; i < strlen(exp); i++) {

    if(exp[i] == '(') {
      // Đẩy phần tử vào stack
    
    }
    
    if(exp[i] == ')') {
    
      // Lấy phần tử từ stack  
     
      
      // Tính toán biểu thức trong ngoặc   
      len = calculateExp(temp); 

      // Thay thế kết quả vào vị trí của ')' trong mảng exp
      strncpy(&exp[i-len], temp, len);  
    }
  }
  }
//xu li trong ngoặc 
int calculateExp(char* exp) 
{

  int result = 0;
  
  // Tách từng phần tử của biểu thức
  char terms[MAX_TERMS][10];  
  char temp[10];

  int n = 0;  

  strcpy(temp, strtok(exp, "+"));  

  while(temp[0] != '\0') {
    strcpy(terms[n++], temp);
    strcpy(temp, strtok(NULL, "+"));  
  }
   
  // Duyệt từng phần tử
  for(int i = 0; i < n; i++) {
  
    char* term = terms[i];
    
    // Tách riêng hệ số và biến 
    int coef;
    int exp;
  
    sscanf(term, "%dx^%d", &coef, &exp);
    
    // Tính lũy thừa x^exp
  
    // Cộng dồn vào kết quả
    
  }

  // Chuyển kết quả về string và trả về độ dài

}

// Tách các nhân, chia đa thức
void splitPoly(char *exp) 
{
  // Sử dụng các dấu * / \+ để tách 
  // Lưu vào các chuỗi con
  char p1[MAX], p2[MAX], temp[MAX];

  for(int i = 0; i < strlen(exp); i++) {
    if(exp[i] == '*' || exp[i] == '/') {
      
      // Tách 2 đa thức trái & phải   
      strncpy(p1, exp, i);
      strcpy(p2, exp + i+1);
      
      // Tính toán 2 đa thức 
      multiplyOrDivide(p1, p2, temp);  

      // Gán kết quả thay thế vào exp
    }
  }
}

// Nhóm cùng số mũ lại  
void groupByDegree(char *exp) 
{
  // Quét từ cao xuống thấp, 
  // Nhóm các số mũ của x lại
   for(int i = strlen(exp) - 1; i >= 0; i--) 
   
   {
    
    if(exp[i] == 'x') 
    {  
      // Xét số mũ của x, nhóm lại
    }

   }
} 
void getCoefficients(char *term, float *coef) 
{
  // Tách riêng phần hệ số
  // Chuyển chuỗi sang số thực 
  // Gán vào biến coef
}
void getCoefficients(char exp[]) 
{
  
  // B1. Loại bỏ khoảng trắng
  removeSpaces(exp);

  // B2. Xử lý dấu ngoặc đơn, nhân chia đa thức 
  handleBrackets(exp);
  splitPoly(exp);

  // B3. Nhóm các số mũ của x lại với nhau
  // Ví dụ: 2x + 3x^2 -> 3x^2 + 2x

  // B4. Tách riêng từng đa thức, lấy hệ số
  // Ví dụ: 3x^2 + 2x -> 
  //    a = 3 
  //    b = 2
  //    c = 0   (vì không có số hạng tự do)

  float a, b, c; 
  getCoefficients(exp, &a, &b, &c);

  // In ra các hệ số  
  printf("%f %f %f", a, b, c); 

}

int main() {
  
  char exp[100];

  printf("Nhập biểu thức: ");
  scanf("%s", exp);

  getCoefficients(exp);

  return 0;
}
