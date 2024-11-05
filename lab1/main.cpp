#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>
#include <array>
using namespace std;


double fraction(double x)   //1.1
{
    int y = x;
    return (x - y);
};

int charToNum(char x)   //1.3
{
    int y = x;
    //cout << y << endl;
    if (y >= 48 && y <= 57) {
        return y - 48;
    };
    cout << "Число не из предоставленного диапозона" << endl;
    return -1;
};

bool is2Digit(int x)    //1.5
{
    if ((abs(x) < 100) && (abs(x) >= 10)) {
        return true;
    }
    else {
        return false;
    }
};

bool isInRange(int a, int b, int num)   //1.7
{
    if (a >= b)
    {
        return ((a >= num) && (num >= b));
    }
    else
    {
        return ((b >= num) && (num >= a));
    }
};

bool isEqual(int a, int b, int c)   //1.9
{
    return ((a == b) && (b == c));
};

int abs_(int x) //2.1
{
    if (x < 0)
    {
        return (x * -1);
    }
    else
    {
        return x;
    }
};

bool is35(int x)    //2.3
{
    if (((x % 5 == 0) && (x % 3 == 0)) || ((x % 5 != 0) && (x % 3 != 0)))
    {
        return false;
    }
    else
    {
        return true;
    }
};

int max3(int x, int y, int z)   //2.5
{
    if ((x >= y) && (x >= z))
    {
        return x;
    };
    if ((y >= x) && (y >= z))
    {
        return y;
    }
    if ((z >= x) && (z >= y))
    {
        return z;
    }
};

int sum2(int x, int y)  //2.7
{
    if (((x + y) >= 10) && ((x + y) <= 19))
    {
        return 20;
    }
    else
    {
        return (x + y);
    }
};

string day(int x)   //2.9
{
    switch (x)
    {
    case 1: return "Monday"; break;
    case 2: return "Thuesday"; break;
    case 3: return "Wednesday"; break;
    case 4: return "Thursday"; break;
    case 5: return "Friday"; break;
    case 6: return "Saturday"; break;
    case 7: return "Sunday"; break;
    default: return "Not the day"; break;
    }
};

string listNums(int x)  //3.1
{
    string s = "";
    for (int i = 0; i <= x; i++)
    {
        string c = to_string(i);
        s = s + c + " ";
    };
    return (s);
};

string chet(int x)  //3.3
{
    string s = "";
    for (int i = 0; i <= x; i += 2)
    {
        string c = to_string(i);
        s = s + c + " ";
    };
    return (s);
};

int numLen(long x)  //3.5
{
    long y;
    int c = 0;
    while (x != 0)
    {
        x = x / 10;
        //cout << x << ' ' << typeid(x).name() << endl;
        c += 1;
    };
    return(c);
};

void square(int x)  //3.7
{
    string s = "";
    for (int i = 0; i < x; i++)
    {
        s = s + "*";
    };
    for (int i = 0; i < x; i++)
    {
        cout << s << endl;
    };
};

void rightTriangle(int x)   //3.9
{
    int y = x;
    for (int i = 0; i < x; i++)
    {
        string s = "";
        for (int j = 0; j < x - i - 1; j++)
        {
            s = s + " ";
        };
        for (; s.length() != x;)
        {
            s = s + "*";
        };
        cout << s << endl;
    };
};

int findFirst(int arr[], int x) //4.1
{
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == x)
        {
            return i;
        };
    };
    return -1;
};

int maxAbs(int arr[])   //4.3
{
    int m = 0;
    for (int i = 0; i < sizeof(arr) - 1; i++)
    {
        if (abs(arr[i]) > abs(m))
        {
            m = arr[i];
        };
        //cout << m << ' ' << arr[i] << ' ' << i << endl;
    };
    return m;
};

int* add(int arr[], int ins[], int pos) //4.5
{
    //размер массива?
    return 0;
};

int* reverseBack(int arr[]) //4.7
{
    //размер массива?
    return 0;
};

int* findAll(int arr[], int x)  //4.9
{
    //размер массива?
    return 0;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choose;
    cout << "Выберете номер задания" << endl << "(Например 11 или 35 (первая цифра номер задания, вторая номер задачи)):" << endl;
    cin >> choose;
    cout << "Вы выбрали " << choose << endl;
    switch (choose)
    {
    case 11:
    {
        double x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << fraction(x) << endl;
    }; break;
    case 13:
    {
        char x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << charToNum(x);
    }; break;
    case 15:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << is2Digit(x);
    }; break;
    case 17:
    {
        int a;
        int b;
        int num;
        cout << "Введите a, b, num:" << endl;
        cin >> a >> b >> num;
        cout << isInRange(a, b, num);
    }; break;
    case 19:
    {
        int a;
        int b;
        int c;
        cout << "Введите a, b, c:" << endl;
        cin >> a >> b >> c;
        cout << isEqual(a, b, c);
    }; break;
    case 21:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << abs_(x);
    }; break;
    case 23:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << is35(x);
    }; break;
    case 25:
    {
        int x;
        int y;
        int z;
        cout << "Введите x, y, z:" << endl;
        cin >> x >> y >> z;
        cout << max3(x, y, z);
    }; break;
    case 27:
    {
        int x;
        int y;
        cout << "Введите x, y:" << endl;
        cin >> x >> y;
        cout << sum2(x, y);
    }; break;
    case 29:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << day(x);
    }; break;
    case 31:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << listNums(x);
    }; break;
    case 33:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << chet(x);
    }; break;
    case 35:
    {
        long x;
        cout << "Введите X:" << endl;
        cin >> x;
        cout << numLen(x);
    }; break;
    case 37:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        square(x);
    }; break;
    case 39:
    {
        int x;
        cout << "Введите X:" << endl;
        cin >> x;
        rightTriangle(x);
    }; break;
    case 41:
    {
        int arr[7] = { 1, 2, 3, 4, 2, 2, 5 };
        int x;
        cout << "Массив" << endl;
        for (int i = 0; i < 7; i++) {
            cout << arr[i] << " ";
        };
        cout << "Введите X" << endl;
        cin >> x;
        cout << findFirst(arr, x);
    }; break;
    case 43:
    {
        int arr[7] = { 1, -2, -7, 4, 2, 2, 5 };
        cout << "Массив" << endl;
        for (int i = 0; i < 7; i++) {
            cout << arr[i] << " ";
        };
        cout << "\n" << maxAbs(arr);
    }; break;
    case 45:
    {
        cout << "not ready" << endl;
    }; break;
    case 47:
    {
        cout << "not ready" << endl;
    }; break;
    case 49:
    {
        cout << "not ready";
    }; break;
    default: cout << "Такого задания я не делал";
    };
    return 0; 
}
