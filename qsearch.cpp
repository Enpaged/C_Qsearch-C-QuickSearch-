#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qsearch.h"

#include <conio.h>

/*
TO-DO List
-----------------------------------------------------------------------------------------------
> Option to conver keyword and to searching word to lowercase/uppercase for more results
> Results should be copied to a external array
> Maybe Option that inserts ANSI Escape codes into the results so that they get highlited on output
*/

void strcut_def(int start, int end, char text[MAX_LEN], char out[MAX_LEN]);

int qsearch_str(char list[][2048], int anz, char search[], int colored, int color) {

	int searchLen = strlen(search);					//Length of the search keyword
	int wordLen = 0;								//Length of the word at list[x]
	char temp[MAX_LEN + 1] = "";					//temporary buffer for strcmp
	int foundCount = 0;								//Count of found words in the given array

	char temp_1[MAX_LEN] = "";
	char temp_2[MAX_LEN] = "";
	char temp_3[MAX_LEN] = "";
	char CT[MAX_LEN + 128] = "";

	for (int index = 0; index < anz; index++) {		//Go through list[] string by string
		wordLen = strlen(list[index]);

		if (searchLen > wordLen)					//Eliminates errors (searchLen too long, accesses wrong memory)
			continue;

		for (int i = 0; i < wordLen; i++) {			//Go through string char by char

			for (int x = 0; x < searchLen; x++) {	//Copy string (length of searchLen) into temp[] with offset i = x
				temp[x] = list[index][x + i];		//Copy to temp using offset of i
				temp[searchLen] = '\0';				//Complete string (\0 not automatically added because it was copied manually)
				if (strcmp(temp, search) == 0) {	//Check if the keyword and buffer are matching

					if (colored) {
						strcut_def(0, i - 1, list[index], temp_1);
						strcut_def(i, i + searchLen - 1, list[index], temp_2);
						strcut_def(i + searchLen, wordLen - 1, list[index], temp_3);

						snprintf(CT, MAX_LEN + 128, "%s%s%dm%s%s%s", temp_1, "\033[", color, temp_2, "\033[0m", temp_3);
					}

					if (colored)
						printf("%s\n", CT);
					else
						printf("%s\n", list[index]);
					foundCount++;
					break;							//Go to next word
				}
			}
		}
	}
	return foundCount;								// Return count of found/matching words
}




void strcut_def(int start, int end, char text[MAX_LEN], char out[MAX_LEN]) {
	char result[100];

	int j = 0;
	for (int i = start; i <= end && text[i] != '\0'; i++) {
		out[j] = text[i];
		j++;
	}

	out[j] = '\0';
}