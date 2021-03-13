#include <iostream>

using namespace std;

int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   cout << endl;
    int b[5] = {0,1,2,2,3};
   for (int *cp1 = b; (*cp1) != 3; cp1++) {
      cout << cp1 << " : " << (*cp1) << endl;
   }
   cout << endl;
   double c[5] = {0,1,2,2,3};
   for (double *cp2 = c; (*cp2) != 3; cp2++) {
      cout <<  cp2 << " : " << (*cp2) << endl;
   }

   return 0;
}
/**
a, Các phần tử có địa chỉ cách nhau 1 byte
b, 4 byte
c, 8 byte
d, địa chỉ in ra cách nhau = 2 lần kích thước kiểu
*/
