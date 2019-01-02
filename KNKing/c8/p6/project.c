#include <stdio.h>
#include <ctype.h>

#define STR ((int)(sizeof(string)/sizeof(string[0])))

int main(void)
{
	int string[70]={'\n'};

	printf("Enter message: ");
	for (int i=0; i<STR;  i++) {
		string[i]=toupper(getchar());
		if (string[i]=='\n') break;
	}
	printf("in B1FF-speak: ");
	for (int i=0; i<STR;  i++) {
		switch (string[i]) {
		case 'A':
			string[i]='4';
			break;;
		case 'B':
			string[i]='8';
			break;;
		case 'E':
			string[i]='3';
			break;;
		case 'I':
			string[i]='1';
			break;;
		case 'O':
			string[i]='0';
			break;;
		case 'S':
			string[i]='5';
			break;;
		}
		if (string[i]=='\n') {
			printf("!!!!!!!!!\n");
			break;
		}
		putchar(string[i]);
	}

	return 0;
}
