## 5.重新來一次, 老師利用 C Tutor 及 CodeBlocks(配合printf) 示範, (結構)有個陣列、有個指標, 使用 p->x, p->y, p->z 取用到指標指到的值
```C
#include <stdio.h>
struct POINT {
    float x,y,z;
};
struct POINT point [5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};
int main()
{
        struct POINT *p = & point[0];
        printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

        p++;
        printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

        p++;
        printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
}
```
