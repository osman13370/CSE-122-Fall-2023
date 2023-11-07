
#quiz01





#include <iostream>
using namespace std;

class Array {
private:
    int integerArray[100];
    char characterArray[100];
    double floatArray[100];
    int intIndex = 0;
    int charIndex = 0;
    int floatIndex = 0;

public:

    void insert(int index, int value) {
        if (index >= 0 && index <= intIndex){
            integerArray[index] = value;
            intIndex++;
        }
    }

    void insert(int index, char value) {
        if (index >= 0 && index <= charIndex){
            characterArray[index] = value;
            charIndex++;
        }
    }


    void insert(int index, double value) {
        if (index >= 0 && index <= floatIndex){
            floatArray[index] = value;
            floatIndex++;
        }
    }


    void display() {

        for (int i = 0; i < intIndex; i++) {
            cout << integerArray[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < charIndex; i++) {
            cout << characterArray[i] << " ";
        }
        cout<<endl<<endl;

        for (int i = 0; i < floatIndex; i++) {
            cout << floatArray[i] << " ";
        }
        cout<<endl<<endl;
    }
};

int main() {
    Array arr1;

    arr1.insert(0, 10);
    arr1.insert(1, 20);
    arr1.insert(2, 30);

    arr1.insert(0, 'a');
    arr1.insert(1, 'b');
    arr1.insert(2, 'c');

    arr1.insert(0, 1.1);
    arr1.insert(1, 1.2);

    arr1.display();

    return 0;
}







#quiz02





#include <iostream>
using namespace std;

void bigger(int n)
{
    if(n==1)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c)cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
    else if(n==2)
    {
        char a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c)cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
    else if(n==3)
    {

        float a,b,c;
        cin>>a>>b>>c;
        if (a >= b && a >= c) cout<<a;
        else if (b >= a && b >= c) cout<<b;
        else cout<<c;
    }
}

int main()
{
    cout<<"Enter 1 for integer"<<endl<<"Enter 2 for character"<<endl<<"Enter 3 for float"<<endl;
    int n;
    cin>>n;
    bigger(n);

    return 0;
}
