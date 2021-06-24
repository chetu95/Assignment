#include <stdio.h>
#include <string.h>

int my_strlen(const char* s) {
    int i, count=0;
    for(i=0; s[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void my_strcpy(const char* src, char* des) {
    int i;
    for(i=0; src[i]!= '\0'; i++) {
        des[i] = src[i];
    }
    des[i] = '\0';
}

int my_strcmp(const char* s1, const char* s2) {
    int i;
    for(i=0; s1[i]!='\0' && s2[i] != '\0'; i++) {
        if(s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    if(s1[i] != '\0' || s2[i] != '\0') {
        return s1[i] - s2[i];
    }
    return 0;
}

int main()
{
    int choice, cmp;
    char str1[100], str2[100];
    printf("1. Find the length of the string\n");
    printf("2. Copy one string to another\n");
    printf("3. Compare two strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if(choice == 1) {
        printf("\nEnter the string: ");
        scanf("%s", str1);
        printf("The length of the string is: %d", my_strlen(str1));
        
    } else if(choice == 2) {
        printf("\nEnter the string to be copied: ");
        scanf("%s", str1);
        my_strcpy(str1, str2);
        printf("The copied string is: %s", str2);
        
    } else if(choice == 3) {
        printf("\nEnter 1st string: ");
        scanf("%s", str1);
        
        printf("Enter 2nd string: ");
        scanf("%s", str2);
        
        cmp = my_strcmp(str1, str2);
        
        if(cmp > 0) {
            printf("String 1 is greater");
        } else if(cmp < 0) {
            printf("String 2 is greater");
        } else {
            printf("Both strings are same");    
        }
        
    } else {
        printf("\nInvalid option. Try again");
    }
    return 0;
}


/* Output

1. Find the length of the string
2. Copy one string to another
3. Compare two strings
Enter your choice: 1

Enter the string: hello
The length of the string is: 5



1. Find the length of the string
2. Copy one string to another
3. Compare two strings
Enter your choice: 2

Enter the string to be copied: welcome
The copied string is: welcome



1. Find the length of the string
2. Copy one string to another
3. Compare two strings
Enter your choice: 3

Enter 1st string: hello
Enter 2nd string: hello
Both strings are same

*/
