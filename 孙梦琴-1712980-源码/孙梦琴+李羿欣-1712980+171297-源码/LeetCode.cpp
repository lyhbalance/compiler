#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  int monotoneIncreasingDigits(int N)
  {
    if (N == 0)
      return 0;
    int pre = monotoneIncreasingDigits(N / 10);
    if (N % 10 >= pre % 10)
    {
      return pre * 10 + N % 10;
    }
    else
    {
      int temp = pre * 10 + 9;
      if (temp <= N)
        return temp;
      else
      {
        pre--;
        int temp_pre = pre;
        vector<int> nums;
        while (temp_pre > 0)
        {
          if (temp_pre % 10 >= temp_pre / 10 % 10)
          {
            nums.push_back(temp_pre);
            break;
          }
          nums.push_back(9);
          temp_pre /= 10;
          temp_pre--;
        }
        pre = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
          pre = pre * 10 + nums[i];
        }
        return pre * 10 + 9;
      }
    }
  }
};
