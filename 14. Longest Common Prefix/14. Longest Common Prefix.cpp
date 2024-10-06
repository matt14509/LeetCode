#include <iostream>
#include <vector>
#define DEBUG
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int min_string_len;
        int len = strs.size();

        for (size_t i = 0; i < len; i++)
        {
            if (i != 0)
            {
                if ((strs.at(i).length() < strs.at(i - 1).length()))
                {
                    min_string_len = strs.at(i).length();
                }
            }
           
 
           
        }
        cout << min_string_len << endl;
        int sub = 0;
        int char_pos = 0;
        for (size_t i = 0; i < len; i++)
        {
            for (size_t i = 0; i < min_string_len-1; i++)
            {

                sub += 1;
                if (sub > len)
                {
                    sub = 0;
                    char_pos += 1;
                }

                cout << strs.at(i).at(char_pos) << endl;

            }
     
        }














        return result;
    }
};














int main()
{

    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
#ifdef DEBUG
    cout << strs.at(0) << endl;
    cout << strs.at(1) << endl;
    cout << strs.at(2) << endl;
#endif // DEBUG


    Solution solution;
    solution.longestCommonPrefix(strs);

}