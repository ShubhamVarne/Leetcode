

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    for(int i=0; i < numsSize; i++)
    {
       for(int j=i+1; j< numsSize; j++)
       {
           if(nums[i]+nums[j] == target)
           {
               int *A = (int *)malloc(2*sizeof(int));
               A[0] = i;
               A[1] = j;
               *returnSize=2;
               //printf("%d,%d\n",returnSize[0],returnSize[1]);
               return A;
           }
           
       }
    }
return 0;
}