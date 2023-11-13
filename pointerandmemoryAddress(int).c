#include <stdio.h>

int main(){


    int a=1;
    int b=2;//정수형은 4바이트

    printf("%p\n",&a);//주소출력
    printf("%p\n",&a+1);//다음 주소를 출력
    printf("%p\n",&b);//주소출력
    printf("%p\n",&b+1);//다음주소출력4칸씩 뛴다
}