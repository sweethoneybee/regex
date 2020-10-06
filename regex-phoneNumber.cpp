#include <iostream>
#include <regex>
#include <vector>
using namespace std;

int main()
{
  vector<string> phone_numbers = {"010-1234-5678",
                                  "010-123-4567",
                                  "011-1234-5567",
                                  "010-12345-6789",
                                  "123-4567-8901",
                                  "010-1234-567"};
  regex re("[01]{3}-\\d{3,4}-\\d{4}");
  for (const auto &number : phone_numbers)
  {
    // std::boolalpha는 바로 다음 출력만 true, false로 변환하고 다음 꺽쇠부터는 변환하지 않음.
    cout << number << ": " << boolalpha << regex_match(number, re) << "\n";
  }
}