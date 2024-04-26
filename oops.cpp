#include <iostream>
#include <vector>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;
};

int main()
{

    student arr[3];
    for(int i = 0; i < 3; i++)
    {
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age : ";
        cin>>arr[i].age;
        cout<<"Gender[0/1]: "
        cin>>arr[i].gender;

    }
}