#include <stdio.h>
int main()
{
    char line[10]="decline";///�r��᭱�|��'\0'
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};///�ѤF�r�굲��
    printf("�A�ݬݧA�ݬ�,�{�b�L�X��line4: ==%s==\n",line4);
}
