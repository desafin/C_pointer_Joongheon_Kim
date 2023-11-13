#include <stdio.h>

int main(){

    int x;
    int *ptr_x;//포인터 선언
    x=100;//값대입
    ptr_x=&x;//주소대입
    printf("x:%d , &x: %p\n",x,&x);//값출력 주소출력
    printf("*ptr_x:%d , ptr_x: %p\n",*ptr_x,ptr_x);//값출력 포인터 출력(주소)

    *ptr_x=200;//값대입

    printf("x:%d , *ptr_x: %p\n",x,*ptr_x);//값출력 값출력
}