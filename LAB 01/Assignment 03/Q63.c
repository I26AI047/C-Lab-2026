    #include <stdio.h>

    int interchange();

    int interchange(int x,int y){
        int temp;

        temp=x;
        x=y;
        y=temp;

        printf("After interchanging values x=%d and y=%d",x,y);
    }
    
    int main(){
        int x,y;

        printf("Enter the values of x and y:");
        scanf("%d %d",&x,&y);
        interchange(x,y);
    
    return 0;
    }