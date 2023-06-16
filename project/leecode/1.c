#include <stdio.h>
void moveZeroes(int* nums, int numsSize){
    int temp = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
        {
            temp = nums[i];
            for(int j = i; j <numsSize-1; j++)
            {
                nums[j] = nums[j+1];
            }
            nums[numsSize-1] = temp;
        }
    }
}
int main()
{
    int nums[] = {0,1,1,0,5};
    moveZeroes(nums,5);
    for(int i = 0; i < 5; i++)
        printf("%d ",nums[i]);
    return 0;
    
}