#include "record.h"

int count;
int countmaterials=-1;

void deletechar(char a[],char c)
{
    int i,j;
    for(i=0,j=0; *(a+i)!='\0'; i++)
    {
        if(*(a+i)==c)
            continue;
        else
        {
            *(a+j)=*(a+i);
            j++;
        }
    }
    *(a+j)='\0';
}	
	
void filecheck()
{
    string folderPath1 = "RandomForge"; 
    string folderPath2 = "MysteriousStrengthen"; 
    string folderPath3 = "EpicCraftingsPlus"; 
    string folderPath4 = "MysteriousStrengthen\\方案";
    string folderPath5 = "GuoItemLoreCommand";
    string folderPath6 = "MythicMobs";    

    if (0 != access(folderPath1.c_str(), 0))
    {
        printf("未发现RandomForge文件夹，已自动创建！\n");
        mkdir(folderPath1.c_str());
    }

    if (0 != access(folderPath2.c_str(), 0))
    {
        printf("未发现MysteriousStrengthen文件夹，已自动创建！\n");
        mkdir(folderPath2.c_str());
    }

    if (0 != access(folderPath4.c_str(), 0))
    {
        printf("未发现MysteriousStrengthen下的方案文件夹，已自动创建！\n");
        mkdir(folderPath4.c_str());
    }
    
    if (0 != access(folderPath3.c_str(), 0))
    {
        printf("未发现EpicCraftingsPlus文件夹，已自动创建！\n");
        mkdir(folderPath3.c_str());
    }

    if (0 != access(folderPath5.c_str(), 0))
    {
        printf("未发现GuoItemLoreCommand文件夹，已自动创建！\n");
        mkdir(folderPath5.c_str());
    }
    
    if (0 != access(folderPath6.c_str(), 0))
    {
        printf("未发现MythicMobs文件夹，已自动创建！\n");
        mkdir(folderPath6.c_str());
    }
}



void readfile(int type[MAXNUM],char id[MAXNUM][CHAR],char name[MAXNUM][CHAR],int allnumber[MAXNUM][2],int level[MAXNUM],int quality[MAXNUM],int picture[MAXNUM],char materials[MAXNUM][CHAR],char packagetype[MAXNUM][5][CHAR],int packagenum[MAXNUM][10],int package[MAXNUM],char materialslore[MAXNUM][5][CHAR],char itemtype[MAXNUMWEA][CHAR],char numbertype[MAXNUMWEA][CHAR],char handtype[MAXNUMWEA][CHAR],char taketype[MAXNUMWEA][CHAR],char picturetype[MAXNUMWEA][CHAR],char mowen[MAXNUMWEA][CHAR],char catetype[MAXNUMWEA][CHAR],char mpicturetype[MAXNUMWEA][CHAR],char mmpicturetype[MAXNUMWEA][CHAR],int power[MAXNUMWEA],int numberkind[MAXNUMWEA],char realpicturetype[MAXNUMWEA][CHAR],char materialsID[MAXNUM][CHAR]){
	int i;
	int j = 0;
	char filename1[20] = "DATA\\equipment.txt";//读取文件名
	char filename[20] = "DATA\\materials.txt";
	char filename2[20] = "DATA\\package.txt";
	char filename3[20] = "DATA\\number.txt";
	char filename4[20] = "DATA\\options.txt";
	FILE *inFile;
	
	
	inFile = fopen(filename1,"r");							
	while((fscanf(inFile,"%d%s%s%d%d%d%d",&type[count],&id[count],&name[count],&level[count],&quality[count],&picture[count],&package[count])) != EOF){  //获取文件内数据 
		count++;	//计算装备数	
	}
	printf("\n共读取%d个装备数据\n",count);
	fclose(inFile);
	
	
	inFile = fopen(filename,"r");			

	char templore[CHAR] = "null";	
	char dot = '\'';
	int countlore = 0;
	while((fscanf(inFile,"%s",&templore)) != EOF){
		if(strstr(templore,"-")){
			fscanf(inFile,"%s",&templore);
			deletechar(templore,dot);
			strcpy(materialslore[countmaterials][countlore],templore);		
			countlore++;
			continue;	
		}
		if(strstr(templore,":")){
			if(strstr(templore,"Id:")){
				fscanf(inFile,"%s",&templore);	
				continue;							
			}
			if(strstr(templore,"Display:")){
				fscanf(inFile,"%s",&templore);
				deletechar(templore,dot);	
				strcpy(materials[countmaterials],templore);						
				continue;							
			}
			if(strstr(templore,"Lore:")){					
				continue;							
			}
			deletechar(templore,':');
			countmaterials++;
			strcpy(materialsID[countmaterials],templore);
			countlore = 0;
		}
	}
	printf("共读取%d个锻造材料数据\n",countmaterials);
	fclose(inFile);	
	
	inFile = fopen(filename2,"r");
	int temp1 = 0;
	int temp2 = 0;	
	char temploretype[CHAR] = "null";						
	while((fscanf(inFile,"%d%s%d",&temp1,&temploretype,&temp2)) != EOF){
		for(int i=0;i<10;i++){
			if(strstr(packagetype[temp1][i],"null")){
				strcpy(packagetype[temp1][i],temploretype);
				packagenum[temp1][i] = temp2;
				break;
			}else{
				continue;
			}
		}			
	}
	printf("锻造材料包数据读取成功!\n");
	fclose(inFile);	

	
	inFile = fopen(filename3,"r");
	int temp5 = 0;
	int temp6 = 0;		
	int temp7 = 0;
	int countnumber = 0;						
	while((fscanf(inFile,"%d%d%d",&temp5,&temp6,&temp7)) != EOF){
		allnumber[temp5][1] = temp6;
		allnumber[temp5][2] = temp7;
		countnumber++; 	
	}
	printf("共读取%d个等级数据\n",countnumber);
	fclose(inFile);	

	inFile = fopen(filename4,"r");
	char lore1[CHAR] = "null";
	char lore2[CHAR] = "null";		
	char lore3[CHAR] = "null";
	char lore4[CHAR] = "null";
	char lore5[CHAR] = "null";		
	char lore6[CHAR] = "null";
	char lore7[CHAR] = "null";
	char lore8[CHAR] = "null";	
	char lore9[CHAR] = "null";
	char lore10[CHAR] = "null";
	int temptype = 0;
	int temppower = 0;	
	int countnumber1 = 0;
	int tempnumberkind	= 0;				
	while((fscanf(inFile,"%d%s%d%s%s%s%s%s%s%s%s%s%d",&temptype,&lore1,&tempnumberkind,&lore2,&lore3,&lore4,&lore5,&lore10,&lore6,&lore7,&lore8,&lore9,&temppower)) != EOF){
		strcpy(itemtype[temptype],lore1);
		strcpy(numbertype[temptype],lore2);
		strcpy(handtype[temptype],lore3);
		strcpy(taketype[temptype],lore4);
		strcpy(picturetype[temptype],lore5);
		strcpy(mowen[temptype],lore6);
		strcpy(catetype[temptype],lore7);
		strcpy(mpicturetype[temptype],lore8);
		strcpy(mmpicturetype[temptype],lore9);
		power[temptype] = temppower;
		numberkind[temptype] = tempnumberkind;
		strcpy(realpicturetype[temptype],lore10);		
		countnumber1++;
	}
	printf("共读取%d个装备类型配置\n",countnumber1);
	fclose(inFile);	
}
