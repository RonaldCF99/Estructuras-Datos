#include <stdio.h>

void escape(char s[], char t[]){
	char c;
	int i = 0;
	int j = 0;
	
	while((c=s[i]) != '\0'){
		switch(c){
			case '\n':
				t[j] = '\\';
				j++;
				t[j] = 'n';
				break;
			case '\t':
				t[j] = '\\';
				j++;
				t[j] = 't';
				break;
			case ' ':
				t[j] = ' ';
				j++;
				t[j] = '_';
				break;
			default:
				t[j] = s[i];
		}i++;
		j++;
		
	}t[j] = '\0';
	
	
}
int main()
{
	void escape(char s[], char t[])
	char s[] = "fhjvlñaerjv		fjqj sclk";
	char t[100];
	escape(s, t);
	printf("%s\n", t);
}


