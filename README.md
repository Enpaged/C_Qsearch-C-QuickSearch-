# C Qsearch (Quick Search)

A simple header file to search a phrase (string) in an array of strings.

Supports optional colored highlighting of the phrase if it was found in a string.

New features might be added in the future, but this is mainly a training project.

Example Usage:
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "qsearch.h"

int main() {

	char output[100][2048] = {};
	char search[32] = "";
	char loop;
	int count = 0;

	do {
		char list[5][2048] = { "Fire", "House", "Computer", "Truck", "Datacenter"};
		system("cls");
		char dummy = getchar();
		printf("Enter Search: ");
		gets_s(search, 32);

		int back = qsearch_str(list, 100, search, 1, 36);

		printf("\nFound: %d", back);

		printf("\n\nAgain? (y/n)");
	} while (getchar() == 'y');
}
```
Searching for the letter/phrase "o" would give the output:
```
Enter Search: o
House
Computer
```
while the 'o' in House and Computer would be highlighted light blue
