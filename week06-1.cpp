///畫星星，口訣: 左手i 右手 j
#include <stdio.h>
int main()
{
    ///for(int i=0; i<5; i++){//基礎型
    ///    printf("i:%d\n", i);
    ///}
    for(int i=5; i>0; i--){///倒過來型
        for(int j=0; j<i; j++){///基礎型
            printf("*");
        }
        printf("i:%d星星\n", i);
    }
}
