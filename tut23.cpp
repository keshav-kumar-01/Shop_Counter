#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    int totalPrice; 

public:
    Shop() : counter(0), totalPrice(0) {} 
    void initCounter() { counter = 0; }
    void setPrice();
    void displayPrice();
    void calculateTotalPrice(); 
};

void Shop::setPrice()
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    totalPrice += itemPrice[counter]; 
    counter++;
}

void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

void Shop::calculateTotalPrice()
{
    cout << "Total price of all items: " << totalPrice << endl;
}

int main()
{
    Shop dukan;
    dukan.initCounter();

    char choice;
    do {
        dukan.setPrice();

        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    dukan.displayPrice();
    dukan.calculateTotalPrice(); 

    return 0;
}
