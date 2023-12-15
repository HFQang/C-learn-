#include<stdio.h>
#include<stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
	unsigned int n = 0;
	int p1 = 0, p2 = 0;              //�ֱ���Ϊ����nums1��nums2������
	if (nums1Size == 0)
	{
		if (nums2Size != 0)				//nums1����Ϊ�գ���ֻ�����nums2����λ��
		{
			switch (nums2Size % 2)
			{
			case 0: return (double)(nums2[nums2Size / 2] + nums2[nums2Size / 2 - 1]) / 2; break;
			case 1: return (double)nums2[nums2Size / 2]; break;
			}
		}
		else return 0.0;				//�����鶼Ϊ�գ��򷵻�0.0
	}
	else if (nums2Size == 0)				//nums2Ϊ�գ�nums1����
	{
		switch (nums1Size % 2)
		{
		case 0: return (double)(nums1[nums1Size / 2] + nums1[nums1Size / 2 - 1]) / 2; break;
		case 1: return (double)nums1[nums1Size / 2]; break;
		}
	}
	else                            //nums1��nmus2����Ϊ��
	{
		unsigned int n = 0;
		int p1 = 0, p2 = 0;              //�ֱ���Ϊ����nums1��nums2������
		unsigned int sum = nums1Size + nums2Size;			//������Ԫ�ظ���֮��
		int* nums3 = (int*)malloc(sizeof(int) * sum);
		while (n < (sum / 2 + 1))							//ѭ��ֱ����nums3�д洢��λ��
		{
			int v;
			if (p2 == nums2Size)   v = 2;					//����nums2��ѡ��
			else if (p1 == nums1Size)  v = 3;				//����nums1��ѡ��
			else v = 1;                                     //�����鶼������δ��ѡ��nums3��
			switch (v)
			{
			case 1:if (nums1[p1] < nums2[p2])
			{
				nums3[n] = nums1[p1];
				p1++;
				n++;
			}
				  else
			{
				nums3[n] = nums2[p2];
				p2++;
				n++;
			}
				  break;
			case 2:  nums3[n] = nums1[p1];
				p1++;
				n++;
				break;
			case 3:   nums3[n] = nums2[p2];
				p2++;
				n++;
				break;
			}
		}
		int a = nums3[sum / 2], b = nums3[sum / 2 - 1];
		free(nums3);

		if (sum % 2)                   //sum�ǵ�������˫��
			return (double)a;
		else
			return (double)(a + b) / 2;
	}
	return 0.0;
}

int main(void)
{
	int a[5] = { 1,3,5 ,7,9 };
	int b[3] = { 2,4,6 };
	printf("%.6lf", findMedianSortedArrays(a, 5, b, 3));

	return 0;
}