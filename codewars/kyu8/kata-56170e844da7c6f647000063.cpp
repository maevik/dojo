#include <string>

std::string people_with_age_drink(int age) {
    switch (age) {
    case 0 ... 13:
        return "drink toddy";
    case 14 ... 17:
        return "drink coke";
    case 18 ... 20:
        return "drink beer";
    case 21 ... 99:
        return "drink whisky";
    default:
        return "drink waterr";
    }
}
