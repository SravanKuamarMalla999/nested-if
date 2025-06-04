
#include <stdio.h>

int main()
{
    int w;
    scanf("%d",&w);
    if(w==0)
    {
        printf("time estimated:0 min");
        
    }else if(w>0&&w<=2000)
    {
        printf("time estimated : 25 min");
        
    }else if(w>=2000&&w<=4000)
    printf("time estimated: 35 min");
    else if(w<=4000&&w<=7000)
    printf("time estimated:45 min");
    else
    printf("INVALID INPUT");
}
