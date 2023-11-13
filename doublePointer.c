#include <stdio.h>

int main(){

    char c ='A';
    char *cp;//포인터 선언
    char **cpp;//더블포인터 선언

    cp=&c;//포인터의 주소를 대입
    cpp=&cp;//포인터에 포인터의 주소를 대입

    printf("%c %c %c\n",c,*cp,**cpp);
    //A를 출력c 값출력 cp포인터의 값출력 cpp포인터의 값의 값을 출력
    printf("%p %p %p\n",&c,cp,*cpp);
    //셋다 같은 메모리 주소
    printf("==========\n");

    int n=10;
    int *np;
    int **npp;

    np=&n;
    npp=&np;

    printf("%d %d %d\n",n,*np,**npp);
    
    printf("%p %p %p\n",&n,np,*npp);
}