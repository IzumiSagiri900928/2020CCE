#include <stdio.h>
int main()
{
    char line[10]="decline";///字串後面會補'\0'
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};///忘了字串結尾
    printf("你看看你看看,現在印出來line4: ==%s==\n",line4);
}
