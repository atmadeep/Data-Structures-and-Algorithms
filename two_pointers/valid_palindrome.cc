#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s);
int main() {
  // string s = "A man, a plan, a canal: Panama";
  string s = "Was it a car or a cat I saw?";
  cout << isPalindrome(s) << endl;
}

bool isPalindrome(string s) {
  cout << s << endl;
  s.erase(remove_if(s.begin(), s.end(),
                    [](auto const &c) -> bool { return !std::isalnum(c); }),
          s.end());

  transform(s.begin(), s.end(), s.begin(), ::tolower);

  cout << s << endl;

  int initial_pointer = 0, final_pointer = s.length() - 1;

  while (initial_pointer < final_pointer) {
    if (s[initial_pointer] != s[final_pointer]) {
      cout << "s[" << initial_pointer << "]" << s[initial_pointer] << " "
           << "s[" << final_pointer << "]" << s[final_pointer] << endl;
      return false;
    }
    initial_pointer++;
    final_pointer--;
  }
  return true;
}