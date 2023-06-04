#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsPalindrome(char *word) {
    int length = strlen(word);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    char word[100];
    printf("Kelimeyi girin: ");
    fgets(word, sizeof(word), stdin);
    if (IsPalindrome(word)) {
        printf("Bu kelime bir palindromdur.\n");
    } else {
        printf("Bu kelime bir palindrom değildir.\n");
    }
    return 0;
}
