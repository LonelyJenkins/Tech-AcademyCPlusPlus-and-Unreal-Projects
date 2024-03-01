// OOP Submission Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class dog
{
public:
    string breed;
    string color;
    string name;
    int weight;
    int height;

    void Shake()
    {
        cout << name + " shakes their body gracefully ";
    }

    void Sit()
    {
        cout << name + " sits down gracefully, like a good " + breed;
    }

    void LayDown()
    {
        cout << name + " lays down with the soft elegance of a dove landing into the hands of a beloved caretaker. Awesome!";
    }
};


int main()
{
    dog Hound;
    Hound.breed = "Hound";
    Hound.color = "brown";
    Hound.name = "Harold";
    Hound.weight = 60;
    Hound.height = 2;

    Hound.Shake();
    Hound.LayDown();
    Hound.Sit();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
