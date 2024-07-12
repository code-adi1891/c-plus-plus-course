#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
    float roll_number = 0;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;
    float chemistry;

public:
    void set_marks(float, float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2, float m3)
{
    maths = m1;
    physics = m2;
    chemistry = m3;

}

void Exam ::get_marks()
{
    cout << "the marks obtained in physics are: " << physics << endl;
    cout << "the marks obtained in maths are: " << maths << endl;
    cout << "the marks obtained in chemistry are: " << chemistry << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is: " << (maths + physics + chemistry) / 3 << "%" << endl;
    }
};

int main()
{
    Result aditya;
    aditya.set_roll_number(002);
    aditya.set_marks(94.2, 90.4, 10);
    aditya.display_results();
    return 0;
}
