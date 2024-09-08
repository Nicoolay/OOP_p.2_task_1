#include <iostream>
#include <string>
#include <windows.h>

class Figure
{
protected:
    int sides_count{};
    std::string name;
    Figure(int sides, const std::string& fig_name) : sides_count(sides), name(fig_name) {}

public:
    Figure() : Figure(0, "Фигура: ") {}

    int get_sides_count() {
        return sides_count;
    }

    std::string get_name() {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure(3, "Треугольник: ") {}
};

class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure(4, "Четырёхугольник: ") {}
};

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure fig;
    Triangle trig;
    Quadrangle quad;
    std::cout << "Количество сторон: " << std::endl;
    std::cout << fig.get_name() << fig.get_sides_count() << std::endl;
    std::cout << trig.get_name() << trig.get_sides_count() << std::endl;
    std::cout << quad.get_name() << quad.get_sides_count() << std::endl;
    return 0;
}
