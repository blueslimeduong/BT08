/**
Do s1 và s2 là 2 biến kiểu con trỏ nên muốn swap s1 và s2, hàm phải nhận tham số là con trỏ tới con trỏ
*/
#include <iostream>

using namespace std;

void swap_pointers(char**x, char**y)
{
   char *tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(&s1,&s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}

