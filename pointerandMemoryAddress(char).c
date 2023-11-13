#include <stdio.h>

void main(){

    char a ='A';
    char b='B';

    printf("%p\n",&a);//주소출력
    printf("%p\n",&a+1);//다음 주소를 출력
    printf("%p\n",&b);//주소출력
    printf("%p\n",&b+1);//다음주소출력
}