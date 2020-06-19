#include "record.h"

void EpicCraftingsPlus(FILE *outFile,int type,char *id,char *name,int allnumber[MAXNUM][2],int level,int quality,int picture,char materials[MAXNUM][CHAR],char packagetype[MAXNUM][5][CHAR],int packagenum[MAXNUM][10],int package,char materialslore[MAXNUM][5][CHAR],char itemtype[MAXNUMWEA][CHAR],char numbertype[MAXNUMWEA][CHAR],char handtype[MAXNUMWEA][CHAR],char taketype[MAXNUMWEA][CHAR],char picturetype[MAXNUMWEA][CHAR],char mowen[MAXNUMWEA][CHAR],char catetype[MAXNUMWEA][CHAR],char mpicturetype[MAXNUMWEA][CHAR],char mmpicturetype[MAXNUMWEA][CHAR],int power[MAXNUMWEA],int numberkind[MAXNUMWEA],char realpicturetype[MAXNUMWEA][CHAR],char materialsID[MAXNUM][CHAR]){
	char qualitytype[200];
	int number = 0;	
	number = allnumber[level][numberkind[type]];
	number = number*power[type]/100;
	int numberlite = number*0.1;
	
	switch(quality){
		case 1:
			strcpy(qualitytype,"&f普通");			
			break;
		case 12:
			strcpy(qualitytype,"&f普通 &a优秀");
			break;
		case 123:
			strcpy(qualitytype,"&f普通 &a优秀 &3精良");
			break;
		case 1234:
			strcpy(qualitytype,"&f普通 &a优秀 &3精良 &d史诗");
			break;
		case 12345:
			strcpy(qualitytype,"&f普通 &a优秀 &3精良 &d史诗 &6传说");
			break;
		case 2:
			strcpy(qualitytype,"&a优秀");
			break;
		case 23:
			strcpy(qualitytype,"&a优秀 &3精良");
			break;
		case 234:
			strcpy(qualitytype,"&a优秀 &3精良 &d史诗");
			break;
		case 2345:
			strcpy(qualitytype,"&a优秀 &3精良 &d史诗 &6传说");
			break;
		case 3:
			strcpy(qualitytype,"&3精良");
			break;
		case 34:
			strcpy(qualitytype,"&3精良 &d史诗");
			break;
		case 345:
			strcpy(qualitytype,"&3精良 &d史诗 &6传说");
			break;
		case 4:
			strcpy(qualitytype,"&d史诗");
			break;
		case 45:
			strcpy(qualitytype,"&d史诗 &6传说");
			break;
		case 5:
			strcpy(qualitytype,"&6传说");
			break;
	}

	fprintf(outFile,"    10086%s:\n",id);
	fprintf(outFile,"      id: '%s'\n",realpicturetype[type]);
	fputs("      amount: '1'\n",outFile);
	fprintf(outFile,"      name: '&l&6%s'\n",name);	
	fputs("      lore:\n",outFile);	
	fprintf(outFile,"      - '&0%d'\n",picture);	
	fprintf(outFile,"      - '&7%s'\n",taketype[type]);	
	fprintf(outFile,"      - '&7%s'\n",itemtype[type]);
	fprintf(outFile,"      - '&7基础%s: %d - %d'\n",numbertype[type],number,numberlite+number);	
	fprintf(outFile,"      - '&7等级需求:%d'\n",level);
	fprintf(outFile,"      - '&7可鉴定品质: %s'\n",qualitytype);
	fputs("      hide-flags:\n",outFile);
	fputs("      - HIDE_ATTRIBUTES\n",outFile);
	fputs("      unbreakable: 'false'\n",outFile);
	fputs("      requires:\n",outFile);
	fprintf(outFile,"      - %s;1;&7%s;&0%d;&a装备类型:%s;&a装备等级:%d;&6[使用方法];&7请在鉴定师处进行鉴定\n",mpicturetype[type],name,picture,itemtype[type],level);
	fprintf(outFile,"      category: %s\n",catetype[type]);
	fprintf(outFile,"      command: randomforge %%player%% %s\n",id);
	fputs("      extra-requires:\n",outFile);
	fprintf(outFile,"      - level,%d\n",level);	

	
	if(package != 0){
		fprintf(outFile,"    %s:\n",id);
		fprintf(outFile,"      id: '%s'\n",mpicturetype[type]);
		fputs("      amount: '1'\n",outFile);
		fprintf(outFile,"      name: '&7%s'\n",name);	
		fputs("      lore:\n",outFile);	
		fprintf(outFile,"      - '&0%d'\n",picture);			
		fprintf(outFile,"      - '&a装备类型:%s'\n",itemtype[type]);	
		fprintf(outFile,"      - '&a装备等级:%d'\n",level);
		fputs("      - '&6[使用方法]'\n",outFile);
		fputs("      - '&7请在鉴定师处进行鉴定'\n",outFile);	
		fputs("      requires:\n",outFile);
		// 材料 
		for(int k=0;k<5;k++){
			for(int w=0;w<MAXNUM;w++){
				if(strcmp(packagetype[package][k],materialsID[w]) == 0){
					fprintf(outFile,"      - CLAY_BALL;%d;%s",packagenum[package][k],materials[w]);
					for(int v=0;v<5;v++){
						if(!strstr(materialslore[w][v],"null")){
							fprintf(outFile,";%s",materialslore[w][v]);
						}
					}
					fputs("\n",outFile);
				}
			}
		}		
		fputs("      category: tuzhi\n",outFile);
		fprintf(outFile,"      permission: ecraft.%s\n",id);
		fputs("      extra-requires:\n",outFile);
		fprintf(outFile,"      - level,%d\n",level);	
	}
}
