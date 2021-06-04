#include <iostream>
#include <Windows.h>
using namespace std;

struct Student {
    Student(int x, string y) :age(x), name(y) {}
    string virtual name_() = 0;
    int age;
    string name;
    void get_student() const {
        cout << "Студент " << name << ", " << age << " years old";
    }
    void get_void();
    virtual ~Student() {};
};

struct Teacher : Student {
    Teacher(int x, string y) :Student(x, y) {}
    string name_() {
        return "Tech. " + name;
    }

};

struct Proffecor : Student {
    Proffecor(int x, string y) :Student(x, y) {}
    string name_() {
        return "Profeccor " + name;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Teacher Oleksandr(34, "Олександр");
    Proffecor Dmitriy(55, "Дмитрий");
    Student* ptr = &Oleksandr;
    Student* ptr_ = &Dmitriy;
    cout << "\t\t\tМой путеводитель по виртуальным методам :)\n";
    cout << "Виртуальный метод нужен для того что бы обращатся через базовый клас к методам наследников, таким образом сделав возможность использовать сторонние методы у базового класа\n";
    cout << "Чистый виртуальный метод это string virtual name() = 0, создав такой метод уже нельзя будет создать объект этого класса, так как если можно было б, то можно было б обратится к методу, который ничего не делает, что вызвало б ошибку\n";
    cout << "Обращатся к методам наследников можно только через указатель на базовый клас с ссылкой на клас насследника(так как обычный объект, как я уже сказал нельзя создать)\n";
    cout << "Вот например реализация использования виртуального метода:\n";
    cout << "Вот вызов метода через екземпляр наследника(teacher) - " << Oleksandr.name_() << ", а вот через указатель на базовый класс(Student) - " << ptr->name_() << endl;
    cout << "Как видите, они одинаковые, также работает и с екземпляром Proffecor: " << Dmitriy.name_() << ", через базовый - " << ptr_->name_() << '\n';
    cout << "Вывод: польза будет если сильно запарится с иерархией классов и грамотно все написать, пока что не вижу...\n";
    cout << "Также нужно всегда заводить виртуальный деструктор класса если есть виртуальный метод(равняющийся нулю)\n";
    system("pause");
    return 0;
}
