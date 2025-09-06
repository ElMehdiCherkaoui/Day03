struct point
{
    int x;
    int y;
};
#include <stdio.h>
int main()
{
    struct point config;
    printf("Enter the x coordinate : ");
    scanf("%d",&config.x);
    printf("Enter the y coordinate : ");
    scanf("%d",&config.y);
    
    struct point *ptr = &config;
    printf("The point coordinates are: x = %d y= %d",ptr -> x,ptr -> y);
}