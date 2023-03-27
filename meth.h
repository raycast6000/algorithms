#include <vector>

class Solution {
public:
    
    // Sum each index of vec1 with those of vec2 and push those additions to another vector.
    std::vector<int> sum_vec(std::vector<int>* vec1, std::vector<int>* vec2) {
        std::vector<int> fvec{};

        for (int i = 0; i < vec1->size(); i++) {
            fvec.push_back(((*vec1)[i] + (*vec2)[i]));
        }


        return fvec;
    }

    // Substract each index of vec1 with those of vec2 and push those additions to another vector.
    std::vector<int> sub_vec(std::vector<int>* vec1, std::vector<int>* vec2) {
        std::vector<int> fvec{};

        for (int i = 0; i < vec1->size(); i++) {
            fvec.push_back(((*vec1)[i] - (*vec2)[i]));
        }


        return fvec;
    }


    // Find two indices that, added together, are equal to <target>. And then push them into an array.
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> results{ 0, 0 };

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i + 1] != NULL && nums[i] + nums[i + 1] == target) {
                results[0] = i;
                results[1] = i + 1;
                break;
            }
            else if (nums[i - 1] != NULL && nums[i] + nums[i - 1] == target) {
                results[0] = i - 1;
                results[1] = i;
                break;
            }

            continue;
        }

        return results;
    }
};

Solution meth;