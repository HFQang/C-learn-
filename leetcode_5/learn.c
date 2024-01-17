#include<stdio.h>						//程序为此为输出最长回文子串
#include<string.h>						//回文字符串是正序和反序相同，即成轴对称
#include<stdlib.h>
char* longestPalindrome(char* s)
{
	int s_len = 0;
	s_len = (int)strlen(s);
	int p, p1, p2 = 0, n, max = 0, s_p = 0, i;		//n用来记录回文子符串的长度   max记录最长的回文字串长度 
													//s_p用来记录回文子串的开始位置
	if (s_len == 1) {
		max = 1;
		return s;
	}
	else {
		for (p = 0; p < s_len; p++)
		{
			n = 0;
			if (s[p] == s[p + 1])										//以双字符为轴对称			
			{
				p1 = p + 2;		p2 = p - 1;

				while (p2 >= 0 && p1 <= s_len && s[p1] == s[p2]) {
					p1++;	p2--;
				}
				n = p1 - p2 - 1;
				if (n > max)
				{
					max = n;
					s_p = p2 + 1;
				}
			}

			n = 0;														//以单字符轴对称
			p1 = p + 1;
			p2 = p - 1;
			while (p2 >= 0 && p1 <= s_len && s[p1] == s[p2])
			{
				p1++;	p2--;
			}
			n = (p1 - p - 1) * 2 + 1;
			if (n > max)
			{
				max = n;
				s_p = p2 + 1;
			}
		}

	}
	char* zc = (char*)malloc(sizeof(char) * (max + 1));			//将子串存储
	if (zc != NULL) {							//防止内存申请失败，返回空指针
		for (i = 0; i < max; s_p++, i++)
		{										//!!!!	    // 49到57行的优化方案： 修改原字符串的结尾为最长子串的结尾，然后return s+s_p;使函数返
			zc[i] = s[s_p];									//					   回的指针指向子串的开始
		}													//代码如下：		s[s_p+max]='\0';
		zc[i] = '\0';										//				retrun s+s_p;
	}														//
	return zc;
}
int main(void)
{
	char a[50] = "sc000cshb";
	char* b = longestPalindrome(a);
	printf("%s", b);
	free(b);				//使用优化方案后不需要在申请内存，也就不需要释放
	return 0;
}