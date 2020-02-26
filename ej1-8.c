
#include <stdio.h>
main()
{
	int c;
	int enter = 0;
	int tab = 0;
	int espacio = 0;
	
	while (c == getchar() != EOF){
			if(c == ' '){
					++espacio;
			}
			if(c == '\n'){
					++enter;
			}
			if(c == '\t'){
					++tab;
			}
			printf("Espacios: %d\n", espacio);
			printf("Tabs: %d\n", tab);
			printf("Enter: %d\n\n", enter);
			
		
		
		
	}
}
