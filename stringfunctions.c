#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    
    printf("Original strings:\nstr1 = '%s', str2 = '%s'\n\n", str1, str2);

    // 1. strcpy - copy string
    strcpy(str3, str1);
    printf("After strcpy(str3, str1): str3 = '%s'\n", str3);

    // 2. strcat - concatenate strings
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After strcat(str1, str2): str1 = '%s'\n", str1);

    // 3. strlen - get length of string
    printf("Length of str1 = %zu\n", strlen(str1));

    // 4. strcmp - compare strings
    int cmp = strcmp(str2, "World");
    printf("strcmp(str2, \"World\") = %d\n", cmp);

    // 5. strchr - find first occurrence of character
    char *p = strchr(str1, 'o');
    if (p)
        printf("First 'o' in str1 at position: %ld\n", p - str1);
    
    // 6. strrchr - find last occurrence of character
    p = strrchr(str1, 'o');
    if (p)
        printf("Last 'o' in str1 at position: %ld\n", p - str1);

    // 7. strstr - find substring
    p = strstr(str1, "lo Wo");
    if (p)
        printf("Substring 'lo Wo' found at position: %ld\n", p - str1);

    // 8. strncpy - copy n characters
    char str4[20];
    strncpy(str4, str2, 3);
    str4[3] = '\0';  // null terminate
    printf("After strncpy(str4, str2, 3): str4 = '%s'\n", str4);

    // 9. strncat - concatenate n characters
    strncat(str4, "abcde", 2);  // append only 2 chars
    printf("After strncat(str4, \"abcde\", 2): str4 = '%s'\n", str4);

    // 10. strncmp - compare first n characters
    cmp = strncmp(str2, "WorldWide", 5);
    printf("strncmp(str2, \"WorldWide\", 5) = %d\n", cmp);

    return 0;
}
