
#include <stdio.h>

main(){
	
 char c;
	
	while(c = getchar() != EOF){
		if (c == '\t'){
			putchar('\\');
			putchar('t');
		}
		if (c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		if (c == '\b'){
			putchar('\\');
			putchar('b');
		}
		
		
	}
	
}
