#include <iostream>
#include <string>
#include <unordered_map>
#define DEBUG
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
       /* Symbol       Value
            I             1
            V             5
            X             10
            L             50
            C             100
            D             500
            M             1000
                    7 всего */
        int integer = 0;
        int len = s.length();
        unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;


        for (size_t i = 0; i < len; i++)
        {
            int subi = i;

            if (i + 1 >= len)
            {
                break;
            }




            if (s.at(i) == 'I' && (s.at(i + 1) == 'V' || s.at(i + 1) == 'X'))
            {

                


                if (s.at(i + 1) == 'V')
                {
                    integer += 4;
                    i += 1;
                    
                }
                if (subi == i)
                {
                    if (s.at(i + 1) == 'X')
                    {
                        integer += 9;
                        i += 1;
                    }
                }
            }
            if (s.at(i) == 'X' && (s.at(i + 1) == 'L' || s.at(i + 1) == 'C'))
            {
                if (s.at(i + 1) == 'L')
                {
                    integer += 40;
                    i += 1;
                }
                if (subi == i)
                {
                    if (s.at(i + 1) == 'C')
                    {
                        integer += 90;
                        i += 1;
                    }
                }
            }
            if (subi == i)
            {
                integer = roman[s.at(i)];
            }


        }





































        return integer;
    }
};
int main()
{
    string s;
#ifdef DEBUG
    s = "XI";
#endif // DEBUG

   /* cout << "" << endl;
    cin >> s;*/




    Solution solution;
    cout << solution.romanToInt(s) << endl;
    
}