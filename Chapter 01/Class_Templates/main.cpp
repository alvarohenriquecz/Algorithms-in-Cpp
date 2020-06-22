// Class Template.cbp
#include <iostream>

using namespace std;

class Animal
{
protected:
    string m_name;
public:
    Animal(string name) : m_name(name)
    {}

    // The interface that has to be implemented
    // in derived class
    virtual string MakeSound() = 0;

    string GetName()
    {
        return m_name;
    }
};

class Dog : public Animal
{
public:
    // Forward the constructor arguments
    Dog(string name) : Animal(name) {}

    // Copy assigment operator overloading
    void operator = (const Dog &D)
    {
         m_name = D.m_name;
    }

    // here we implement the interface
    string MakeSound() override
    {
        return "woof woof";
    }
};

class Cat : public Animal 
{
public:
    // Forward the construcotr arguments
    Cat(string name) : Animal(name) {}

    // Copy assigment operator overloading
    void operator = (const Cat &D)
    {
        m_name = D.m_name;
    }

    // here we implement the interface
    string MakeSound() override
    {
        return "meow-meow!";
    }
};

template<typename T>
void GetNameAndMakeSound(T& theAnimal)
{
    cout << theAnimal.GetName() << " goes ";
    cout << theAnimal.MakeSound << endl;
}

template <typename T>
class AnimalTemplate
{
private:
    T m_animal;
public:
    AnimalTemplate(T animal) : m_animal(animal) {}

    void GetNameMakeSound()
    {
        cout << m_animal.GetName() << " goes ";
        cout << m_animal.MakeSound() << endl;
    }
};

int main()
{
    Dog dog = Dog("Bulldog");
    AnimalTemplate<Dog> dogTemplate(dog);
    dogTemplate.GetNameMakeSound();

    Cat cat = Cat("Persiam Cat");
    AnimalTemplate<Cat> catTemplate(cat);
    catTemplate.GetNameMakeSound();

    return 0;
}