#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    clock_t start,end;
    double totaltime;

    printf("Enter the two nums:\n");
    int a,b,t;
    scanf("%d%d",&a,&b);
    if(a<b){t=a;}
    else{t=b;}

    start = clock();
    
    while (1)
    {
        if(a%t==0){
            if(b%t==0){
                printf("GCD=%d\n",t);
                break;
            }
        }
        t--;
    }

    end = clock();
    totaltime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time taken:%e",totaltime);
    return 0;
    
}
