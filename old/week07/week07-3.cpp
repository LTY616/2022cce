///�������۰��k,��̤j���]��
///�n��long long int ����,�Ʀr�ܤj
#include <stdio.h>
int main()
{
    long long int a,b,c;///�Ѥj�A�ѤG�A�ѤT
    scanf("%lld %lld", &a, &b);
    while(1){///�j��@����
        c=a%b; ///�Ѥj �ѤG�A��X�ѤT(�l��)
        printf("a:%lld c:%lld\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("���׬O:%lld\n",b);
}
