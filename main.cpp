#include "record.h"


void menu(){
	int i;
	int chose;//��ȡ�˵�  
	char a;//����ո�  
	char filename2[20];//�����ļ��� 
	FILE *outFile;
	char path1[200] = "RandomForge\\";
	char path2[200] = "MysteriousStrengthen\\";
	char path3[200] = "EpicCraftingsPlus\\";
	char path4[200] = "GuoItemLoreCommand\\";
	char path5[200] = "MythicMobs\\";
	char temppath[200];
	
	//��Ʒ���ݱ��� 
	int type[MAXNUM];
	char id[MAXNUM][CHAR];
	char name[MAXNUM][CHAR];
	int allnumber[MAXNUM][2];
	int level[MAXNUM];
	int quality[MAXNUM];	
	int picture[MAXNUM];
	int package[MAXNUM];
	
	char materials[MAXNUM][CHAR];
	char materialsID[MAXNUM][CHAR];
	char materialslore[MAXNUM][5][CHAR];
	char packagetype[MAXNUM][5][CHAR];
	int packagenum[MAXNUM][10];
	
	
	char itemtype[MAXNUMWEA][CHAR];
	char numbertype[MAXNUMWEA][CHAR];
	char handtype[MAXNUMWEA][CHAR];
	char taketype[MAXNUMWEA][CHAR];
	char picturetype[MAXNUMWEA][CHAR];
	char mowen[MAXNUMWEA][CHAR];
	char catetype[MAXNUMWEA][CHAR];
	char mpicturetype[MAXNUMWEA][CHAR];
	char mmpicturetype[MAXNUMWEA][CHAR];
	int power[MAXNUMWEA];
	int numberkind[MAXNUMWEA];
	char realpicturetype[MAXNUMWEA][CHAR];
	
	
	filecheck();
	
	for(int i=0;i<MAXNUM;i++){
		for(int j=0;j<10;j++){
			strcpy(packagetype[i][j],"null");
			strcpy(materialslore[i][j],"null");
		}
		strcpy(materials[i],"NULL");
		strcpy(materialsID[i],"NULL");
	}
	
	readfile(type,id,name,allnumber,level,quality,picture,materials,packagetype,packagenum,package,materialslore,itemtype,numbertype,handtype,taketype,picturetype,mowen,catetype,mpicturetype,mmpicturetype,power,numberkind,realpicturetype,materialsID);
	while(1){	
		printf("\n��ѡ��Ҫ���еĲ���\n1:RandomForge\n2:MysteriousStrengthen\n3:EpicCraftingsPlus\n4:GuoItemLoreCommand\n5:MythicMobs\n9:�˳�����\n\n");
		scanf("%d%c",&chose,&a);
		switch(chose){
			case 1:				
				strcpy(filename2,"config.yml");
				strcpy(temppath,path1);
				strcat(temppath,filename2);
				outFile = fopen(temppath,"w");
				
				printf("��ʼ�����ļ���\n");
				for(i=0;i<count;i++){
					RandomForge(outFile,type[i],id[i],name[i],allnumber,level[i],quality[i],picture[i],itemtype,numbertype,handtype,taketype,picturetype,mowen,catetype,mpicturetype,mmpicturetype,power,numberkind);
					printf("�� %d ��װ��������ϣ�\n",i+1);
				}
				fclose(outFile);
				printf("����װ��������������ɣ�������·��  %s\n",temppath);
				break;
			case 2:				
				strcpy(filename2,"��ǿ��װ���趨.yml");
				strcpy(temppath,path2);
				strcat(temppath,filename2);
				outFile = fopen(temppath,"w");
					
				printf("��ʼ�����ļ���\n");			
				for(i=0;i<count;i++){
					MysteriousStrengthen(outFile,type[i],id[i],name[i],allnumber,level[i],quality[i],picture[i],itemtype,numbertype,handtype,taketype,picturetype,mowen,catetype,mpicturetype,mmpicturetype,power,numberkind);
					printf("�� %d ��װ��������ϣ�\n",i+1);
				}
				printf("����װ��ǿ����������ɣ����ɵ�ǿ���ļ�������·�� %s \n�����и��Ʊ���!\n",temppath);
				fclose(outFile);
				break;
			case 3:
				strcpy(filename2,"config.yml");
				strcpy(temppath,path3);
				strcat(temppath,filename2);
				outFile = fopen(temppath,"w");				
				printf("��ʼ�����ļ���\n");
				for(i=0;i<count;i++){
					EpicCraftingsPlus(outFile,type[i],id[i],name[i],allnumber,level[i],quality[i],picture[i],materials,packagetype,packagenum,package[i],materialslore,itemtype,numbertype,handtype,taketype,picturetype,mowen,catetype,mpicturetype,mmpicturetype,power,numberkind,realpicturetype,materialsID);	
					printf("�� %d ��װ��������ϣ�\n",i+1);			
				}
				printf("����װ���ϳ���������ɣ�������·��  %s\n",temppath);
				fclose(outFile);
				break;
			case 4:				
				strcpy(filename2,"ClickTrigger.yml");
				strcpy(temppath,path4);
				strcat(temppath,filename2);
				outFile = fopen(temppath,"w");				
				printf("��ʼ�����ļ���\n");
				for(i=0;i<count;i++){
					GuoItemLoreCommand(outFile,id[i],name[i]);	
					printf("�� %d ��װ��ͼֽ������ϣ�\n",i+1);			
				}
				printf("����װ��ͼֽ��������ɣ�������·��  %s\n",temppath);
				fclose(outFile);
				break;
			case 5:				
				strcpy(filename2,"items.yml");
				strcpy(temppath,path5);
				strcat(temppath,filename2);
				outFile = fopen(temppath,"w");
				
				printf("��ʼ�����ļ���\n");
				for(i=0;i<count;i++){
					MythicMobs(outFile,type[i],id[i],name[i],level[i],picture[i],itemtype,numbertype,handtype,taketype,picturetype,mowen,catetype,mpicturetype,mmpicturetype,power,numberkind);
					printf("�� %d ��װ��������ϣ�\n",i+1);
				}
				fclose(outFile);
				printf("����װ��������������ɣ�������·��  %s\n",temppath);
				break;
			case 9:
				printf("��л����ʹ�ã��ټ���");
				exit(1);					
		}
	}
}

int main(){
	printf("��ӭʹ�÷籩����װ���༭��\nMade by FlyBull\n\n");
	menu();
	return 0;
}
