#include <iostream>
#include <map>


int main()
{
    std::vector<char> responses = {'W', 'S', 'U', 'A', 'W', 'S', 'U',
                                 'A', 'S', 'U', 'A', 'W', 'S', 'U', 'A', 'W'};

    int w = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'W';});
    int s = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'S';});
    int u = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'U';});
    int a = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'A';});
    int first_u = std::find_if(responses.begin(), responses.end(),
                               [](char c){return c == 'U';}) - responses.begin();

    std::cout << "Amount of responses: " << responses.size() << '\n'
                << "The most popular season: " << std::max({w, s, u, a}) << '\n'
                << "The first response that chose summer: " << first_u + 1;

    return 0;
}
