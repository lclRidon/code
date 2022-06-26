#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int j(int x)
{
    int i, n = 0;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            n = 1;
    }
    return n;
}
int main()
{
    int i, n = 0;
    for (i = 100; i < 1000; i++)
    {
        n += j(i);
    }
    printf("%dHello,world你好", n);
    return 0;
}
//#include<stdio.h>
//int main() {
//    int y, m, d=0;
//    while (scanf("%d %d", &y, &m) != EOF) {
//        switch (m)
//    {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:d = 31; break;
//    case 2: {if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
//    {
//        d = 29;
//    }
//          else
//        d = 28;
//    }
//          break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:d = 30; break;
//    }
//printf("%d", d);
//    }
//    
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if (a + b > c && a + c > b && b + c > a)
//            sq(a, b, c);
//        else
//            printf("Not a triangle!");
//    }
//    return 0;
//}
//void sq(int a, int b, int c) {
//    if (a == b && b == c)
//        printf("Equilateral taiangle!");
//    else if (a == b || a == c || b == c)
//        printf("Isosceles triangle!");
//    else
//        printf("Ordinary triangle!");
//}