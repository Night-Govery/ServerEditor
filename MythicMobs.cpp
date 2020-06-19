#include "record.h"

//未鉴定的装备 
void MythicMobs(FILE *outFile,int type,char *id,char *name,int level,int picture,char itemtype[MAXNUMWEA][CHAR],char numbertype[MAXNUMWEA][CHAR],char handtype[MAXNUMWEA][CHAR],char taketype[MAXNUMWEA][CHAR],char picturetype[MAXNUMWEA][CHAR],char mowen[MAXNUMWEA][CHAR],char catetype[MAXNUMWEA][CHAR],char mpicturetype[MAXNUMWEA][CHAR],char mmpicturetype[MAXNUMWEA][CHAR],int power[MAXNUMWEA],int numberkind[MAXNUMWEA]){
	fprintf(outFile,"%s:\n",id);
	fprintf(outFile,"   Id: %s\n",mmpicturetype[type]);		
	fprintf(outFile,"   Display: '&7%s'\n",name);	
	fprintf(outFile,"   Lore:\n");	
	fprintf(outFile,"    - '&0%d'\n",picture);
	fprintf(outFile,"    - '&a装备类型:%s'\n",itemtype[type]);
	fprintf(outFile,"    - '&a装备等级:%d'\n",level);
	fprintf(outFile,"    - '&6[使用方法]'\n");
	fprintf(outFile,"    - '&7请在鉴定师处进行鉴定'\n");
}


