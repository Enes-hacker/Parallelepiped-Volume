#include <iostream>
using namespace std;

/*�� �� ��������� � ��������� ���� �� ����������� �� ����������� ������������� � ����������� �� ����������� �� ����� �� ��������.� ��������
�������� �� �� ������� ��������� �� �����, �� �� ������� ��������� �� �������� � �� �� �������� ������ �� ��������.*/

class Parallelepiped { //we are creating a class
public: //access modifier
    int a;  //attribute "a"
    int b;  //attribute "b"
    int c;  ////attribute "c"

    int Volume() {  //function
        return a * b * c;  //argument? shows what should it return
    }
};

int main()
{
    Parallelepiped parallelepiped; //creating object called "parallelepiped"
    cout << "Enter value for A:" << endl;  // text that you will see as the program opens
    cin >> parallelepiped.a;   //insert a value
    cout << "Enter value for B:" << endl;
    cin >> parallelepiped.b;
    cout << "Enter value for C:" << endl;
    cin >> parallelepiped.c;
    cout << "Volume is " << parallelepiped.Volume()<< endl;  //After inserting values for "a", "b", "c" the consele is going to print the result 
  

    return 0;
    
}

