#include <stdio.h>


int main (){
    int x=1;
    int y=2;
    int z[2];

    int *ptr;//포인터 선언
    
    
    ptr=&x;//포인터에 x의 주소가 들어간다
    printf("ptr: %p\n",ptr);//포인터의 주소가 출력됨
    
    y=*ptr;//포인터의 값을 y에 대입
    printf("y: %d\n",y);//y는 1이된다

    *ptr=0;//포인터의 값은 0
    printf("*ptr: %d\n",*ptr);//포인터의 값은  0출력

    ptr=&z[0];//배열의 0번째 인덱스의 주소를 포인터에 대입
    printf("ptr: %p\n",ptr);//주소출력
    printf("z[0] %d\n",z[0]);//값출력 =쓰레기값

}