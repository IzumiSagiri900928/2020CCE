## 3.老師利用 C Tutor 及 CodeBlocks 示範, 接續上題, 再利用 a.x 及 a.y 來改變裡面的值。
```C
#include <stdio.h>
struct POINT{
    float x, y;
};
int main()
{
    struct  POINT a{ 4.1, 3.2};
    printf("%f %f\n",a.x,a.y);
    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    return 0;
}
```
