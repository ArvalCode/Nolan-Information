#include <iostream>

class person {
public:
    int age;
    int height;
    int weight;

};

int main() {
    person nolan;

    nolan.age = 14; //years
    nolan.height = 67; //inches
    nolan.weight = 110; //pounds

    std::string input;

    std::cin >> input;
    if (input == "Nolan")
    {
        std::cout << nolan.age << " " << nolan.height << " " << nolan.weight;
    }
    
}