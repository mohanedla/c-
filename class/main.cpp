#include <iostream>
#include <string>;
using namespace std;
class purchases {
private:
    int day, month, year;
    string name;
    string purchase[1000];
    float price[1000];
public:
    purchases() {}
    ~purchases() {}
    int read();
    int daily(int n);
    void display(int n);
};

int purchases::read(){
    cout << "Enter Day:\t"; cin >> day;
    cout << "Enter month:\t"; cin >> month;
    cout << "Enter year:\t"; cin >> year;
    cin.ignore();

    int n; cout << "Enter How Many Purchases:\t"; cin >> n;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter purchases:\t";
        getline(cin, purchase[i]);
        cout << "Enter Price:\t";
        cin>>price[i];
    }
    return n;
}
int purchases::daily(int n){

    int sum=0;
    for (int i = 0; i < n; i++) {
        sum+=price[i];
    }
    return sum;
}
void purchases::display(int n) {
    cout<<"\n-------------------------------------------------------------\n";
    cout<<"Date is =>\t"<<day<<"/"<<month<<"/"<<year<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"purchase is => \t"<<purchase[i]<<endl;
        cout<<"price is => \t"<<price[i]<<endl;
    }
}

int main()
{
    int m;
    string name,pass;
    cout << "Enter name:\t"; getline(cin, name);
    p:
    cout << "Enter Password:\t"; getline(cin, pass);
    if(pass=="12345"){
    cout<<"Enter Number:\t";cin>>m;
    int num[m];
    purchases pure[m];
    for (int i = 0; i < m; i++) {
    num[i]=pure[i].read();
    }
    cout<<"name is => \t"<<name<<endl;
    for (int i = 0; i < m; i++) {
    pure[i].display(num[i]);
    cout<<"Daily is => \t"<<pure[i].daily(num[i]);
    }
    int sum=0;
    for (int i = 0; i < m; i++) {
        sum+=pure[i].daily(num[i]);
    }
    cout<<"\nMonthly is => \t"<<sum;
    }
    else {
        cout<<"Wrong Password!"<<endl;
        goto p;
    }
    return 0;
}
