## p心裡的位置
```C
#include <stdio.h>
int a[5]={0, 10, 20, 30, 40};
void printAll()
{
    for(int i=0;i<5;i++) printf("%d",a[i]);
    printf("\n");

}
int main()
{
    printAll();

    int *p = &a[2];
    *p = 222;
            printAll();
            printf("p心裡小紙條記的位置:%d\n",p);

    p = p+2;
    *p = 666;
                printAll();
                printf("p心裡小紙條記的位置:%d\n",p);

    p--;
    *p = 555;
            printAll();
            printf("p心裡小紙條記的位置:%d\n",p);
}
```
## malloc()
```C
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
    int b[10];

    int *p = (int*)malloc(sizeof(int)*10);

    return 0;
}
```
