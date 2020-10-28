#include <math.h>
#include <stdio.h>
int main()
{
    double s=0;
    int n;
    scanf("%d",&n);
    int a[n+2][2];
    a[0][0]=0;
    a[0][1]=0;
    a[n+1][0]=0;
    a[n+1][1]=1;
    for (int i=2;i<2*n+2;i++)
        scanf("%d",&a[i/2][i%2]);
    for (int i=0;i<n+1;i++)
        s+=pow((a[i][0]-a[i+1][0])*(a[i][0]-a[i+1][0])+(a[i][1]-a[i+1][1])*(a[i][1]-a[i+1][1]),1/2);
    printf("%lf",s);
}
