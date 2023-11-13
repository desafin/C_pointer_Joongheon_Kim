#include <stdio.h>

void main(){

    char c='A';
    char *cp=&c;
    int n=10;
    int *np=&n;

    printf("%ld %ld %ld\n",sizeof(c),sizeof(*cp),sizeof(cp));
    //문자열의 크기 문자열 포인터 값의 크기 포인터의 크기
    printf("%ld %ld %ld\n",sizeof(n),sizeof(*np),sizeof(np));
    //정수형의 크기 정수형 포인터 값의 크기 포인터의 크기
    
}