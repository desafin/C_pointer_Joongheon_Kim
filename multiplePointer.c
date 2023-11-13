#include <stdio.h>

int main(){
    int n=10;
    int *np;
    int **npp;
    int ***nppp;

    np=&n;
    npp=&np;
    nppp=&npp;

    printf("%d %d %d %d\n",n,*np,**npp,***nppp);
    //포인터의 값 출력
    printf("%ld %ld %ld %ld \n",sizeof(int),sizeof(int*),sizeof(int**),sizeof(int***));
    //정수형은 4바이트 지만 포인터주소의 사이즈는 8바이트 이다
    printf("%ld %ld %ld %ld\n",sizeof(n),sizeof(np),sizeof(npp),sizeof(nppp));
    //정수 포인터 포인터 포인터
}