#include<stdio.h>
#include<string.h>

int main()
{
        int stack[10000];
        char data[10];
        int top = 0;
        int i, n;

        scanf("%d", &n);
    
        for(i=1; i<=n; i++)
        {   
                scanf("%s", data);
                if(strcmp(data, "push") == 0)
                {   
                        scanf("%d", &stack[top]);
                        top++;
                }   
                else if(strcmp(data, "pop") == 0)
                {   
                        if(top == 0) printf("-1\n");
                        else 
                        {   
                                printf("%d\n", stack[top-1]);
                                top--;
                        }   
                }   
                else if(strcmp(data, "size") == 0) printf("%d\n", top);
                else if(strcmp(data, "empty") == 0)
                {   
                        if( top == 0 ) printf("1\n");
                        else printf("0\n");
                }
                else if(strcmp(data, "top") == 0)
                {
                        if(top == 0) printf("-1\n");
                        else printf("%d\n", stack[top-1]);
                }
        }
        return 0;
}