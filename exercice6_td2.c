#include <stdio.h>
#include <string.h>

int main() {
    int nbr_letter = 0;
    int nbr_tabulation = 0;
    int nbr_autre = 0;
    char text[255];

    printf("Enter a string of characters: ");
    scanf("%s", text);

    for (int i = 0; i < strlen(text); i++) {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
            nbr_letter++;
        } else if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t') {
            nbr_tabulation++;
        } else {
            nbr_autre++;
        }
    }

    printf("Le nombre des lettres est %d et les caractères de tabulation sont %d et %d autres caractères.\n", nbr_letter, nbr_tabulation, nbr_autre);
    return 0;
}
