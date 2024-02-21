#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main()
{
    system("chcp 65001 & cls");

    int MaxSentence = 100;
    char sentence[MaxSentence];
    char *word = "девелопер";
    char choice;

    do {
        printf("Введіть речення  (для закінчення введіть: \".\"): ");
        fflush(stdin);
        fgets(sentence, MaxSentence, stdin);
        sentence[strcspn(sentence, ".")] = '\0';

        for (int i = 0; sentence[i]; i++) {
            sentence[i] = tolower(sentence[i]);
        }
        char *beginning_word =(strstr(sentence, word));
        int position=beginning_word  - sentence;//индекс початку слова
        if (strstr(sentence, word) != NULL) {
            if ((position - 1 < 0 || sentence[position - 1] == ' ') &&//провірка чи слово стоїть окремо
    (sentence[position + strlen(word)] == ' ' || sentence[position + strlen(word)] == '\0')) {
                printf("Слово 'девелопер' знайдено.\n");
            } else {
                printf("Слово 'девелопер' не є окремим словом.\n");
            }
        } else {
            printf("Слово 'девелопер' не знайдено.\n");
        }

        printf("Бажаєте ввести ще речення? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
