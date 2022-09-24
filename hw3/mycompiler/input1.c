int main()
{
    int a, b, c;
    
        printf("input 2 int numbers\n");
        scanf("%d %d", &a, &b);
        printf("input 1 int number\n");
        scanf("%d",&c);
         if (a >= 60 && b >= 60 && c >= 60)
        {
            printf("P1\n");
            
        }
        else if (a < 60 && a + b + c >= 220)
        {
            printf("P2\n");
            
        }
        else if (b < 60 && a + b + c >=220)
        {
            printf("P3\n");
            
        }
        else if (c < 60 && a + b + c >= 220)
        {
            printf("P4\n");
            
        }
        else if(a>=60&&b>=60&&a+b+c<220){
            printf("M1\n");
            
        }
        else if(a>=60&&c>=60&&a+b+c<220){
            printf("M2\n");

        }
        else if(c>=60&&b>=60&&a+b+c<220){
            printf("M3\n");

        }
        else if(a<=60&&b<=60&&c>=80){
            printf("M4\n");

        }
        else if(c<=60&&b<=60&&a>=80){
            printf("M5\n");

        }
        else if(a<=60&&c<=60&&b>=80){
            printf("M6\n");
        }
        else printf("F\n");
    
}