#include <stdio.h>


int main(){

    char c='A';
    printf("%p %p %p \n",&c,(char*)&c,(int *)&c);
    printf("%p %p %p \n",&c+1,(char*)&c+1,(int *)&c+1);
}
//포인터의 형변환은 어떤 타입을 가리키는지 지정한다
//문자열은 1바이트 다음을 가리킬것이고 
//정수형은 4바이트 다음을 가리킬것이다

