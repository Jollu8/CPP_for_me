#include "std_lib_facilities.h"

int main()
{
    vector<string> words;
    for (string temp; cin >> temp;)
    {
        if (temp == "mad")
        {
            words.push_back("good");
            continue;
        }
        words.push_back(temp);
    }
    cout << "counter words: " << words.size() << '\n';

    sort(words.begin(), words.begin());
    for (int i = 0; i < words.size(); ++i)
    {
        if (i == 0 || words[i - 1] != words[i])
        {
            cout << words[i] << '\n';
        }
    }
}
// I don't even know if the program is correct.
// My task was to replace a bad word with something. and so.