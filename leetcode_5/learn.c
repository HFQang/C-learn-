#include<stdio.h>						//����Ϊ��Ϊ���������Ӵ�
#include<string.h>						//�����ַ���������ͷ�����ͬ��������Գ�
#include<stdlib.h>
char* longestPalindrome(char* s)
{
	int s_len = 0;
	s_len = (int)strlen(s);
	int p, p1, p2 = 0, n, max = 0, s_p = 0, i;		//n������¼�����ӷ����ĳ���   max��¼��Ļ����ִ����� 
													//s_p������¼�����Ӵ��Ŀ�ʼλ��
	if (s_len == 1) {
		max = 1;
		return s;
	}
	else {
		for (p = 0; p < s_len; p++)
		{
			n = 0;
			if (s[p] == s[p + 1])										//��˫�ַ�Ϊ��Գ�			
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

			n = 0;														//�Ե��ַ���Գ�
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
	char* zc = (char*)malloc(sizeof(char) * (max + 1));			//���Ӵ��洢
	if (zc != NULL) {							//��ֹ�ڴ�����ʧ�ܣ����ؿ�ָ��
		for (i = 0; i < max; s_p++, i++)
		{										//!!!!	    // 49��57�е��Ż������� �޸�ԭ�ַ����Ľ�βΪ��Ӵ��Ľ�β��Ȼ��return s+s_p;ʹ������
			zc[i] = s[s_p];									//					   �ص�ָ��ָ���Ӵ��Ŀ�ʼ
		}													//�������£�		s[s_p+max]='\0';
		zc[i] = '\0';										//				retrun s+s_p;
	}														//
	return zc;
}
int main(void)
{
	char a[50] = "sc000cshb";
	char* b = longestPalindrome(a);
	printf("%s", b);
	free(b);				//ʹ���Ż���������Ҫ�������ڴ棬Ҳ�Ͳ���Ҫ�ͷ�
	return 0;
}