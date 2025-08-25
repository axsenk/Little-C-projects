#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char source[100];
    char destination[100];
    
    // TODO: Write your code here
    // Use a loop to process n string operations
    for (int i = 0; i<n;i++){

    
    // For each operation:
    // - Read the source string
    scanf("%s",source);
    // - Use strcpy() to copy source to destination
    strcpy(destination,source);
    // - Print both strings in the required format
    printf("Source: %s\nDestination: %s\n",source,destination);
    }
    // TODO: After the loop, modify the first character of the last destination
    destination[0] = 'X';
    // and print the modified string
    printf("Modified last destination: %s\n",destination);
    return 0;
}
