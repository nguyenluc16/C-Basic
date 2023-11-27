# C-Basic
Bài 1: Vẽ các hình (Hình chữ nhật, hình vuông, hình tam giác vuông) bằng kí tự *.

Bài 2: Tính khoảng cách giữa hai điểm trong tọa độ Descartes và tính diện tích tam giác khi biết tọa độ ba điểm áp dụng while và switch.

Bài 3: Xác định thứ của một ngày bất kì trong năm dùng enum .

Bài 4: Đảo ngược toàn bộ từ trong 1 câu dùng hàm và pointers.

Bài 5: Giải phương trình bậc 2 tổng quát chưa tối giản, không dùng thư viện có sẵn.

# Các điều cần có: 


## Môi Trường Phát Triển với Visual Studio Code

Nếu  muốn sử dụng Visual Studio Code để phát triển ứng dụng C,  có thể cài đặt các extension và cấu hình cần thiết để có trải nghiệm phát triển tốt nhất.

### 1. Cài Đặt Extension C/C++

Trước tiên,  cần cài đặt extension "C/C++" của Microsoft để hỗ trợ lập trình C trong VS Code. Mở VS Code và vào tab Extensions, tìm "C/C++" và cài đặt extension của Microsoft.

### 2. Cấu Hình File Launch.json

Để chạy và gỡ lỗi chương trình C trong VS Code cần cấu hình file `launch.json`. Tạo một file mới trong thư mục `.vscode` của dự án và thêm nội dung sau:

```
json
{
"tasks": [
{
"type": "cppbuild",
"label": "C/C++: gcc.exe build active file",
"command": "D:\\msys64\\mingw64\\bin\\gcc.exe", //đường dẫn cho trình biên dịch, để thành gcc.exe để đổi máy không lỗi, vì nó được lưu trong biến môi trường rồi. 
"args": [
"-fdiagnostics-color=always",
"-g",
"${file}",
"-o",
"${fileDirname}\\${fileBasenameNoExtension}.exe"
],
"options": {
"cwd": "D:\\msys64\\mingw64\\bin"
},
"problemMatcher": [
"$gcc"
],
"group": {
"kind": "build",
"isDefault": true
},
"detail": "Task generated by Debugger."
}
],
"version": "2.0.0"
} 
```
### 3. Tích hợp Terminal
VS Code cũng có tích hợp terminal cho phép  chạy các lệnh dòng lệnh mà không cần rời khỏi môi trường phát triển của mình.

### 4. Cài Đặt Extension Cho Git (Nếu Cần)
Nếu  sử dụng Git để quản lý mã nguồn, hãy cài đặt extension "Git" để quản lý phiên bản và theo dõi thay đổi dễ dàng.

### 5. **Cài đặt trình biên dịch C:**
- Để chạy các chương trình C, cần một trình biên dịch C như GCC. [GCC](https://gcc.gnu.org/).

### 6. Các lệnh github cơ bản:
```
$ git init (Khởi tạo git trong thư mục dự án của ) - Lệnh này được dùng khi  muốn tạo một phiên bản git mới cho một dự án.
$ git add . (Chú ý dấu chấm) 
Hoặc:

$ git add --all (git add -A)

$ git add index.html (có thể chỉ định trực tiếp tên tệp cần add)

$ git clone <url> (Địa chỉ dự án  muốn Clone) - Clone dự án có sẵn trên GitHub. $ git clone <url> folder_name - Clone đồng thời đổi tên dự án theo ý  khi save vào local.
$ git commit -m "Thông điệp của "

Git commit: Ghi lại các thay đổi vào kho lưu trữ. (Cần thêm các thông điệp rõ ràng vào mỗi mục commit)
$ git push -u origin branch_mane - Push (đẩy) branch vào remote repository.

$ git push - Push (đẩy) tất cả mọi thay đổi (đã commit) lên remote repository.

$ git push -d origin branch_mane - Xóa một branch trên remote repository.

$ git diff So sánh sự khác biệt kể từ lần commit cuối cùng của .

$ git log Xem lịch sử làm việc với git (lịch sử commit)
``` 

## Các Nội Dung


# Ngôn ngữ lập trình C

## Giới thiệu

C là ngôn ngữ lập trình mục đích chung được phát triển bởi Dennis Ritchie tại Bell Labs vào những năm 1969-1973. Đây là ngôn ngữ thủ tục ảnh hưởng đến nhiều ngôn ngữ sau này.

C gắn liền với UNIX và được dùng cho lập trình hệ thống như phát triển hệ điều hành, ứng dụng nhúng hệ thống. Ngoài ra còn dùng trong phát triển phần mềm ứng dụng cho các lĩnh vực tính toán hiệu năng cao.

Một số đặc điểm chính:

- Ngôn ngữ lập trình thủ tục 
- Hỗ trợ cấu trúc dữ liệu và câu lệnh điều khiển
- Kiểm tra tĩnh các kiểu dữ liệu
- Thư viện chuẩn phong phú các hàm thông dụng  

## Cơ bản

### 1. Hello World

Chương trình đơn giản nhất để hiển thị chuỗi "Hello, World!".

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```


Một số khái niệm cơ bản khi lập trình C:

### Biến và kiểu dữ liệu

- Kiểu nguyên thủy: số nguyên, số thực, ký tự, bool
- Bổ ngữ: `short`, `long`, `signed`, `unsigned` 
- Định nghĩa kiểu (`typedef`)
- Biến phải được khai báo trước khi sử dụng

### Toán tử 

- Số học: `+`, `-`, `*`, `/`
- Bit: `&`, `|`, `^`, `<<`, `>>`  
- Logic: `&&`, `||`, `!`
- So sánh: `==`, `!=`, `>`, `<`, vân vân

### Cấu trúc điều khiển

- Rẽ nhánh: `if`, `else if`, `else` 
- Vòng lặp: `for`, `while`, `do while`
- Nhánh: `break`, `continue`, `return`

### Hàm

- Hàm do người dùng định nghĩa
- Tham số truyền theo giá trị 
- Phạm vi biến giữa các khối lệnh

### Chú thích

- Dòng: `//`
- Khối: giữa `/*` và `*/`  

## Biên dịch và thực thi

Để biên dịch và chạy chương trình C:

1. Viết code trong trình soạn thảo văn bản và lưu với đuôi `.c`
2. Biên dịch bằng trình biên dịch C như gcc hoặc clang để tạo file thực thi
3. Chạy file thực thi để xem kết quả

Cụ thể:

###  2. Biến:

Biến trong ngôn ngữ C là một phần của bộ nhớ được sử dụng để lưu trữ dữ liệu, một biến số gồm có 3 thành phần: 
* Kiểu dữ liệu: để xác định dữ liệu mà biến hoặc giá trị có thể lưu trữ.
* Tên biến: là tên gọi giúp nhận ra để phân biệt các biến.
* Giá trị: có thể là số hoặc chữ tùy theo kiểu dữ liệu của biến.

Cú pháp khai báo:

> \<Kiểu dữ liệu\>\<Tên biến\> = \<Giá trị\>; 


### 3. Các kiểu dữ liệu trong C

#### **Kiểu ký tự (char)**


Một giá trị kiểu char chiếm 1byte = 8bit và được biểu diễn thông qua bảng mã ASCII.

 Có hai kiểu dữ liệu char : kiểu Char (signed char) và Unsigned char.

 > Char (Signed char): Có dấu, có thể lưu trữ giá trị dương và âm.

 > Unsigned char: Không dấu, chỉ có thể lưu các giá trị không âm (từ 0 trở lên).


| Kiểu | Số ký tự | Kích thước | Phạm vi biểu diễn | Định dạng
| :--- | :--- | :--- | :--- | :---
| Char (Signed char) | 256 | 1 byte | -128 đến 127|%c
| Unsigned char | 256 | 1 byte | 0 đến 255 | %c

**Cách tính phạm vi biểu diễn :**
* Đối với kiểu Char (Signed char) = -2^7 đến 2^7-1 (-128 đến 127).
* Đối với kiểu Unsigned char = 2^8 ( 0 đến 255).

#### **Kiểu số nguyên (integer)**
Trong ngôn ngữ C cho phép sử dụng số nguyên kiểu int, số nguyên dài kiểu long và số nguyên không dấu kiểu unsigned có kích thước khác nhau.

| Kiểu |Kích thước | Phạm vi biểu diễn | Định dạng |
| :--- | :--- | :--- | :---
| int | 2->4 byte | -2^15 đến 2^15-1 -> -2^31 đến 2^31-1 |%d, %i
| short int |2 byte | -2^15 đến 2^15-1 | %hd
| long int | 4->8 byte | -2^31 đến 2^31-1 -> -2^63 đến 2^63-1 | %ld, %li
| long long int | 8 byte | -2^63 đến 2^63-1 | %lld, %lli
| Unsigned int | 2->4 byte | 0 đến 2^16-1 -> 0 đến 2^32-1 | %u
| Unsigned long int | 4 byte | 0 đến 2^32-1 | %lu
| Unsigned long long int | 8 byte |  0 đến 2^64-1 | %llu

**Cách tính phạm vi biểu diễn :**

* Đối với int ( gồm số thực và số nguyên) 2->4byte = 16bit -> 32bit sẽ được tính theo cách sau, 2byte = -2^15 đến 2^15-1 (-32768 đến 32767) và 4byte = -2^31 đến 2^31-1.
* Đối với unsigned int ( chỉ tính số nguyên )
2->4byte = 8bit -> 16bit sẽ được tính theo cách sau, 2byte = 0 đến 2^16-1 (0 đến 65536 ) và 4byte = 0 đến 2^32-1.

#### **Kiểu phẩy động**

Trong ngôn ngữ C, kiểu dữ liệu phẩy động được sử dụng để biểu diễn số thực, hay biểu diễn giá trị có phần thập phân. Có ba kiểu dữ liệu phổ biến:
| Kiểu |Kích thước | Phạm vi biểu diễn | Định dạng |
| :--- | :--- | :--- | :---
| float | 4 byte | 3.4E-38 đến 3.4E+38 |%f
| double |8 byte | 1.7E-308 đến 1.7E+308 | %lf
| long double | 10 byte | 3.4E-4932 đến 1.1E-4932 | %Lf


Ví dụ cho Kiểu dữ liệu và biến:
```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 1.75;
    char gender = 'M';

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Gender: %c\n", gender);

    return 0;
}
```
Giải thích:

- `#include <stdio.h>`: Dòng này là một tiền xử lý (preprocessor directive) để bao gồm thư viện `stdio.h`, cung cấp các hàm chuẩn cho nhập và xuất trong C.

- `int main() { ... }`: Đây là hàm `main`, hàm chính của chương trình C, nơi bắt đầu thực thi chương trình.

- `int age = 25;`: Biến `age` được khai báo với kiểu dữ liệu là `int` (số nguyên) và được gán giá trị 25.

- `float height = 1.75;`: Biến `height` được khai báo với kiểu dữ liệu là `float` (số thực) và được gán giá trị 1.75.

- `char gender = 'M';`: Biến `gender` được khai báo với kiểu dữ liệu là `char` (ký tự) và được gán giá trị là 'M'.

- `printf("Age: %d\n", age);`: Dòng này sử dụng hàm `printf` để in giá trị của biến `age`. Trong chuỗi định dạng, `%d` là định dạng cho kiểu số nguyên.

- `printf("Height: %.2f meters\n", height);`: Dòng này in giá trị của biến `height` với định dạng số thực (`%f`). `.2` chỉ định rằng chỉ lấy hai chữ số sau dấu thập phân.

- `printf("Gender: %c\n", gender);`: Dòng này in giá trị của biến `gender`. Định dạng `%c` là để in giá trị ký tự.

- `return 0;`: Hàm `main` kết thúc và trả về giá trị 0, làm hiển thị chương trình đã thực hiện thành công.







### 4. Hàm:
# Hàm trong Ngôn Ngữ C

Hàm là một khối mã lệnh thực hiện một công việc cụ thể và có thể được gọi từ bất kỳ đâu trong chương trình. Trong ngôn ngữ lập trình C, hàm chia thành hai phần chính: khai báo hàm và định nghĩa hàm.

## 1. Khai Báo Hàm

Khai báo hàm mô tả các thuộc tính của hàm mà chương trình cần biết để sử dụng hàm đó. Cấu trúc khai báo hàm như sau:

```c
// Khai báo hàm
int add(int a, int b);
```

- `int`: Kiểu dữ liệu của giá trị trả về của hàm.
- `add`: Tên của hàm.
- `(int a, int b)`: Danh sách các tham số mà hàm nhận vào.

## 2. Định Nghĩa Hàm

Định nghĩa hàm chứa thân hàm, nơi thực hiện công việc cụ thể. Dưới đây là một ví dụ về định nghĩa hàm `add`:

```c
// Định nghĩa hàm
int add(int a, int b) {
    return a + b;
}
```

- `int`: Kiểu dữ liệu của giá trị trả về của hàm.
- `add`: Tên của hàm.
- `(int a, int b)`: Danh sách các tham số mà hàm nhận vào.
- `{ ... }`: Thân hàm, nơi thực hiện công việc và chứa các câu lệnh.

## 3. Gọi Hàm

Hàm có thể được gọi từ bất kỳ đâu trong chương trình bằng cách sử dụng tên hàm và truyền các đối số thích hợp:

```c
int result = add(5, 3);
```

- `int result`: Biến để lưu giá trị trả về của hàm.
- `add`: Tên của hàm.
- `(5, 3)`: Đối số được truyền vào hàm.

## Tham Số và Giá Trị Trả về

- **Tham số**: Là các giá trị mà hàm nhận vào để thực hiện công việc. Trong ví dụ trên, `a` và `b` là tham số của hàm `add`.
  
- **Giá trị trả về**: Là giá trị mà hàm trả về sau khi thực hiện công việc. Trong ví dụ, hàm `add` trả về tổng của `a` và `b`.

## Hàm Không Trả Giá Trị

Nếu một hàm không trả về giá trị, kiểu dữ liệu của hàm sẽ là `void`. Ví dụ:

```c
// Khai báo hàm không trả về giá trị
void greet() {
    printf("Hello!\n");
}
```

Hàm không trả giá trị không có `return` hoặc có thể sử dụng `return;` mà không có giá trị kèm theo.

