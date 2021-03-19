## 2. 老師利用 C Tutor 及 CodeBlocks 示範 struct POINT a={4.1, 3.2}; 並利用 a.x 及 a.y 印出來。
```C
#include <stdio.h>
struct POINT{
    float x, y;
};

int main()
{
    struct  POINT a{ 4.1, 3.2};
    printf("%f %f",a.x,a.y);
    return 0;
}
```
