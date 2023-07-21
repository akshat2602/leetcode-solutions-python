class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> umap;
        vector<int> result;
        int rem;
        for (int i = 0; i < nums.size(); i++)
        {
            rem = target - nums[i];
            if (umap.find(rem) != umap.end())
            {
                result.push_back(umap[rem]);
                result.push_back(i);
                break;
            }
            else
            {
                umap[nums[i]] = i;
            }
        }
        return result;
    }
};