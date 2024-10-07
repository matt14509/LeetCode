
#include <iostream>
#include <string>
using namespace std;
int first_of_needle;
class Solution {
public:
    int strStr(string haystack, string needle) {

        for (size_t i = 0; i < haystack.length(); i++)
        {
            if (haystack.at(i) == needle.at(0))
            {
                first_of_needle = i;
                if ((i + needle.length()) > haystack.length())
                {
                    return -1;
                }
                else
                {
                    for (size_t i = 0; i < needle.length(); i++)
                    {
                        if ((haystack.at(first_of_needle + i) == needle.at(i)))
                        {
                            if (i == needle.length()-1)
                            {
                                return first_of_needle;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                }
           }
        }

    }
};

int main()
{
    string heystack = "sadbutsad";
    string needle = "but";
    Solution solution;
    cout << solution.strStr(heystack,needle) << endl;
}