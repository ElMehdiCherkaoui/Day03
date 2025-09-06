struct triangle
{
    int length;
    int width;
    int area;
};
#include <stdio.h>
int main()
{
    struct triangle config;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&config.length);
    printf("Enter the width of the rectangle : ");
    scanf("%d",&config.width);
    
    config.area = config.length * config.width;
    printf("The area of the rectangle is : %d",config.area);
}
