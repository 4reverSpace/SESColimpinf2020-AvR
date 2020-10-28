#include <math.h>
int main()
{
    int n,a;
    scanf("%d %d",&n,&a);
    if (a/2/sin(3.1415926535/n)<a/2/tan(3.1415926535/n)+1)
        printf("YES");
    else
        printf("NO");
}
