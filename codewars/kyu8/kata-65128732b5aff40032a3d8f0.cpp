#include <string>

std::string neutralise(const std::string &s1, const std::string &s2) {
    std::string result;
    result.reserve(s1.size());

    for (size_t i = 0; i < s1.size(); ++i) {
        result.push_back(s1[i] == s2[i] ? s1[i] : '0');
    }

    return result;
}
