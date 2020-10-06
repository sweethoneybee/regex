#include <iostream>
#include <regex>
#include <vector>
using namespace std;

int main(void)
{
  // 로그파일이름 db-(시간)-log.txt 형식으로 되어있음
  // 여러 파일 중 이 형식에 맞는 파일만 찾기 위핸 정규표현식
  vector<string> file_names = {"db-123-log.txt",
                               "db-124-log.txt",
                               "not-db-log.txt",
                               "db-12-log.txt",
                               "db-12-log.jpg"};
  regex re("db-\\d*-log\\.txt", regex::icase | regex::optimize);
  for (const auto &file_name : file_names)
  {
    cout << file_name << ": " << boolalpha << regex_match(file_name, re) << "\n";
  }

  return 0;
}