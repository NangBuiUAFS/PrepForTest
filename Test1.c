#include "mylib.h"

int Strlen(char *str){
    int count = 0;
    for(char* p = str; *p != '\0'; p++)
        count++;
    return count;
}


int main(){
    char buffer[SIZE];
    char *line = buffer;
    char *filename = "Test1.txt";
    printf("%s\n",greeting);
    FILE *file = fopen(filename, "r");
    while((fgets(buffer, sizeof(buffer), file)) != NULL){
        buffer[strcspn(buffer, "\n")] = '\0';
        int len = Strlen(line);
        printf("Length of %s: %d\n", line,len);
        char *copyOfLine = malloc(strlen(line)+1);
        strcpy(copyOfLine, line);
        printf("Copy of %s: %s\n--------------------\n", line, copyOfLine);
        free(copyOfLine);
    }

    int stack[5] = {2,4,6,8,10};
    size_t n = sizeof(stack) /sizeof(stack[0]);
    int* heap = malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++)
        heap[i] = i*2+1;
    
    printf("STACK: ");
    for(int i = 0; i < n; i++){
        printf("%d\t",stack[i]);
    }

    printf("\nHEAP: ");
    for(int i = 0; i < n; i++)
        printf("%d\t", *(heap + i));
    
    free(heap);
    fclose(file);
    return 0;
}