#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>

int fReadFiles();

int main ()
{
	fReadFiles();
	getch ();
	return 0;
}

//функция чтения имён входных файлов с клавиатуры и копирования их содержимого в файл результата
int fReadFiles()
{
	int ai;
	char as, aLine;
	FILE *afpRes, *afpIn;
	afpRes = fopen("result.txt", "a");
		
	for (ai=1;ai<3;ai++)
		{
			printf("Enter name of file to continue or 42 for exit: ");
			scanf("%[^\n]", &as);
			if (strcmp(&as, "42")==0) // 42 - сервисная команда для преждевременного завершения ввода имён файлов
			{
				if (ai==1) printf("You have not entred any files!\n");
				break;
			}
			//работаем с входным файлом
			afpIn = fopen("in.txt","a");
			printf("%s", &as);
			fclose(afpIn);
		}
	fclose(afpRes);
	return 0;
}