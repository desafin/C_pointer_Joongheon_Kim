#include <stdio.h>

int main(){
    int x,y;
    x=10;
    y=20;
    printf("x:%d , y:%d\n",x,y);
    exchange(&x,&y);
    printf("x:%d , y:%d\n",x,y);

}
//포인터를 이용하여 함수외부의 값을 수정하였다
void exchange(int *a,int *b){//스왑함수
    int t;
    t=*a;
    *a=*b;
    *b=t;
}