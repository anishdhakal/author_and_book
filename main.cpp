/*
    Author: Anish Dhakal
    Program: Interactive OOP of Class Author and Book and linking both.
    Date: 03/20/2015
*/

#include <iostream>
#include "book.h"

using namespace std;

int main()
{
    string authorName, emailAddress, bookName;
    int bookPrice, bookQuantity;
    char gender;

    cout<<"Enter the name of author"<<endl;
    getline(cin,authorName);
    cout<<"Enter the email of author"<<endl;
    cin >> emailAddress;
    cin.get();
    cout << "Enter the book name"<<endl;
    getline(cin,bookName);
    cout<<"Enter the gender of author (M/F)"<<endl;
    cin >>gender;
    cout<<"Enter the price of book"<<endl;
    cin >>bookPrice;
    cout<<"Enter the quantity of book in stock"<<endl;
    cin>>bookQuantity;

    Author newAuthor(authorName, gender, emailAddress);
    Book newBook(bookName,newAuthor,bookPrice,bookQuantity);
    cout << newBook.toString();
}
