#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
     int h,m,s;
int d = 1000;
printf("set the time: \n ");
scanf("%d%d%d", &h,&m,&s);
if (h > 12, m > 60, s > 60)
{
   printf("ERROR");
 exit(0);
}

while (1)
{
    s++;
    if (s>60)
    {
        m++;
        s=0;
    }
    if(m>60)
    {
        h++;
        m=0;
    }
    if(h>12)
    {
        h=1;
    }
     printf("Sandra's clock: \n");
    printf("%02d: %02d: %02d", h,m,s);
    Sleep(d);
    system("cls");

}
    return 0;
    }
