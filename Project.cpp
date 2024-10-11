#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[30];
    int age;
    public:
    virtual void in()
    {
        cout<<"Enter a name : ";
        cin>>name;
        cout<<"Enter a age : ";
        cin>>age;
    }
    virtual void out()
    {
        cout<<name<<" "<<age<<" ";
    }
};
class Book
{
    char book[25];
    public:
    virtual void in()
    {
        cout<<"Enter a book name : ";
        cin>>book;
    }
    virtual void out()
    {
        cout<<book<<" ";
    }
};
class Stream:public Book
{
    char name[30];
    public:
    void in()
    {
        Book::in();
        cout<<"Enter a stream name : ";
        cin>>name;
    }
    void out()
    {
        Book::out();
        cout<<name<<" ";
    }
};
class Publish:public Stream
{
    int year;
    char author[25];
    public:
    void in()
    {
        Stream::in();
        cout<<"Enter of year in book publish : ";
        cin>>year;
        cout<<"Enter a book author name : ";
        cin>>author;
    }
    void out()
    {
        Stream::out();
        cout<<year<<" "<<author<<" ";
    }
};
class Edition:public Publish
{
    char edition[40];
    public:
    void in()
    {
        Publish::in();
        cout<<"Enter a Edition of book : ";
        cin>>edition;
    }
    void out()
    {
        Publish::out();
        cout<<edition<<" ";
    }
};
class Issue:public Edition
{
    int date;
    public:
    void in()
    {
        Edition::in();
        cout<<"Book issue date : ";
        cin>>date;
    }
    void out()
    {
        Edition::out();
        cout<<date<<" ";
    }
};
class Submission:public Issue
{
    int date;
    public:
    void in()
    {
        Issue::in();
        cout<<"Enter a date in return book : ";
        cin>>date;
    }
    void out()
    {
        Issue::out();
        cout<<date<<" ";
    }
};
class Student:public Person,public Submission
{
    int roll;
    public:
    void in()
    {
        Submission::in();
        Person::in();
        cout<<"Enter a roll no : ";
        cin>>roll;
    }
    void out()
    {
        Submission::out();
        Person::out();
        cout<<roll<<" ";
    }
};
int main()
{
    Person *p;
    int choice;
    cout<<"1=issued,2=submission\n";
    cout<<"Enter a choice : ";
    cin>>choice;
    if(choice==1)
    
    p=new Student;
    p->in();
    p->out();
    return 0;
}