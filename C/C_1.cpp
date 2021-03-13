#include <iostream>

using namespace std;
int len (char arr[])
{
    int dem = 0;
    for(int i=0; *(arr+i)!='\0'; i++)
    {
        dem++;
    }
    return dem;
}
void erase (char arr[], int vtri)
{
    for(int i=vtri; i<len(arr)-1; i++)
    {
        *(arr+i) = *(arr+i+1);
    }
    *(arr+len(arr)-1) = '\0';
    return;
}

void reverse(char a[])
{
    int i=0, j=len(a)-1;
    while(i<j)
    {
        char tmp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = tmp;
        i++;
        j--;
    }
    return;
}
void delete_char(char a[], char c)
{
    for(int i=0; i<len(a); i++)
    {
        if(*(a+i)==c)
        {
            erase(a,i);
        }
    }
    return;
}
void pad_right(char a[], int n)
{
    int size = len(a);
    if(size>=n) return;
    for(int i=size; i<n; i++)
    {
        *(a+i) = ' ';
    }
    return;
}
void pad_left(char a[], int n)
{
    int size = len(a);
    if(size>=n) return;
    for(int i=n-1; i>=size; i--)
    {
        *(a+i) = *(a+i-size);
    }
    for(int i=0; i<size; i++)
    {
        *(a+i) = ' ';
    }
    return;
}
void truncate(char a[], int n)
{
    int size = len(a);
    if(size<=n) return;
    for(int i=n-1; i<size; i++)
    {
        *(a+i) ='\0';
    }
    return;
}
bool is_palindrome(char a[])
{
    int i=0, j=len(a)-1;
    while(i<j)
    {
        if(*(a+i)!=*(a+j)) return false;
        i++;
        j--;
    }
    return true;
}
void trim_left(char a[])
{
    for(int i=0; i<len(a); i++)
    {
        if(*(a+i)==' ')
        {
            erase(a,i);
        }
    }
    return;
}
void trim_right(char a[])
{
    for(int i=len(a)-1; i>=0;i--)
    {
        if(*(a+i)==' ')
        {
            *(a+i) = '\0';
        }
    }
    return;
}
int main()
{
    char a[1000];
    cin >> a;
    cout << a << endl;
    cout << "do dai a: " << len(a) << endl;

    reverse(a);
    cout << "Dao xau:  " << a << endl;
    reverse(a);

    cout << "Doi xung: " << is_palindrome(a) << endl;

    delete_char(a,'c');
    cout << "xoa ki tu 'c' : " << a << endl;

//    pad_right(a,10);
//    cout << "don phai(n=10): " << a << '-' << endl;
//
//    pad_left(a,10);
//    cout << "don trai(n=10): " << '.' << a << endl;

    truncate(a,3);
    cout << "cat xau(n=2): " << a << endl;

    trim_left(a);
    cout << "Xoa ki tu trang dau: " << a << endl;

    trim_right(a);
    cout << "Xoa ki tu trang cuoi: " << a << endl;
    return 0;
}
