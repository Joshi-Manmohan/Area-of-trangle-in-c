#include <stdio.h>
#include <stdlib.h>

int* two_sum(int* nums, int numsSize, int target, int* returnSize)
{
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL; // In case there are no solutions
}
// Example usage
int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* result = two_sum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (result)
    {
        printf("Indices of the two numbers that add up to %d: [%d, %d]\n", target, result[0], result[1]);
        free(result);
    }
    else
    {
        printf("No two numbers found that add up to %d\n", target);
    }

    return 0;
}
