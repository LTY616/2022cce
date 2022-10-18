# 2022cce
畫星星
```cpp
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
```

畫星星, 畫出等腰三角形
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        ///printf("%d樓 有%d星\n", i, 2*i-1);
        ///printf("%d樓 %d空格\n", i, 5-i);
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}///1樓4空格 1星
///2樓3空格 3星
///3樓2空格 5星
///4樓1空格 7星
///5樓0空格 9星
///           跟2有關係 2*i-1
```

暴力法找最大公倍數
```cpp
///分數想要約分 51/68
/// 試全部的數字，看能不能整除
#include <stdio.h>
int main()
{
    printf("請輸入兩個整數,要約分: ");
    int a,b;
    scanf("%d %d", &a, &b); ///51 68

    int ans; ///約分的答案(最大公因數)
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0){
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
    ///把答案印出來
}
```

輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a, b, c; ///老大，老二，老三
    scanf("%d %d", &a, &b);
    while(1){///1直做事
        c=a%b;///老三
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案b: %d", b);
}
```

比較 int 整數 及 long long int 很長很長的整數 的差別
```cpp
///long long int?
///很長 很長 的整數
#include <stdio.h>
int main()
{///在x86的電腦架構下 int是32位元 可裝 9-10位
    int n=9876543210;
    printf("int 印出來 %d\n", n);///但是印錯了

    ///可裝 19-20位數
    long long int a=9876543210;///10位數
    printf("long long int 印出來 %lld\n", a);
                        ///英文的long long d
}
```

最大公因數, 改用 long long int 很長很長的整數 來計算
```cpp
///最大公因數改用 long long int
///scanf("lld", &a);讀入
///printf("lld", a);印出
#include <stdio.h>
int main()
{
    long long int a, b; ///都是很長的整數
    scanf("%lld %lld", &a, &b);///小心是小寫的字母LLD

    long long int ans;
    for( long long int i=1;i<=a;i++){
        if( a%i==0 && b%i==0 ) ans=i;
    }
    printf("最大公因數是:%lld\n", ans);
}
```

輾轉相除法改用 long long int 很長很長的整數來計算
```cpp
///改用輾轉相除法,找最大公因數
///要用long long int 版本,數字很大
#include <stdio.h>
int main()
{
    long long int a,b,c;///老大，老二，老三
    scanf("%lld %lld", &a, &b);
    while(1){///迴圈一直做
        c=a%b; ///老大 老二，算出老三(餘數)
        printf("a:%lld c:%lld\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```

學習「10進位轉2進位」之前, 需要先學會一種「剝皮」的技巧
```cpp
#include <stdio.h>
int main()
{
    ///請輸入9位數
    int n;
    scanf("%d", &n);

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;
}
```
