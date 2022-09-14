#include <iostream>
#include "Task1_2.h"


int main() {
	int numb = 245;
	const int size = 11;
	char str[size];
	Int2BitStr(numb, str, size);
	printf("numb %d represented in binary form %s\n", numb, str);
	printf("check 5th bit in current numb %d. Result is %d\n", numb, CHK_BIT(numb, 5));
	printf("clear (set to 0) 3th bit in current numb %d. Result is %d\n", numb, CLR_BIT(numb, 3));
	printf("check 3th bit in current numb %d. Result is %d\n", numb, CHK_BIT(numb, 3));
	printf("flip/toggle proper 7th bit in current numb %d. Result is %d\n", numb, TGL_BIT(numb, 7));
	printf("set (set to 1) 2th bit in current numb %d. Result is %d\n", numb, SET_BIT(numb, 2));
}