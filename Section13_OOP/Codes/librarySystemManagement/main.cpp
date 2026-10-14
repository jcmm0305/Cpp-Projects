#include "library.h"
#include "book.h"
#include "interface.h"


int main(){
    
    Library Library1;
    
    Book book1("A12345", "Aura", "Carlos Fuentes", "1969");
    Book book2("B12345", "Cien años de Soledad", "Gabriel Garcia Marquez", "1967");
    Book book3("C12345", "Pedro Páramo", "Juan Rulfo", "1955");

    Library1.addBook(book1);
    Library1.addBook(book2);
    Library1.addBook(book3);

    display_catalog(Library1);

    display_book(book1);
    display_book(book2);
    display_book(book3);








    return 0;
}