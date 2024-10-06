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
        s.push_back('Z');
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






            if (s.at(i) == 'I' && (s.at(i + 1) == 'V' || s.at(i + 1) == 'X'))
            {

                


                if (s.at(i + 1) == 'V')
                {
                    integer += 4;
                    i += 1;
                    
                }
                
                if (s.at(i + 1) == 'X')
                {
                        integer += 9;
                        i += 1;
                }
               
            }
            if (s.at(i) == 'X' && (s.at(i + 1) == 'L' || s.at(i + 1) == 'C'))
            {
                if (s.at(i + 1) == 'L')
                {
                    integer += 40;
                    i += 1;
                }
                
                
                if (s.at(i + 1) == 'C')
                {
                        integer += 90;
                        i += 1;
                }
                
            }
            if (s.at(i) == 'C' && (s.at(i + 1) == 'D' || s.at(i + 1) == 'M'))
            {
                if (s.at(i + 1) == 'D')
                {
                    integer += 400;
                    i += 1;
                }
                if (s.at(i + 1) == 'M')
                {
                    integer += 900;
                    i += 1;
                }
            }
            if (subi == i)
            {
                integer += roman[s.at(i)];
            }




        }





































        return integer;
    }
};
int main()
{
    setlocale(LC_ALL, "Ru");
    string s;
#ifdef DEBUG
    s = "MCMXCIV";
#endif // DEBUG

   cout << "Введите римское число" << endl;
    cin >> s;




    Solution solution;
    cout << "Ваше число в современных цифрах" << endl;
    cout << solution.romanToInt(s) << endl;
    
}