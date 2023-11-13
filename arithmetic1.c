#include <stdio.h>


int main(){
    int x,y,sum;//변수선언

    x=100;
    y=200;//변수에 값대입
    int *ptr_x,*ptr_y,*ptr_sum;//포인터 변수 3개선언

    ptr_x=&x;//포인터 변수에 주소대입
    ptr_y=&y;
    ptr_sum=&sum;

    *ptr_sum=*ptr_x+*ptr_y;//포인터 값에서 값을 가져와서 값에 대입

    printf("ptr_x:  %p,ptr_y %p\n",ptr_x,ptr_y);//주소를 출력
    printf("*ptr_x:  %d,*ptr_y %d\n",*ptr_x,*ptr_y);//포인터의 값을 출력
    printf(" *ptr_sum :%d\n",*ptr_sum);//포인터의 값을 출력
}
