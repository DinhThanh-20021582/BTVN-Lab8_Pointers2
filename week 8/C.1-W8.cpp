#include <iostream>
#include <stdio.h>
using namespace std;

//a.Dao xau
void reverse(char a[])
{
    int count = 0;
	while (a[count] != '\0') count++;
    char * temp = new char[count + 1];
    //char temp[count + 1];
	for (int i = 0; i < count; i++)
	{
		 *(temp + i) = a[count - 1 - i];
	}
	temp[count] = '\0';
	for(int i = 0; i < count; i++){
		cout << *(temp + i);
 }

//b.Xoa ki tu
void delete_char(char a[], char c)
{
	int count = 0;
	while (a[count] != '\0') count++;
	for(int i = 0; i < count; i++){
		if(a[i] != c) cout << a[i];
	}
}
//c.Don phai
// void pad_right(char * s, int n)
// {
// 	int count = 0;
// 	while (*(s + count) != '\0') count++;
// 	if (count < n) {for (int i = count; i < n; i++) *(s + i) = '_'; *(s + n) = '\0';}
// 	for(int i = 0; i < n; i++){
// 		cout << *(s + i);
// 	}
// }
//d.Don trai
void pad_left(char a[],int n)
{
}
//e.Cat xau
void truncate(char a[], int n)
{	
	int count = 0;
	while (a[count] != '\0') count++;
	if(count > n) {for (int i = 0; i < n; i++) {
		cout << a[i];
		}
	}
}
//f.Doi guong
// bool is_palindrome(char a[])
// {
// 	int count = 0;
// 	while(a[count] != '\0') count++;
// 	char * temp = new char[count + 1];
// 	for(int i = 0; i < count; i++){
// 		*(temp + i) = a[i];
// 	}
// 	temp[count] = '\0';
// 	for(int i = 0; i < count; i++) {
// 		for(int j = count - 1; i >= 0; i--){
// 		if(a[i] != *(temp + j)) return false;
// 		else return true;
// 		}
// 	}

//g.Loc trai
void trim_left(char a[])
{
	int count;
	while(a[count] != '\0') count++;
	for(int i = 0; i < count; i++){
		if(a[i] != '_') cout << a[i];
	}
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
