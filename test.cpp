#include <Windows.h>
#include <iostream>
#include <vector>
#include "meth.h"

int main()
{
    std::vector<int> nums{ 5, 5, 5, 5 };
    std::vector<int> more_nums{ 10, 10, 10, 10 };
    std::vector<int> sum = meth.sum_vec(&nums, &more_nums);
    std::vector<int> sub = meth.sub_vec(&nums, &more_nums);

    printf("The sum of the two vectors is:");

    for (int i = 0; i < sum.size(); i++) {
        printf("\n-> %d", sum[i]);
    }

    printf("\nThe substraction of the two vectors is:");

    for (int i = 0; i < sub.size(); i++) {
        printf("\n-> %d", sub[i]);
    }
    
    std::vector<int> num_array{3,2,4};
    std::vector<int> results = meth.twoSum(num_array, 6);

    printf("\nIndices: %d %d", results[0], results[1]);
}
