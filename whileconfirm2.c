//การเขียนโปรแกรมแบบทำซ้ำโดยการถามตอบและมีลูปซ้อนใน
#include <stdio.h>
#include <string.h>
void main()
{
    int i,age;
    char ny[1];
    char myname[55];
    do {
            printf("โปรดป้อนอายุ ? ");
            scanf("%d",&age);
            printf("โปรดป้อนชื่อของท่าน ? ");
            scanf("%s",myname);
                for (i =0;i<age;i++){
                    printf("%s\n",myname);
                }
         printf("ต้องการทำต่อหรือไม่ [y/n] ? ");
         scanf("%s",ny);       
    }  while (strcmp(ny,"y") == 0) ;
}