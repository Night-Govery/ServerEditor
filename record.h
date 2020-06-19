#ifndef H_RECORD_H
#define H_RECORD_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <direct.h>
#include <iostream>
#include <math.h>
#include <fstream>
#include <iostream>


#define MAXNUM 1799
#define MAXNUMWEA 50
#define CHAR 50


using namespace std;

void menu();
void filecheck();
void readfile(int *,char [][CHAR],char [][CHAR],int [][2],int *,int *,int *,char [][CHAR],char [][5][CHAR],int [][10],int *,char [][5][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],int *,int *,char [][CHAR],char [][CHAR]);
void RandomForge(FILE *,int,char*,char*,int [][2],int,int,int,char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],int *,int *);
void MysteriousStrengthen(FILE *,int,char*,char*,int [][2],int,int,int,char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],int *,int *);
void EpicCraftingsPlus(FILE *,int ,char *,char *,int [][2] ,int ,int ,int ,char [][CHAR],char [][5][CHAR], int [][10], int,char [][5][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],int *,int *,char [][CHAR],char [][CHAR]);
void GuoItemLoreCommand(FILE *,char *,char *);
void MythicMobs(FILE *,int,char*,char*,int,int,char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],char [][CHAR],int *,int *);

extern 	int countmaterials;
extern 	int count;



#endif
