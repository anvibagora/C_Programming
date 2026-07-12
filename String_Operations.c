#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100], temp[100];
    int ch;

    while (1) {
        printf("\n\nMenu\n1.Find length\n2.Copy\n3.Concatinate\n4.Compare\n5.Reverse\n6.Palindrome\n7.Substring\n8.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: 
                printf("Enter String: ");
                scanf("%s", str1);
                printf("Length of string is %zu characters.\n", strlen(str1));
                break;
            case 2: 
                printf("Enter String: ");
                scanf("%s", str1);
                strcpy(str2, str1); // Correct way to copy
                printf("Copied string in str2: %s\n", str2);
                break;
            case 3: 
                printf("Enter 1st String: ");
                scanf("%s", str1);
                printf("Enter 2nd String: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("After concatenation: %s\n", str1);
                break;
            case 4: 
                printf("Enter 1st String: ");
                scanf("%s", str1);
                printf("Enter 2nd String: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0) printf("Strings are equal.\n");
                else printf("Strings are not equal.\n");
                break;
            case 5: 
                printf("Enter String: ");
                scanf("%s", str1);
                // Manual reverse since strrev is non-standard
                int len = strlen(str1);
                for (int i = 0; i < len / 2; i++) {
                    char t = str1[i];
                    str1[i] = str1[len - 1 - i];
                    str1[len - 1 - i] = t;
                }
                printf("Reversed string is: %s\n", str1);
                break;
            case 6: 
                printf("Enter String: ");
                scanf("%s", str1);
                strcpy(temp, str1);
                // Reverse str1 to compare with temp
                int l = strlen(str1);
                for (int i = 0; i < l / 2; i++) {
                    char t = str1[i];
                    str1[i] = str1[l - 1 - i];
                    str1[l - 1 - i] = t;
                }
                if (strcmp(temp, str1) == 0) printf("Palindrome\n");
                else printf("Not a Palindrome\n");
                break;
            case 7: 
                printf("Enter 1st String: ");
                scanf("%s", str1);
                printf("Enter 2nd String: ");
                scanf("%s", str2);
                if (strstr(str1, str2) != NULL) printf("Substring exists\n");
                else printf("Substring does not exist\n");
                break;
            case 8: 
                printf("THANK YOU!\n");
                exit(0);
            default: 
                printf("ERROR! Operation not available\n");
        }
    }
    return 0;
}