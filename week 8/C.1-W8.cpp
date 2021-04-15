#include <iostream>

using namespace std;

//a.Dao xau
void reverse(char a[])
{
    char *GetChuoi=NULL;
    int length = strlen(a);
    int scan = 0;
 
    GetChuoi=(char*)malloc(sizeof(char));
 
    while (scan < length)
    {
        *(GetChuoi + scan) = a[length - scan++ - 1];
    }  
    *(GetChuoi + scan) = "\0"; 
 
    return GetChuoi;    
}
//b.Xoa ki tu
void delete_char(char a[],char c)
{

}
//c.Don phai
void pad_right(char a[],int n)
{
}
//d.Don trai
void pad_left(char a[],int n)
{
}
//e.Cat xau
void truncate(char a[],int n)
{
}
//f.Doi guong
void bool_is_palidrome(char a[])
{
}
//g.Loc trai
void trim_left(char a[])
{
}
//h.Loc phai
void trim_right(char a[])
{
}
int main()
{
    char a[100];
    cout << "Moi nhap xau a:";
    fgets(a, 100, stdin);
    reverse(a);
    return 0;
}
