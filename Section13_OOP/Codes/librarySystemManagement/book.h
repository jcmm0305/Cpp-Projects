#ifndef LIBRARY_MANAGEMENT_BOOK_H
#define LIBRARY_MANAGEMENT_BOOK_H
#include<string>

/*Notes:
*/

class Book{

    private:
        std::string isbn;
        std::string title;
        std::string author;
        std::string pDate; //Published date
                int    id;
        static int next_id;
    
    public:
        //Constructor Declaration
        Book(std::string isbn_val, std::string title_val, std::string author_val, std::string Pdate_val);
        //Copy Constructor
        //Book(const Book &source);
        //Methods
        const std::string& get_isbn() const;
        const std::string& get_title() const;
        const std::string& get_author() const;
        const std::string& get_publishedDate() const;
                    const int get_id() const;
        //Destructor
        //~Book();
};

#endif