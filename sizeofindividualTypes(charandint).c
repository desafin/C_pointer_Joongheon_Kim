#include <stdio.h>


void main(){

    char c='A';
    char *cp =&c;
    
    int n=10;
    int *np=&n;

    printf("%c %c\n",c,*cp);
    //변수의 값 출력 포인터의 값출력
    printf("%ld %ld\n",sizeof(char),sizeof(char*));
    //1과 8이 출력된다 64비트 아키텍쳐에서는 메모리주소의 크기는 8바이트
    printf("%ld %ld\n",sizeof(c),sizeof(cp));
    //문자열 c의 사이즈 출력 포인터의 사이즈 출력
    printf("======\n");


    printf("%d %d\n",n,*np);
    //값출력 포인터의 값출력
    printf("%ld %ld\n",sizeof(int),sizeof(int*));
    //정수형의 사이즈 출력 정수형 포인터의 메모리 주소크기 출력
    printf("%ld %ld\n",sizeof (n),sizeof(np));
    //정수값의 사이즈 출력 4 포인터의 사이즈출력
}