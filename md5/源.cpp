#include "md5.h"

#pragma comment(lib,"md5.lib")  //此处使用了静态链接

int main(int agr,char* agv[])
{
	char md5[33];
	if(agr<2)  //当没有命令行参数时，表示用户直接双击打开了该exe,此时可以让用户输入字符串计算md5
	{
		char str[10240];
		while(gets(str))
			puts(getStrMd5(md5,str));
	}else  //当检测到命令行参数时,把它当作文件名，计算该文件的md5
	{
		MD5 md5Generation;
		if(md5Generation.fileMd5(md5,agv[1]))
			printf("文件'%s'的md5值为：\n%s\n\n",agv[1],md5);
		else
			puts("传入的不是一个有效的可访问的文件！\n");
	}
	system("pause");  //实现窗口暂留
	return 0;
}
