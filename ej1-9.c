#include <stdio.h>


main(){
	int c, espacio;
	
	while(c == getchar() != EOF){
		if (c == ' '){
			if(espacio == 0){
				espacio = 1;
				putchar(c);
			}
		}
		if(c != ' '){
			espacio = 0;
			putchar(c);
		} 
	}


}
