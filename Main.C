/*
2018-10-15 ByHuaze
*/
1#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int find(int value, int *list,int num)
{
	int left, right,mid=0;
	left = 1;
	right = num ;
	if (value == list[num - 1])//最后一个数有点特别
	{
		return num;
	}
	while (left!=right  )
	{
		mid = (left + right)/2;
		if (value == list[mid-1])
		{
			return mid;
		}
		if (value < list[mid-1])
		{
			right = mid;
		}
		if (value > list[mid-1])
		{
			left = mid;
		}
		 
	}
	return -1;
}
int main(int argc, char* argv[])
{
	int j;
	int zk[] = { 3,44,66,99,100,1111,2222};
	int zz = find(100, zk, 7);
	 
 

}
 
