#include<stdio.h>
#include<string.h>
#include<stdlib.h>

static int p=0;
void vline(char ch)
    {
        for(int i=80;i>0;i--)
        printf("ch");
    }
class a
    {
        
        
        char busn[5],driver[20],arrival[10],depature[10],from[20],to[20],seat[9][5][10];


    public:
    void install();
    void allotment();
    void empty();
    void show();
    void avail();
    void position(int i);
    };
a bus[20];
void a::install()
{
    printf("enter bus no :");
    scanf("%s",bus[p].busn);
    printf("\nenter the driver's name:");
    scanf("%s",bus[p].driver);
    printf("\narrival time");
    scanf("%s",bus[p].arrival);
    printf("\ndeparture time");
    scanf("%s",bus[p].depature);
    printf("\nfrom:\t\t\t");
    scanf("%s",bus[p].from);
    printf("\nto:\t\t\t");
    scanf("%s",bus[p].to);
    bus[p].empty();
    p++;
}
void a::allotment()
{
    int seat;
    char number[5];
    top:
    printf("bus no:");
    scanf("%s",number);
    int n;
    for(n=0;n<=p;n++)
    {
        if(strcmp(bus[n].busn,number)==0);
        break;
    }
    while(n<=p)
    {
        printf("\nseat number:");
        scanf("%s",seat);
        if(seat>45)
        {
            printf("only 45 seats are available");
        }
        else
        {
            if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"available")==0)
            {
                printf("enter passenger's name:");
                bus[n].seat[seat/4][(seat%4)-1];
                break;
            }
            else
            
                printf("already booked!");
        }
    }
    if(n>p)
    {
            printf("enter the correct bus no.\n");
            goto top;
    }
}
void a::empty()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<5;j++)
        {
            strcpy(bus[p].seat[i][j],"available");
        }
    }
}
void a::show()
{
    int n;
    char number[5];
    printf("enter bus no:");
    scanf("%s",number);
    for(n=0;n<=p;n++)
    {
        if(strcmp(bus[n].busn,number)==0)
        break;
    }
    while(n<=p)
    {
        vline('*');
        printf("\nbus no:\t");
        scanf("%s",bus[n].busn);
        printf("\ndriver:\t");
        scanf("%s",bus[n].driver);
        printf("\tarrival time:");
        scanf("%s",bus[n].arrival);
        printf("\tdepature time:");
        scanf("%s",bus[n].depature);
        printf("\nfrom:\t\t");
        scanf("%s",bus[n].from);
        printf("\nto:\t\t");
        scanf("%s",bus[n].to);
        vline('*');
        bus[n].position(n);
        int a=1;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(strcmp(bus[n].seat[i][j],"available")!=0)
                printf("\nthe seat no",a-1,"is reserved for",bus[n].seat[i][j],".");
            }
        }
    break;
    }
    if(n>p)
    printf("enter correct bus:");
}
void a::position(int I)
 {
     int s=0,p=0;
     for(int i=0;i<9;i++)
     {
         printf("\n");
         for(int j=0;j<5;j++)
         {
             s++;
             if(strcmp(bus[I].seat[i][j],"available")==0)
             {
                 printf(".width(5)");
                 printf(".fill(' ')");
                 printf("s");
                 printf(".width(10)");
                 printf(".fill(' ')");
                 printf("bus[I].seat[i][j]");
                 p++;
            }
            else
            {
                 printf(".width(5)");
                 printf(".fill(' ')");
                 printf("s");
                 printf(".width(10)");
                 printf(".fill(' ')");
                 printf("bus[I].seat[i][j]");
            }
            
         }
     }
     printf("there are" , p , "seats available in bus no:",bus[I].busn);
}
void a::avail()
{
     for(int n=0;n<p;n++)
     {
        
         printf("\nbus no:\t");
         scanf("%s",bus[n].busn);
         printf("\ndriver:\t");
         scanf("%s",bus[n].driver);
         printf("\tarrival time:");
         scanf("%s",bus[n].arrival);
         printf("\tdepature time:");
         scanf("%s",bus[n].depature);
         printf("\nfrom:\t\t");
         scanf("%s",bus[n].from);
         printf("\nto:\t\t");
         scanf("%s",bus[n].to);
         
     }
 }
int main()
{
    
    int w;
    
        
        printf("\n\n");
        printf("\t\t***CRANKY BUS RESERVATION SITE***");
        printf("\n\n");
        printf("\t\t1.install\n\t\t"
        "2.reservation\n\t\t"
        "3.show\n\t\t"
        "4.available buses\n\t\t"
        "5.exit");
        printf("\n\t\t\tenter your option:");
        scanf("%d",&w);
        switch(w)
        {
            case 1: 
                bus[0].install();
                break;
            case 2: 
                bus[0].allotment();
                break;
            case 3:
                 bus[0].show();
                break;
            case 4: 
                bus[0].avail();
                break;
            case 5:
                 exit(0);
        }
    return 0;
}

