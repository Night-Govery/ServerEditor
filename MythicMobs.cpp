#include "record.h"

//δ������װ�� 
void MythicMobs(FILE *outFile,int type,char *id,char *name,int level,int picture,char itemtype[MAXNUMWEA][CHAR],char numbertype[MAXNUMWEA][CHAR],char handtype[MAXNUMWEA][CHAR],char taketype[MAXNUMWEA][CHAR],char picturetype[MAXNUMWEA][CHAR],char mowen[MAXNUMWEA][CHAR],char catetype[MAXNUMWEA][CHAR],char mpicturetype[MAXNUMWEA][CHAR],char mmpicturetype[MAXNUMWEA][CHAR],int power[MAXNUMWEA],int numberkind[MAXNUMWEA]){
	fprintf(outFile,"%s:\n",id);
	fprintf(outFile,"   Id: %s\n",mmpicturetype[type]);		
	fprintf(outFile,"   Display: '&7%s'\n",name);	
	fprintf(outFile,"   Lore:\n");	
	fprintf(outFile,"    - '&0%d'\n",picture);
	fprintf(outFile,"    - '&aװ������:%s'\n",itemtype[type]);
	fprintf(outFile,"    - '&aװ���ȼ�:%d'\n",level);
	fprintf(outFile,"    - '&6[ʹ�÷���]'\n");
	fprintf(outFile,"    - '&7���ڼ���ʦ�����м���'\n");
}


