#include <stdio.h>

int main(){
    int x=20,y=10,s,d;
    mathopertation(x,y,&s,&d);//주소를 매개변수로 준다
    printf("s: %d, d: %d\n",s,d);

}

//포인터를 사용하여 블럭 밖에서 값을 조작할수있다

void mathopertation(int a,int b,int *sum,int *dif){//그 주소의 값을 바꾼다
    *sum=a+b;
    *dif=a-b;
}