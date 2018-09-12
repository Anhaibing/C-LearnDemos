#ifndef DATASTRUCT_H_
#define DATASTRUCT_H_

#include <iostream>
#include <cstring>

using namespace std;

//使用typedef后，再定义结构体变量的时候就不用写struct
typedef struct {
	char title[50];
	char auther[64];
	char subject[96];
	int bookId;
} Books;

//direct use struct for arg;
void showBooks (Books book);

//struct point used for arg
void showBook (Books * book);

void initBooks ();

#endif
