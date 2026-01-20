#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char choice='a';
    bool initialized = false;
    char str1[100], str2[100], result[200];
    while(choice !='q'){
        printf("Menu:\n");
        printf("1. Input strings\n");
        printf("2. Concatenate two strings\n");
        printf("3. Copy one string into another\n");
        printf("q. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c",&choice);
        switch(choice){
            case '1':
                printf("Input 1st string: ");
                scanf("%s",str1);
                printf("Input 2nd string: ");
                scanf("%s",str2);
                initialized = true;2
                break;
            case '2':
                if(!initialized){
                    printf("Strings not initialized. Please input strings first.\n");
                    break;
                }
                result[0] = '\0'; // Initialize result as empty string
                strcat(result, str1);
                strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;
            case '3':
                if(!initialized){
                    printf("Strings not initialized. Please input strings first.\n");
                    break;
                }
                printf("Before copying, 1st string: %s, 2nd string: %s\n", str1, str2);
                strcpy(result, str1);
                strcpy(str1, str2);
                strcpy(str2, result);
                printf("After copying, 1st string: %s, 2nd string: %s\n", str1, str2);
                break;
            case 'q':
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;

}