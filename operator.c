#include <stdio.h>

void main(){

    char c='A';//문자 A
    printf("%p\n", &c);//변수의 주소
    printf("%c   %c\n",c ,*&c);
    //변수와 변수의 주소의 값은 같은 의미를 가진다
}