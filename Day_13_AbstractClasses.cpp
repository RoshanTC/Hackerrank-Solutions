// Write your MyBook class here
    class MyBook:public Book{
    protected:
        int price;
    public:
        MyBook(const string &title, const string &author, int price):Book(title,author),price(price)
        {

        }
    //   Class Constructor
    //
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here

    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    virtual void display(){
        cout << "Title: "<<title<<endl;
        cout << "Author: "<<author<<endl;
        cout << "Price: "<<price;
    }
    };
// End class
