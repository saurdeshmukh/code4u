#include<stdio.h>
#include<conio.h>
struct Book {
    int book_id;
    char title[100];
    float price;
};
typedef struct Book BOOK;

void ChangePrice(BOOK* b){
    b->price = 1.1*b->price;
}

void AccptDetails(struct Book* b){
    printf("Enter Book ID: ");
    scanf("%d", &b->book_id);
    printf("Enter Book Title: ");
    scanf(" %s", &b->title);
    printf("Enter Book Price: ");
    scanf("%f", &b->price); 
}

void DisplayDetails(struct Book b){
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Book Title: %s\n", b.title);
    printf("Book Price: %.2f\n", b.price);
}

int main()
{
    
    BOOK b1;
    AccptDetails(&b1);
    DisplayDetails(b1);
    ChangePrice(&b1);
    printf("\nAfter price change:\n");
    DisplayDetails(b1);
    getch();
    return 0;
}
