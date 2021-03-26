#include <iostream>
#include <vector>

using namespace std;


class Solution
{
    public:

        vector <int> twoSum (vector <int>& nums, int target)
        {
            vector <int> result;
            bool found = false;
            unsigned short int arraySize = nums.size();

            for (unsigned short int firstIndex = 0; firstIndex < arraySize && !found; firstIndex++)
                for (unsigned short int secondIndex = firstIndex + 1; secondIndex < arraySize && !found; secondIndex++)
                    if (nums.at(firstIndex) + nums.at(secondIndex) == target)
                    {
                        result.push_back(firstIndex);
                        result.push_back(secondIndex);
                        found = true;
                    }

            return result;
        }
};


int main ()
{
    Solution solution;

    vector <int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int target = 6;

    vector <int> result = solution.twoSum(nums, target);

    for (unsigned short int index = 0; index < result.size(); index++)
        cout << result.at(index) << ' ';

    return 0;
}