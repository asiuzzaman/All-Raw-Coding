#include<bits/stdc++.h>
using namespace std;
class Book{
public:
string description, author, name, price;

    Book(){
    }
Book(string d, string a,string p,string n){
   description=d;
   author=a;
   price=p;
   name=n;
}
};
class library{
      int No_of_books;
      string Stuff_name[10];
      Book *book[100];
  public:
    library(){

        No_of_books=0;
    }
    void addBook(){
    Book ob;
    cout<<"Enter name of the book\n";
    cin>>ob.name;
    cout<<"Enter Author"<<endl;
    cin>>ob.author;
    cout<<"Enter book Description"<<endl;
    cin>>ob.description;
    book[No_of_books]=&ob;
    No_of_books++;
    }
};
int main()
{
    library Cuet_library;
    while(1)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            Cuet_library.addBook();
        }
    }

    return 0;
}
