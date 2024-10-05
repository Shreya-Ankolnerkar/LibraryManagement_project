#include<iostream>
using namespace std;

class library
{

   public:

   int idno;
   string bookname;
   string authorname;
   int price;
   string flag;        //Indicating whether the book is issued or not
   string stdname;
   string yn;
   int rollno;
   int id;

   void addbook(){
    
    cout<<"Enter Book ID no. :"<<endl;
    cin>>idno;

    cout<<"Enter Book name (cover gap with underscore):"<<endl;
    cin>>bookname;

    cout<<"Enter Author's name(cover gap with underscore) :"<<endl;
    cin>>authorname;

    cout<<"Enter the price of that particular book :"<<endl;
    cin>>price;

    cout<<"Book issued(yes or no) :"<<endl;
    cin>>flag;

    cin.ignore();

   }

   void bookinfo(){
    cout<<" "<<endl;
    cout<<"DISPLAY BOOK INFORMATION"<<endl;
    cout<<"ID no.of Book is "<<idno<<endl;
    cout<<"Title of Book is "<<bookname<<endl;
    cout<<"Author of Book is "<<authorname<<endl;
    cout<<"Price of Book is "<<price<<endl;
    cout<<"Book issued status -> "<<flag<<endl;

   }


  void athname(){
        
    cout<<"ID no.of Book is "<<idno<<endl;
    cout<<"Title of Book is "<<bookname<<endl;
    cout<<"Author of Book is "<<authorname<<endl;
    cout<<"Price of Book is "<<price<<endl;
    cout<<"Book issued status -> "<<flag<<endl;

  }

  void stdinfo(){
   cout<<"Enter Student's name :"<<endl;
   cin>>stdname;
   cout<<"Enter roll no.:"<<endl;
   cin>>rollno;
   cout<<"Want to issue book or not :"<<endl;
   cin>>yn;
   cout<<"Issued Books ID :"<<endl;
   cin>>id;

  }
       
   
};


int main (){

    library lb[100];
    int count=0;
    string aa,bb;
    cout<<"                                    ------------------LIBRARY MANAGEMENT SYSTEM------------------"<<endl;
       while(true) 
       {
        cout<<"                               ======================================================================="<<endl;
        cout<<"Press 1 for add book information :"<<endl;
        cout<<"Press 2 for display book information :"<<endl;
        cout<<"Press 3 for list of all books of given author :"<<endl;
        cout<<"Press 4 for list the count of books in the library :"<<endl;
        cout<<"Press 5 for list the title of specified book :"<<endl;
        cout<<"Press 6 for Student's book Information :"<<endl;
        cout<<"Press 7 for EXIT :"<<endl;

        int a;
        cin>>a;

        switch(a)
        {
        case 1:
        lb[count].addbook();
        count++;
        break;

        case 2:
        for(int i=0;i < count;i++)
        lb[i].bookinfo();
        break;
            
        case 3:
        cout<<"Enter Author's name: ";                           
        cin>>aa;
        for(int i=0;i < count;i++)
        lb[i].athname();
        break;

        case 4:
        cout<<count;
        break;

        case 5:
        cout<<"Enter  the Title of the Book :";
        cin>>bb;
        for(int i=0;i<count;i++)
        lb[i].bookinfo();
        break;

        case 6:
        for(int i=0;i < count;i++)
        lb[i].stdinfo();
        break;

        case 7:
        exit (0);
        break;

        default:
        cout<<"Invalid entry !";


       }
}

}