#include <iostream>
#include <string>
#include <string_view>

std::string nameInput(int num)
{
    std::cout << "Enter the name of person " << num << ":";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    return name;
}

int ageInput(std::string_view name)
{

    std::cout << "Enter the age of " << name << ":";
    int age{};
    std::cin >> age;
    return age;
}

void result(int age1, int age2, std::string_view name1, std::string_view name2)
{

    if (age1 > age2)
    {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ")" << "\n";
    }
    else if (age2 > age1)
    {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ")" << "\n";
    }
    else
        std::cout << "thay are both of the same age\n";
    
    
}

int main()
{

    std::string name1{nameInput(1)};
    int age1{ageInput(name1)};
    std::string name2{nameInput(2)};
    int age2{ageInput(name2)};
    result(age1, age2, name1, name2);

    return 0;
}