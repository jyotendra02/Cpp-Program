#include <iostream>
using namespace std;
int BinarySearch(int A[], int low, int high, int item)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (A[mid] == item)
        {
            return mid + 1;
        }
        else if (A[mid] < item)
        {
            return BinarySearch(A, mid + 1, high, item);
        }
        else
        {
            return BinarySearch(A, low, mid - 1, item);
        }
    }
    return -1;
}
void Display(int result, int item)
{
    if (result == -1)
    {
        cout << "\nElement " << item << " is not Present in Array." << endl;
    }
    else
    {
        cout << "\nElement " << item << " is Present in Array at index " << result << "." << endl;
    }
}
int main()
{
    int B[] = {23, 29, 58, 63, 71, 80, 95, 100, 109, 119};
    int size = sizeof(B) / sizeof(B[0]);
    int outcome = BinarySearch(B, 0, size - 1, 23);
    Display(outcome, 100);
    outcome = BinarySearch(B, 0, size - 1, 101);
    Display(outcome, 101);
    outcome = BinarySearch(B, 0, size - 1, 58);
    Display(outcome, 58);
    cout << endl
         << endl;
    return 0;
}