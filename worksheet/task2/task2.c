/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Amritpal Singh
 * ID: 201965262
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> //lib for isalpha and isdigit
#include <stdbool.h> //lib for boolean
#include <math.h> //lib for math function pow

int main(void){
	long decimal=0;
	char hex[9];
	char hex_letters[] = {'a','b','c','d','e','f','A','B','C','D','E','F'};
	

	printf("Enter a hexadecimal:");
	scanf("%s", hex); //take userinput and save to hex
	for (int k=0; k<strlen(hex);k++){
		if (isdigit(hex[k])) { //check if a char is from 0-9
			printf("%c", hex[k]);
		}
		else if (isalpha(hex[k])){ //check if a char is a-F
			for (int j=0; j<12; j++){ //loop through hex_letters array
				bool result = false; //var to store true or false 
				if (hex[k] == hex_letters[j]){
					result = true; //result is true if the current char is in hex_letters
					if (result == true){
						printf("%c", hex[k]);
						break;
					}
				}
				else if (j==11 && result==false) { 
						printf("Error: Invalid Hexadecimal\n"); //if char not in hex_letters, exit program
						return 0; 
				}
			}
		} 
		else {
			printf("Error: Invalid Hexadecimal\n"); //char is not letter or number
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
	printf("length of hex: %ld \n", strlen(hex));

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	for (int i=strlen(hex)-1; i=0; i--){
		printf("%d", i);
		//convert letters to numbers 
		switch (hex[i]) {
			case ('a'):
				decimal = decimal + (10 * pow(16,i)); //10 * 16^i
				break;
			case ('A'):
				decimal = decimal + (10 * pow(16,i)); //10 * 16^i
				break;
			case ('b'):
				decimal = decimal + (11 * pow(16,i)); //11 * 16^i
				break;
			case ('B'):
				decimal = decimal + (11 * pow(16,i)); //11 * 16^i
				break;
			case ('c'):
				decimal = decimal + (12 * pow(16,i)); //12 * 16^i
				break;
			case ('C'):
				decimal = decimal + (12 * pow(16,i)); //12 * 16^i
				break;
			case ('d'):
				decimal = decimal + (13 * pow(16,i)); //13 * 16^i
				break;
			case ('D'):
				decimal = decimal + (13 * pow(16,i)); //13 * 16^i
				break;
			case ('e'):
				decimal = decimal + (14 * pow(16,i)); //14 * 16^i
				break;
			case ('E'):
				decimal = decimal + (14 * pow(16,i)); //14 * 16^i
				break;
			case ('f'):
				decimal = decimal + (15 * pow(16,i)); //15 * 16^i
				break;
			case ('F'):
				decimal = decimal + (15 * pow(16,i)); //15 * 16^i
				break;
		}
		decimal = decimal + (hex[i] * pow(16,i)); 
	} 
		

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}