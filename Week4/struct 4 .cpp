## 4. 重新來一次, 老師利用 C Tutor 及 CodeBlocks(配合printf) 示範 外面的global全域變數 會初始值, 裡面的 local區域變數會是亂碼。 然後我們把 local變數裡面用程式來塞值。
```C
#include <stdio.h>
struct DATA{
    int x, y;
}a[3];
struct DATA b = { 100, 200};
int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x, a[i].y);
    }
    printf("b:%d %d\n",b.x, b.y);

    struct DATA c;
    printf("c:%d %d 像亂碼\n",c.x, c.y);
    c=b;///舊式寫法   較好的寫法 c.x=b.x;  c.y=b.y;

    printf("c: %d %d\n",c.x ,c.y);
}
```
