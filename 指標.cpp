#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p=&n[0];///���� int *p ���׃ n1׃����ֵ
    *p = 200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2=&n[2];///���� int *p2 ���׃ n2 ׃����ֵ
    *p2 = 300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

     p2 = p;         ///���� p2=p ׌�ڴ���addressλַ�Q��һ��, ���� *p2=400 �͕��Q�������ط���400Ԫ
    *p2 = 400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
}
