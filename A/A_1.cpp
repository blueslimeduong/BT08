#include <iostream>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
   return;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << &y << endl;
   return;
}
int main()
{
   f(7);
   g(11);
   return 0;
}
/** Dia chi cua 2 bien bang nhau. Do ham f va g co chung vi tri trong stack frame khi goi;
ca 2 ham f va g cung tham so int, x va y deu la bien dia phuong dau tien, nen co kha nang
chung co cung vi tri*/
