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

int getMin(vector<int> nums)
{
  int min = nums[0];
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] < min)
    {
      min = nums[i];
    }
  }
  return min;
}

int main()
{
  vector<int> nums = {37, 40, 46, 38, 25, 32, 48, 11, 28, 44};
  int sum = getSum(nums);
  cout << "Sum is: " << sum << endl;

  int min = getMin(nums);
  cout << "Min is: " << min << endl;

  return 0;
}