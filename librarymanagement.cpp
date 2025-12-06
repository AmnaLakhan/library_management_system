#include <iostream>
using namespace std;
const int max_books = 100;
struct library{
    string title;
    string author;
    string ISBN;
    string status;
};
library N1[100];
int book_count =0;


void return_book() {
    string book_name, ISBN_num;

    cout << "Enter Book name : ";
    cin.ignore();
    getline(cin, book_name);

    cout << "Enter ISBN : ";
    cin >> ISBN_num;

    bool found = false;

    for (int i = 0; i < book_count; i++) {

        if (book_name == N1[i].title && ISBN_num == N1[i].ISBN) {

            if (N1[i].status == "Issued") {
                N1[i].status = "Available";
                cout << "Book returned successfully!\n";
            }
            else {
                cout << "This book was not issued!\n";
            }

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book not found!\n";
    }

    cout << "-------------------\n";
}


void issue_book() {
    string book_name, ISBN_num;

    cout << "Enter Book name : ";
    cin.ignore();
    getline(cin, book_name);

    cout << "Enter ISBN : ";
    cin >> ISBN_num;

    bool found = false;

    for (int i = 0; i < book_count; i++) {
        if (book_name == N1[i].title && ISBN_num == N1[i].ISBN) {

            if (N1[i].status == "Available") {
                N1[i].status = "Issued";
                cout << "Book issued successfully!\n";
            }
            else {
                cout << "This book has already been issued!\n";
            }

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book not found!\n";
    }
    cout<<"-------------------\n";
}



void search_book(){
    string book_name, ISBN_num;
    cout<<"Enter Book name : ";
    cin.ignore();
    getline(cin, book_name);

    cout<<"Enter ISBN : ";
    cin>>ISBN_num;

    bool found = false;

    for(int i = 0; i < book_count; i++){
        if(book_name == N1[i].title && ISBN_num == N1[i].ISBN){
            cout << "Book found";
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Book not found";
    }
    cout<<endl;
    cout<<"-------------------\n";
}


void add_book(){
    if(book_count >= max_books){
        cout<<"library full";
    }
    else{
        int n;
        cout<<"Enter number of books to add :";
        cin>>n;

        for(int i = book_count; i < book_count + n; i++){
            cin.ignore();
            cout<<"Enter book title : ";
            getline(cin, N1[i].title);

            cout<<"Enter author name : ";
            getline(cin, N1[i].author);

            cout<<"Enter ISBN : ";
            cin>>N1[i].ISBN;

            N1[i].status = "Available";   // ✔ set default status

            cout<<"-----------------------\n";
        }

        book_count += n;
        cout<<"There are "<<book_count<<" books in library"<<endl;
        cout<<"----------------------------\n";
    }
}



int main(){
    int choice;
    cout<<"----------------------------\n";
    cout<<"Library management system\n";
    cout<<"----------------------------\n";
    while(choice != 5){
    cout<<"1. Add Books"<<endl;
    cout<<"2. search Books"<<endl;
    cout<<"3. Issue Book"<<endl;
    cout<<"4. Return Book"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
switch(choice){
    case 1:
    add_book();
    break;
    case 2:
    search_book();
    break;
    case 3:
    issue_book();
    break;
    case 4:
    return_book();
    break;
    case 5:
    cout<<"Exit"<<endl;
    break;
}
    }
}