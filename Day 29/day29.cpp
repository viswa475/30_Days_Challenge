#include <regex>
#include <string>
#include <iostream>
#include <map>

int main()
{
    std::multimap<std::string, std::string> database;
    int n;
    std::string dbKey, dbValue;
    if (std::cin >> n)
        for (int i = 0; i < n; i++)
        {
            std::cin >> dbKey >> dbValue;
            database.insert({dbKey, dbValue});
        }
    std::string pattern("gmail.com");
    std::regex r(pattern);
    std::string domain;
    for (auto it = database.cbegin(); it != database.cend(); it++)
    {
        domain = it->second.substr(it->second.find('@')+1);
        if (std::regex_match(domain, r))
            std::cout << it->first << std::endl;
    }

    return 0;
}
