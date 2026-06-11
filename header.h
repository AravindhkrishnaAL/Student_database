#ifndef STUDENT_H 
#define STUDENT_H
typedef struct student{
struct student* prev;
int roll;
char name[20];
float mark;
struct student* next;
}st;
st* sort_mark(st*);
st* merge_mrk(st*,st*);
st* sort_name(st*);
st* merge(st*, st*);
void sort(st**);
void del_all(st**);
void del(st**);
void add(st**,char*,float);
void print(st*);
void mod(st*);
void save(st*);
void load(st**);
void rev(st**);
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#endif
