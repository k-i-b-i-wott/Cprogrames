#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void password();
void menu();
void opp();
char food[4][50]={"Tea","Coffee","Toast","Bread"};
int prices[4]={20,30,30,40};
int foodstore[20];
int pricestore[20];
int main()
{
 password();
 return 0;
}
void password()
{
    char pass[20],password[20]="Admin123";
    int num=0;
    while(num<=2)
    {
        printf("Enter the password\n");
        scanf("%s",&pass);
        if(strcmp(pass,password)==0)
        {
            printf("Login successful\n");
            
            menu();
            break;
        }
        else
        {  
            num++;
            printf("Inva;lid password %d attempts remaining",num-1);
        }
    }
    if(num==3)
    {
        printf("You have exhausted the login attemps!! Try again later\n");
        exit(0);
    }
}
void menu()
{
    printf("Welcome to pour best restaurant ever\n");
    printf("Choose your Meal\n");
    printf("1.Tea------20/= \n 2. Coffee-----30/= \n 3.Toast-------30/= \n 4.Bread-------40/=\n");
    opp();
}
int choice; //123456
char option;
void opp()
{
    int y,x,ordercount;
    y=0;
    ordercount=1;
    do
    {
            printf("Enter your choice\n");
            scanf("%d",&choice);
            x=choice-1;
            switch(choice)
            {
                case 1:
                foodstore[y]=choice;
                pricestore[y]=prices[x];
                break;
                case 2:
                foodstore[y]=choice;
                pricestore[y]=prices[x];
                break;
                case 3:
                foodstore[y]=choice;
                pricestore[y]=prices[x];
                break;
                case 4:
                foodstore[y]=choice;
                pricestore[y]=prices[x];
                break;
                case 5:
                printf("Welcome Again!!");
                exit(0);
                break;

                default:
                printf("Welcome again\n");
                exit(0);
            }
            y++;
            printf("Do you want to chooes another meal?");
            scanf("%c",&option);
            switch(option)
            {
                case 'Y':
                ordercount+=1;
                break;
                case 'N':
                break;
            }
    }
    while(option=='Y');
    int j,totalamount;
    totalamount=0;
    printf("Pay now for:\n");
    for(j=0;j<ordercount;j++)
    {
        printf("%s---------%d\n",food[foodstore[j]-1],prices[foodstore[j]-1]);
        totalamount=totalamount+prices[foodstore[j]-1];
    }
    printf("***********************\n");
    printf("Total Amount------------%d\n",totalamount);
    int balance;
    int payment;
    printf("*****************************************\n");
    printf("Enter the amount to pay",payment);
    scanf("%d",&payment);
    if(payment>=totalamount)
    {

    }
    else
    {
        do{
            printf("Insufficient funds.Enter the maximum amount!!");
            scanf("%d",payment);
        }
        while(payment<totalamount);
    }
    printf("*******************\n");
    if(payment>=totalamount)
    {
        balance=payment-totalamount;
        printf("Balance---------%d",balance);
    }
    else{
        printf("Insufficient funds");
    }
    
}
