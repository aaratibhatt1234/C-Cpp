#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<limits>
using namespace std;



class library
{
    int bookid;
    char bookname[100];
    char author[100];
    char student[100];
    int price;
    int pages;
    public:
    void getdata()
    {
        cout<<"Enter the book id:";
        cin>>bookid;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Enter the book name:";
        cin.getline(bookname,100);
        cout<<"Enter the author name:";
        cin.getline(author,100);
        cout<<"Enter the student name:";
        cin.getline(student,100);
        cout<<"Enter the price of the book:";
        cin>>price;
        cout<<"Enter the number of pages in the book:";
        cin>>pages;

    }
    void display()
    {
        cout<<"Book id:"<<bookid<<endl;
        cout<<"Book name:"<<bookname<<endl;
        cout<<"Author name:"<<author<<endl;
        cout<<"Student name:"<<student<<endl;
        cout<<"Price of the book:"<<price<<endl;
        cout<<"Number of the page in the book:"<<pages<<endl;
    }
    int searchbookid(int id)
    {
        if(bookid==id)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
    int searchname(char name[])
    {
        if(strcmp(bookname,name)==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int searchauthorname(char authorname[])
    {
        if(strcmp(author,authorname)==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int searchstudentname(char studentname[])
    {
        if(strcmp(student,studentname)==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int searchprice(int prices)
    {
        if (price==prices)
        {
            return 1;
        }
        else {
            return 0;
        }
    }
    int searchpages( int page)
    {
        if (pages==page)
        {
            return 1;
        }
        else {
            return 0;
        }

    } };
    int main() 


    {
        library l1;
        l1.getdata();
        l1.display();
        int id;
        char name[100];
        char authorname[100];
        char studentname[100];
        int prices;
        int page;
        cout<<"Enter the book id to search:";
        cin>>id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if(l1.searchbookid(id))
        {
            cout<<"Book found with id:"<<id<<endl;
        }
        else
        {
            cout<<"Book not found with id:"<<id<<endl;
        }
        cout<<"Enter the book name to search:";
        cin.getline(name,100);
        if(l1.searchname(name))
        {
            cout<<"Book found with name:"<<name<<endl;
        }
        else
        {
            cout<<"Book not found with name:"<<name<<endl;
        }
        cout<<"Enter the author name to search:";
        cin.getline(authorname,100);
        if(l1.searchauthorname(authorname))
        {
            cout<<"Book found with author name:"<<authorname<<endl;
        }
        else
        {
            cout<<"Book not found with author name:"<<authorname<<endl;
        }
         cout<<"Enter the student name to search:";
         cin.getline(studentname,100);
         if(l1.searchstudentname(studentname))
         {
             cout<<"Book found with student name:"<<studentname<<endl;
         }
         else
         {
             cout<<"Book not found with student name:"<<studentname<<endl;
         }
         cout<<"Enter the price of the book to search:";
         cin>>prices;
         if(l1.searchprice(prices))
         {
             cout<<"Book found with price:"<<prices<<endl;
         }
         else
         {
             cout<<"Book not found with price:"<<prices<<endl;
         }
          cout<<"Enter the number of pages in the book to search:";
          cin>>page;
          if(l1.searchpages(page))
          {
              cout<<"Book found with number of pages:"<<page<<endl;
          }
          else
          {
              cout<<"Book not found with number of pages:"<<page<<endl;
          }
          return 0;

    }
    
        



