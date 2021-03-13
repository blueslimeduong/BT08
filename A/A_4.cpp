#include <iostream>

using namespace std;

int main()  {
//    char **s
   char **s = new char*;
   char foo[] = "Hello World";
   *s = foo;
   //printf("s is %s\n",s);
   printf("s is %s\n",*s);
   s[0] = foo;
   printf("s[0] is %s\n",s[0]);
   delete s;
   return(0);

}

/** lỗi + *s = foo : *s truy nhập vùng nhớ chưa xác định
        + s[0] = foo; s chưa khởi tạo
        + printf("s is %s\n",s); in ra địa chỉ, thứ ta cần in là giá trị
Cách sửa: cấp phát động cho **s; sửa s -> *s (như code trên)
*/
