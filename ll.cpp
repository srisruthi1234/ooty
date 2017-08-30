#include <iostream>
#include <limitsusing namespace std;
int main()
{
double arg;
char c;
while (c!= 'q' && c != 'Q')
{
    cout << "Please enter a number x (q = program quit) : " << endl;
    cin >> arg;

    if (cin.fail())
    {
        cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
return 0;
