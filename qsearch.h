#pragma once

#define MAX_LEN 2048			//Max length the to searching strings are allowed to have
#define MAX_OUTC 2048			//Max count of strings for outputs

int qsearch_str(char list[][2048], int anz, char search[], int colored, int color);