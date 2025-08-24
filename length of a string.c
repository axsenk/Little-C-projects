#include <stdio.h>
#include <string.h>

int main() {
    // Read the number of words
    int n;
    scanf("%d", &n);
    
    // Variables to track totals
    int total_characters = 0;
    int max_length = 0;
    
    // TODO: Write your code here
    for (int i=0;i<n;i++){
    // Process each word using a loop
    // For each word:
    // - Declare a character array with 50 elements
    char arr[50];
    // - Read the word using scanf
    scanf("%s",arr);
    // - Calculate length using strlen()
    int length=strlen(arr);
    // - Print the word and its length
    printf("Word: %s - Length: %d\n",arr,length);
    // - Update total_characters and max_length
    total_characters += length;
    if (length>=max_length){
        max_length = length;
    }
    }
    // Print final results
    printf("Total characters: %d\n", total_characters);
    printf("Longest word length: %d\n", max_length);
    
    return 0;
}
