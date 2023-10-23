#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> nums)
{
  int sum = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
  }
  return sum;
}

int main()
{
  vector<int> nums = {37, 40, 46, 38, 25, 32, 48, 11, 28, 44};
  int sum = getSum(nums);
  cout << sum << endl;
  return 0;
}