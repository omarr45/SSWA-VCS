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

float getAverage(vector<int> nums)
{
  int sum = getSum(nums);
  return sum * 1.0 / nums.size();
}

int main()
{
  vector<int> nums = {37, 40, 46, 38, 25, 32, 48, 11, 28, 44};
  int sum = getSum(nums);
  cout << "Sum is: " << sum << endl;

  float average = getAverage(nums);
  cout << "Average is: " << average << endl;

  return 0;
}