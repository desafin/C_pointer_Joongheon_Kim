#include <stdio.h>


int main(){

    int x=100;//변수 초기화 동시에 대입
    int *ptr_x;//포인터 선언

    ptr_x=&x;//포인터에 주소를 대입
    *ptr_x=*ptr_x+200;//포인터 값에 포인터값을 대입

    printf("x: %d\n",x);//x의값을 출력
    printf("*ptr_x:%d,ptr_x:%p\n" ,*ptr_x,ptr_x);//주소의 값을 출력 주소출력

}