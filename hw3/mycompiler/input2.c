void main()
{
    int a=5,b=7;
    double c=7.5,d=11.1;
    int e,f;
    printf("input int number 0 or not0,if input is not 0 -> get ans1\n");
    scanf("%d",&e);
    if(!e)
    {
        printf("input int number 0 or not0,if input is not 0 -> get ans2.if input is 0 get ans 3\n");
        scanf("%d",&f);
        if(f)
        {
            printf("ans2= a+b*c/f= %d\n",a+b*c/f);
        }
        else
        {
            printf("ans3= a+b*c*e= %d\n",a+b*c*e);
        }

    }
    else
    {
        printf("ans1= a+b*c+e= %d\n",a+b*c+e);
    }

}