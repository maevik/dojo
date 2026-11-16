#include <string>

std::string sum_str(const std::string &a, const std::string &b) {
    int numa = a.empty() ? 0 : std::stoi(a);
    int numb = b.empty() ? 0 : std::stoi(b);

    return std::to_string(numa + numb);
}
