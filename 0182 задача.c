#include <math.h>  // но задача пока не решена
int main()
{
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    int x41=x2+x3-x1;
    int x42=x1+x3-x2;
    int x43=x1+x2-x3;
    int y41=y2+y3-y1;
    int y42=y1+y3-y2;
    int y43=y1+y2-y3;
    if (pow((x41-x1)*(x41-x1)+(y41-y1)*(y41-y1),1/2)=pow((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3),1/2))
        printf("%d %d",x4,y4)
    else if (pow((x42-x2)*(x42-x2)+(y42-y2)*(y42-y2),1/2)=pow((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3),1/2))
        printf("%d %d",x4,y4)
    else if (pow((x43-x3)*(x43-x3)+(y43-y3)*(y43-y3),1/2)=pow((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2),1/2))
        printf("%d %d",x4,y4)
}
