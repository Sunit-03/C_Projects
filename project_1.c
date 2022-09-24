#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,guess,numguess=1;
    srand(time(0));
    num=rand()%100;
    do
    {
        printf("enter your guessed number");
        scanf("%d",&guess);
        if (guess>num)
        {
            printf("enter lower number\n");
        }
        else if (guess<num)
        {
            printf("enter higher number\n");
        }
        else{
            printf("congratulations you got the correct answer in %d attempts", numguess);
        }
        numguess++;
        
    } while (guess!=num);
    
    return 0;
}