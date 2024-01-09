#include <iostream>
using namespace std;

template <class T>
class Array
{
    int size;
    int length = 0;
    T *array = (T *)malloc(sizeof(T) * size);

public:
    Array()
    {
        cout << "Enter Size of Array: ";
        cin >> size;
    }
    int insert()
    {
        if (size == length)
            return -1;
        int n;

        do
        {
            cout << "Enter Number of Elements to insert: ";
            cin >> n;
        } while (n > (size - length));

        cout << "Enter " << n << " elements:- " << endl;

        for (int i = length; i < n; i++)
        {
            cin >> array[i];
            length++;
        }
        return 0;
    }
    void display()
    {
        for (int i = 0; i < length; i++)
            cout << array[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array<int> arr1;
    arr1.insert();
    arr1.insert();
    arr1.insert();
}
