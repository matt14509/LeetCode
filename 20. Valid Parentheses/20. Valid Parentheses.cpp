
#include <iostream>
#include <string>
#include <stack>
#define DEBUG
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (size_t i = 0; i < s.length(); i++)
        {
            if ((s.at(i) == '(') || (s.at(i) == '[') || (s.at(i) == '{'))
            {
                stk.push(s.at(i));
            }
            else
            {
                if (stk.empty())
                {
                    return false;
                }
                else
                {

                    if ((stk.top() == '(' )&& (s.at(i) == ']'))
                    {
                        return false;
                    }

                    else if ((stk.top() == '(') && (s.at(i) == '}'))
                    {
                        return false;
                    }
                    else if ((stk.top() == '[') && (s.at(i) == ')'))
                    {
                        return false;
                    }
                    else if ((stk.top() == '[') && (s.at(i) == '}'))
                    {
                        return false;
                    }
                    else if ((stk.top() == '{') && (s.at(i) == ')'))
                    {
                        return false;
                    }
                    else if ((stk.top() == '{') && (s.at(i) == ']'))
                    {
                        return false;
                    }
                    else
                    {
                        stk.pop();
                    }
                }
            }
        }


        if (stk.empty())
        {
            return true;
        }
        else
        {
            return false;
        }


       return true;
    }
};











int main()
{
    string s = "()[]}";
    Solution solution;
    cout << solution.isValid(s) << endl;

}
