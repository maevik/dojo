#include <string>
#include <vector>

bool logicalCalc(const std::vector<bool> &items, const std::string &op) {
    if (op == "AND") {
        for (bool item : items) {
            if (!item)
                return false;
        }
        return true;
    }

    if (op == "OR") {
        for (bool item : items) {
            if (item)
                return true;
        }
        return false;
    }

    if (op == "XOR") {
        bool result = false;

        for (bool item : items) {
            result ^= item;
        }

        return result;
    }

    return false;
}
