#include <stdio.h> 

int main(void){
    int user_input; 

    printf("2 + 2 = ? \n"); 
    scanf("%d", &user_input); 

    if(user_input == 4)
    {
        printf("5 * 7 = ? \n"); 
        scanf("%d", &user_input); 
        if (user_input == 35)
        {
            printf("You are WINNER \n"); 
        }else{
            printf("You are LOOSER \n"); 
        }
    }else{
        printf("You are LOOSER \n"); 
    }    
}