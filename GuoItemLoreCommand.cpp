#include "record.h"

//图纸 
void GuoItemLoreCommand(FILE *outFile,char *id,char *name){
	fprintf(outFile,"%s:\n",id);
	fprintf(outFile,"  检测描述: '&7右键学习:%s'\n",name);
	fputs("  点击类型: 右键\n  玩家指令:\n",outFile); 
	fprintf(outFile,"  - '[op]:manuaddp %%player%% ecraft.%s'\n",id);
	fputs("  后台指令: []\n  开启使用提醒: true\n",outFile); 
	fputs("  使用信息: '&6&l[系统]&b你学习了图纸'\n",outFile); 
	fputs("  物品模块:\n",outFile); 
	fputs("    需求堆叠数量: 1\n",outFile); 
	fputs("    需求不足提示: '&c需要同时持有&e1&c个此物品时才能使用'\n",outFile); 
	fputs("    是否消耗物品: true\n",outFile); 
	fputs("  冷却模块:\n",outFile); 
	fputs("    是否启用该模块: true\n",outFile); 
	fputs("    冷却组: '锻造书'\n",outFile); 
	fputs("    冷却时间: 5000\n",outFile); 
	fputs("    是否提醒冷却中: true\n",outFile); 
	fputs("    冷却中提醒信息: '&6你学的头脑发胀，还剩%less%秒。'\n",outFile); 
	fputs("  权限模块:\n",outFile); 
	fputs("    是否启用该模块: false\n",outFile); 
	fputs("    检测的权限: '药品权限.天堂的痊愈药剂'\n",outFile); 
	fputs("    是否提醒权限不足: true\n",outFile); 
	fputs("    权限不足提示信息: '&c使用此物品需要到达&e七级&c，请升级后再尝试使用'\n",outFile); 
	fputs("  动作模块:\n",outFile); 
	fputs("    是否启用该模块: false\n",outFile); 
	fputs("    需要奔跑: false\n",outFile); 
	fputs("    需要蹲下: false\n",outFile); 
	fputs("    需要格挡: false\n",outFile); 
	fputs("    需要浮空: false\n",outFile); 
	fputs("    姿势不对是否提示: false\n",outFile); 
	fputs("    姿势不对提示信息: '&c该物品需要在蹲下时使用'\n",outFile); 
	fputs("  变量模块:\n",outFile); 
	fputs("    是否启用该模块: false\n",outFile); 
	fputs("    判断项目:\n",outFile); 
	fputs("      判断等级:\n",outFile); 
	fputs("        判断式: '%player_level%>=30'\n",outFile); 
	fputs("        不通过是否提示: true\n",outFile); 
	fputs("        不通过提示信息: '&c等级不足，附魔等级至少要到达30级。'\n",outFile); 
}


