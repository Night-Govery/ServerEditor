#include "record.h"

//ͼֽ 
void GuoItemLoreCommand(FILE *outFile,char *id,char *name){
	fprintf(outFile,"%s:\n",id);
	fprintf(outFile,"  �������: '&7�Ҽ�ѧϰ:%s'\n",name);
	fputs("  �������: �Ҽ�\n  ���ָ��:\n",outFile); 
	fprintf(outFile,"  - '[op]:manuaddp %%player%% ecraft.%s'\n",id);
	fputs("  ��ָ̨��: []\n  ����ʹ������: true\n",outFile); 
	fputs("  ʹ����Ϣ: '&6&l[ϵͳ]&b��ѧϰ��ͼֽ'\n",outFile); 
	fputs("  ��Ʒģ��:\n",outFile); 
	fputs("    ����ѵ�����: 1\n",outFile); 
	fputs("    ��������ʾ: '&c��Ҫͬʱ����&e1&c������Ʒʱ����ʹ��'\n",outFile); 
	fputs("    �Ƿ�������Ʒ: true\n",outFile); 
	fputs("  ��ȴģ��:\n",outFile); 
	fputs("    �Ƿ����ø�ģ��: true\n",outFile); 
	fputs("    ��ȴ��: '������'\n",outFile); 
	fputs("    ��ȴʱ��: 5000\n",outFile); 
	fputs("    �Ƿ�������ȴ��: true\n",outFile); 
	fputs("    ��ȴ��������Ϣ: '&6��ѧ��ͷ�Է��ͣ���ʣ%less%�롣'\n",outFile); 
	fputs("  Ȩ��ģ��:\n",outFile); 
	fputs("    �Ƿ����ø�ģ��: false\n",outFile); 
	fputs("    ����Ȩ��: 'ҩƷȨ��.���õ�Ȭ��ҩ��'\n",outFile); 
	fputs("    �Ƿ�����Ȩ�޲���: true\n",outFile); 
	fputs("    Ȩ�޲�����ʾ��Ϣ: '&cʹ�ô���Ʒ��Ҫ����&e�߼�&c�����������ٳ���ʹ��'\n",outFile); 
	fputs("  ����ģ��:\n",outFile); 
	fputs("    �Ƿ����ø�ģ��: false\n",outFile); 
	fputs("    ��Ҫ����: false\n",outFile); 
	fputs("    ��Ҫ����: false\n",outFile); 
	fputs("    ��Ҫ��: false\n",outFile); 
	fputs("    ��Ҫ����: false\n",outFile); 
	fputs("    ���Ʋ����Ƿ���ʾ: false\n",outFile); 
	fputs("    ���Ʋ�����ʾ��Ϣ: '&c����Ʒ��Ҫ�ڶ���ʱʹ��'\n",outFile); 
	fputs("  ����ģ��:\n",outFile); 
	fputs("    �Ƿ����ø�ģ��: false\n",outFile); 
	fputs("    �ж���Ŀ:\n",outFile); 
	fputs("      �жϵȼ�:\n",outFile); 
	fputs("        �ж�ʽ: '%player_level%>=30'\n",outFile); 
	fputs("        ��ͨ���Ƿ���ʾ: true\n",outFile); 
	fputs("        ��ͨ����ʾ��Ϣ: '&c�ȼ����㣬��ħ�ȼ�����Ҫ����30����'\n",outFile); 
}


