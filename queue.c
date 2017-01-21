#include<stdio.h>
#include<string.h>

int main()
{
        int queue[10000];
        char data[10];
        int top = 0;
        int bot = 0;
        int size = 0;
        int i, n;

        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {   
                scanf("%s", data);
                if(strcmp(data, "push") == 0)
                {   
                        scanf("%d", &queue[top]);
                        top++;
                        size++;
                }   
                else if(strcmp(data, "pop") == 0)
                {   
                        if(size == 0) printf("-1\n");
                        else
                        {   
                                printf("%d\n", queue[bot]);
                                bot++;
                                size--;
                        }   
                }   
                else if(strcmp(data, "size") == 0) printf("%d\n", size);
                else if(strcmp(data, "empty") == 0 ) 
                {
                        if(size == 0 ) printf("1\n");
                        else printf("0\n");
                }
                else if(strcmp(data, "front") == 0)
                {
                        if(size == 0) printf("-1\n");
                        else printf("%d\n", queue[bot]);
                }
                else if(strcmp(data, "back") == 0)
                {
                        if(size == 0) printf("-1\n");
                        else printf("%d\n", queue[top-1]);
                }
        }
        return 0;
}