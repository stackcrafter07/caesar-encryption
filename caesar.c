#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotate(char c, int key);

int main(int argc, string argv[])
{ // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++) // Make sure every character in argv[1] is a digit

    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Convert argv[1] from a `string` to an `int`

    int key = atoi(argv[1]);

    // Prompt user for plaintext

    string text;
    text = get_string("plain text: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c", rotate(text[i], key));
    }
    printf("\n");
}

char rotate(char c, int key)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            return c = (c - 'A' + key) % 26 + 'A';
        }
        if (islower(c))
        {
            return c = (c - 'a' + key) % 26 + 'a';
        }
        else
            return c;
    }
    return c;
}
