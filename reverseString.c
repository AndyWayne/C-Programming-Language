#include <stdio.h>

int main(){
    int i;
    printf("Please input the string:");
    palin(i);
    printf("\n");
    
    return 0;
}

void palin(int n){
    char next;
    //每次回读一个字符，但是缓存区存储了多个字符
    next=getchar();

    if(next != 10){
        palin(n+1);
    }
    //putchar函数会退回到上次执行，本身就会对缓存区字符串逆向输出
    putchar(next);
}
