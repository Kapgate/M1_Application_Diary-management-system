#ifndef __srccode_H__

#define __srccode_H__


#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<string.h>

int password();

void addrecord();

void viewrecord();

void editrecord();

void editpassword();

void deleterecord();

struct record

{

char time[6];

char name[30];

char place[25];

char duration[10];

char note[500];
} ;

struct record A;
#endif
