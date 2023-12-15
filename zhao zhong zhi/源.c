#include<stdio.h>
#include<stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
	unsigned int n = 0;
	int p1 = 0, p2 = 0;              //分别作为数组nums1，nums2的引导
	if (nums1Size == 0)
	{
		if (nums2Size != 0)				//nums1数组为空，则只需计算nums2的中位数
		{
			switch (nums2Size % 2)
			{
			case 0: return (double)(nums2[nums2Size / 2] + nums2[nums2Size / 2 - 1]) / 2; break;
			case 1: return (double)nums2[nums2Size / 2]; break;
			}
		}
		else return 0.0;				//两数组都为空，则返回0.0
	}
	else if (nums2Size == 0)				//nums2为空，nums1不空
	{
		switch (nums1Size % 2)
		{
		case 0: return (double)(nums1[nums1Size / 2] + nums1[nums1Size / 2 - 1]) / 2; break;
		case 1: return (double)nums1[nums1Size / 2]; break;
		}
	}
	else                            //nums1和nmus2都不为空
	{
		unsigned int n = 0;
		int p1 = 0, p2 = 0;              //分别作为数组nums1，nums2的引导
		unsigned int sum = nums1Size + nums2Size;			//两数组元素个数之和
		int* nums3 = (int*)malloc(sizeof(int) * sum);
		while (n < (sum / 2 + 1))							//循环直到在nums3中存储中位数
		{
			int v;
			if (p2 == nums2Size)   v = 2;					//数组nums2被选完
			else if (p1 == nums1Size)  v = 3;				//数组nums1被选完
			else v = 1;                                     //两数组都还有数未被选入nums3中
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

		if (sum % 2)                   //sum是单数还是双数
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