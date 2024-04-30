#include <iostream>
#include <cstring>

int main()
{
    // c strings
    char s_1[] = "lala", s_2[] = "LALA";
    std::cout << strcmp(s_1, s_2) << std::endl;
    char s_3[3];
    std::cin >> s_3;
    std::cout << strlen(str3) << std::endl;
  
    // c++ strings
    std::string s_4;
    std::cin >> s_4;
    std::cout << s_4.size() << s_4.length() << std::endl;
  
    std::string s_5 = "One";
    std::string s_6 = "Two";
    bool operator1 = s_5 < s_6;
    std::string operator2 = s_5 + s_6;
    std::cout << operator1 << " " << operator2 << std::endl;
    s_5 = s_6;
  
    return 0;
}
