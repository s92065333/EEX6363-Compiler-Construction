#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h" 

SymbolEntry symbolTable[MAX_SYMBOLS];
int nextSymbolIndex = 0;

// FIX: Changed TokenType to int
SymbolEntry* install(const char *lexeme, int type) {
    // First, check if the symbol already exists
    SymbolEntry *entry = lookup(lexeme);
    if (entry != NULL) {
        return entry; 
    }

    // If not, add new symbol
    if (nextSymbolIndex >= MAX_SYMBOLS) {
        fprintf(stderr, "Symbol table overflow!\n");
        exit(1);
    }

    SymbolEntry *newEntry = &symbolTable[nextSymbolIndex];
    newEntry->lexeme = strdup(lexeme); 
    newEntry->type = type;
    nextSymbolIndex++;
    return newEntry;
}

// Function to look up a symbol in the symbol table
SymbolEntry* lookup(const char *lexeme) {
    for (int i = 0; i < nextSymbolIndex; i++) {
        if (strcmp(symbolTable[i].lexeme, lexeme) == 0) {
            return &symbolTable[i]; 
        }
    }
    return NULL; 
}

// Function to print the contents of the symbol table
void print_symbol_table(void) {
    printf("\n--- Symbol Table Contents ---\n");
    printf("%-20s %s\n", "Lexeme", "Type (Bison ID)");
    printf("----------------------------------\n");
    for (int i = 0; i < nextSymbolIndex; i++) {
        printf("%-20s %d\n", symbolTable[i].lexeme, symbolTable[i].type);
    }
    printf("----------------------------------\n");
}