/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Amritpal Singh
 * ID: 201965262
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%s", hex); //take userinput and save to hex
	for (int k=0; k<strlen(hex);k++){
		if ((isalpha(hex[k])) || (isdigit(hex[k]))) {
			printf("%c", hex[k]);
		}
		else {
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}
	}

/* now do conversion
1A3 = 419
3 + (A*16^1) + (1 * 16 ^ 2)
3 + (160) + (256)	
*/
	printf("\n"); //new line
	hex[strlen(hex)] = '\0';
	printf("length of hex: %d \n", strlen(hex));

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}