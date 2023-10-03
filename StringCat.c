//DATE: 2023.09.10
//PURPOSE: Concatenates two constant strings and returns the value

#include <stdio.h>

void catString(char result[], char str1[], char str2[]);

int main(void) {
	char myString1[] = "This gets added to ";
	char myString2[] = "this one.";
	char result[100] = "";

	catString(result, myString1, myString2);
	return 0;
}

void catString(char result[], char str1[], char str2[]) {
	int i = 0;

	//First string gets copied to result
	while (str1[i] != '\0') {
		result[i] = str1[i];
		i++;
	}

	int j = 0;

	//Second string gets copied to result
	while (str2[j] != '\0') {
		result[i] = str2[j];
		j++;
		i++;
	}

	result[i] = '\0'; //Add null terminator 
	
	printf("The catted version is: %s", result);
	return;
}