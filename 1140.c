#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	char str[1050], diff[2], out[2];
	int c;

	fgets(str, 1050, stdin);

	do {
		for (c=0; c < strlen(str); c++)
			str[c] = tolower(str[c]);

		diff[0] = str[0];

		out[0] = 'Y';

		for (c=0; c < strlen(str); c++) {
			if (str[c] == ' ') {
				if(diff[0] != str[c+1]) {
					out[0] = 'N';
				} else {
					if (out[0] != 'N')
						out[0] = 'Y';
				}
			}
		}

	printf("%c\n", out[0]);

	fgets(str, 1050, stdin);
	} while (str[0] != '*' || str[0] == ' ' || str[c] == '	' || str[c] == '  ');

	return 0;
}