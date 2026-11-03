#iinclude<stdio.h>
int main()
{
    nt connection;
    int home;
    int shop;
    printf("the bill of home");
    scanf("%d",& home);
    printf("total bill of shop");
    scanf("%d",& shop);
    printf("enter the connection\n");
    scanf("%d",& connection);
    if(connection==1)
    {
        connection=100*5;
        printf("home",connection);
    }
    else if(connection==1)
    {
        connection=home%5*100;
        printf("shop");
    }
    return 0;
}