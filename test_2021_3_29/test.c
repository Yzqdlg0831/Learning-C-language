#define _CRT_SECURE_NO_WARNINGS 1
int* singleNumbers(int* nums, int numsSize, int* returnSize)
{
  int ret = 0;
  int arr[2] = {0};
  for(int i = 0;i<numsSize;i++)
  {
      ret^=nums[i];
  }
  
  int j = 0;
  for(;j<32;j++)
  {
      if(ret>>j & 1 )
      break;
  }
  
  int ret1 = 0, ret2 = 0;
  for(int i = 0;i<numsSize;i++)
  {
      if(nums[i]>>j & 1)
      {
       ret1^= nums[i];
      }
      else
      {
          ret2^= nums[i];
      }
  }
  arr[0]=ret1;
  arr[1]=ret2;
  return arr;
}