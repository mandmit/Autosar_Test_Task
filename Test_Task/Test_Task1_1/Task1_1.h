#pragma once


#define MIN(a,b) (((a)<(b))?(a):(b))

#define MAX(a,b) (((a)>(b))?(a):(b))

int min(int a, int b) {
	return (a < b) ? (a) : (b);
}

int max(int a, int b) {
	return (a > b) ? (a) : (b);
}