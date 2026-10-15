//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<windows.h> 
#include<string.h>

//int main(void)
//{
//	char word[8];
//	char word2[8];
//	scanf("%7s", word);
//	scanf("%7s", word2);
//	printf("%s##%s##\n", word, word2);
//
//	return 0;
//}
//size_t mylen(const char* s)
//{
//	int idx = 0;
//	while (s[idx] != '\0') {
//		idx++;
//	}
//	return idx;
//}

//int mycmp(const char* s1, const char* s2)
//{
	//int idx = 0;
	//while (/*s1[idx] == s2[idx] && s1[idx] != '\0'*/1) {
	//	if (s1[idx] != s2[idx]) {
	//		break;
	//	}
	//	else if (s1[idx] == '\0') {
	//		break;
	//	}
	//	idx++;
	//}
	//return s1[idx] - s2[idx];
//	while (*s1 == *s2 && *s1 != '\0') {
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}

//char* mycpy(char* dst, const char* src)
char* mycpy(char* dst, const char* src, size_t n)
{
	//int idx = 0;
	//while (src[idx]) {
	//	dst[idx] = src[idx];
	//	idx++;
	//}
	//dst[idx] = '\0';
	char* ret = dst;
	while (/**src != '\0'*/*dst++=*src++) {
		//*dst = *src;
		//dst++;
		//src++;

	}
	//*dst = '\0';

	return ret;
}
int main(int argc, char const* argv[])
{
//	//int i;
//	//for (i = 0;i < argc;i++) {
//	//	printf("%d:%s\n",i,argv[i]);
//	//}
//	int ch;
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//		}
//	printf("EOF\n");
	//char line[] = "Hello";
	//printf("strlen=%lu\n", strlen(line));
	//printf("mylen=%lu\n", mylen(line));
	//printf("sizeof=%lu\n", sizeof(line));
	char s1[] = "abc ";
	char s2[] = "abc";//gcc-32 msvc-1
	//char s2[] = "bbc";
	//char s2[] = "Abc";//gcc32 msvc1
	//printf("%d\n", strcmp(s1, s2));
	//printf("%d\n", mycmp(s1, s2));
	//printf("%d\n", 'a' - 'A');
	//strcpy(s1, s2);
	mycpy(s1, s2);

	return 0;
}  
//int main(void)
//{
//	printf("A: 开始等 20 秒，请在这期间按 Ctrl+C\n");
//	Sleep(20000);              
//	printf("A: 如果看到这行，说明程序跑完了\n");
//	return 0;
//}
//int main(void)
//{
//	printf("B: 开始等输入，请按 Ctrl+C\n");
//	getchar();              
//	printf("B: 如果看到这行，说明 getchar 返回了（EOF）\n");
//	return 0;
//}