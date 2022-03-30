#include<stdio.h>

int verify(int credentials [3][2], int ID, int PIN)
{
    int account = 0;
    for(int i = 0; i<3; i++){
        if(ID == credentials[i][0] && PIN == credentials[i][1]){
        account= 1;
        }
    }
    return account;
}

int main ()
{
    int credentials[3][2] = {{1234,4321}, {5678,8765}, {9012,2109}};
    int ID, PIN;
    
    printf("Enter your ID Number: ");
    scanf("%d", &ID);
    printf("Enter your PIN: ");
    scanf("%d", &PIN);
    
    if(verify(credentials,ID,PIN))
    {
        printf("\nYou have successfully logged in\n”,ID);
    } else {
        printf("\nInvalid ID/PIN!");
    }
    return 0;
}