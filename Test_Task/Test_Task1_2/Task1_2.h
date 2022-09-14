#pragma once


#define SET_BIT(x, p) (((x) = (x | (1 << p - 1))))

#define CLR_BIT(x, p) (((x) = (x & (~(1 << p - 1)))))

#define TGL_BIT(x, p) (((x) = (x ^ (1 << p - 1))))

#define CHK_BIT(x, p) (((1 << (p - 1)) & x)?(true):(false))


void Int2BitStr(int x, char* str, int size) {
	str[0] = '0';
	str[1] = 'b';
	str[size - 1] = '\0';
	int i = 1;
	while (x) {
		str[size-i-1] = (char)((x % 2)+'0');
		++i;
		x /= 2;
	}
}