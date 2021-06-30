#include <iostream>
#include <unordered_map>
using namespace std;
bool checkIfPangram(string sentence)
{
    unordered_map<int, int> mp(26);
    for (int i = 0; i < sentence.size(); i++)
    {
        mp[sentence[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (mp[i] == 0)
            return false;
    }
    return true;
}
int main()
{
    string s = "leetcode", a = "thequickbrownfoxjumpsoverthelazydog";
    cout << checkIfPangram(s) << endl;
    cout << checkIfPangram(a);
}