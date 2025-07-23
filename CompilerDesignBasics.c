#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// List of keywords
const char* keywords[] = {
    "int", "float", "if", "else", "while", "do", "return", "break", "continue", "char", "double", "for", "void"
};
const int keywordCount = sizeof(keywords) / sizeof(keywords[0]);

// Function to check if a word is a keyword
int isKeyword(const char* word) {
    for (int i = 0; i < keywordCount; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    char operators[] = "+-*/%=<>&|!^";
    for (int i = 0; operators[i] != '\0'; i++) {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}

// Function to perform lexical analysis
void lexicalAnalysis(const char* filename) {
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    char ch;
    char buffer[100];
    int index = 0;

    printf("Lexical Analysis Output:\n\n");

    while ((ch = fgetc(fp)) != EOF) {
        // If character is a letter or digit, add to buffer
        if (isalnum(ch) || ch == '_') {
            buffer[index++] = ch;
        }
        // On encountering non-word character
        else {
            buffer[index] = '\0';
            if (index != 0) {
                if (isKeyword(buffer))
                    printf("Keyword\t\t: %s\n", buffer);
                else
                    printf("Identifier\t: %s\n", buffer);
                index = 0;
            }

            // If it's an operator
            if (isOperator(ch)) {
                printf("Operator\t: %c\n", ch);
            }
        }
    }

    fclose(fp);
}

int main() {
    char filename[100];

    printf("Enter the name of the input file (e.g., input.c): ");
    scanf("%s", filename);

    lexicalAnalysis(filename);

    return 0;
}
