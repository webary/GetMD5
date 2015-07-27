#include "md5.h"

#pragma comment(lib,"md5.lib")

int main(int agr,char* agv[])
{
	char md5[33];
	if(agr<2)
	{
		char str[10240];
		while(gets(str))
			puts(getStrMd5(md5,str));
	}else
	{
		MD5 fileMD5;
		if(fileMD5.fileMd5(md5,agv[1]))
			printf("文件'%s'的md5值为：\n%s\n\n",agv[1],md5);
		else
			puts("传入的不是一个有效的可访问的文件！\n");
	}
	system("pause");
	return 0;
}
