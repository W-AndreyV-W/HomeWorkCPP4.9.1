#include <iostream>
#include <vector>

void move_vectors(std::vector <std::string>& lhs, std::vector <std::string>& rhs) {
    std::vector <std::string> tmp = std::move(lhs);
    lhs = std::move(rhs);
    rhs = std::move(tmp);
}

int main()
{
    //std::cout << "Hello World!\n";
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one, two);

    for (const auto& i : two) {
        std::cout << i << " ";
    }
}