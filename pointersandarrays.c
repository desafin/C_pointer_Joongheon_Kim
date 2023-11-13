#include <stdio.h>

int main(){
    //포인터에 1씩 더하면 다음주소로 넘어간다
    int *p,sum=0,i;
    int x[5]={5,9,6,3,7};
    i=0;
    p=x;//배열이 이미 포인터이다



    while (i<5)
    {
        printf("x[%d],%d,%u\n",i,*p,p);
        sum=sum+*p;
        i++,p++;

    }
    printf("sum: %d ,&x[0]: %u,p:%u\n",sum,&x[0],p);

    
}