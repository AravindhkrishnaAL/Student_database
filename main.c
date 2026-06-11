#include "header.h"

void display_menu() {
    printf("\n");
    printf("  ======================================================\n");
    printf("  ||               STUDENT RECORD SYSTEM              ||\n");
    printf("  ======================================================\n");
    printf("  ||  [ DATA MANAGEMENT ]                               ||\n");
    printf("  ||     A : Add New Student Record                     ||\n");
    printf("  ||     D : Delete A Specific Record                   ||\n");
    printf("  ||     M : Modify Existing Record                     ||\n");
    printf("  ||                                                    ||\n");
    printf("  ||  [ LIST OPERATIONS ]                               ||\n");
    printf("  ||     S : Show Tabular Database List                 ||\n");
    printf("  ||     T : Sort List (Name / Percentage)              ||\n");
    printf("  ||     R : Reverse Entire List Order                  ||\n");
    printf("  ||                                                    ||\n");
    printf("  ||  [ SYSTEM & MAINTENANCE ]                          ||\n");
    printf("  ||     V : Save Data to Disk                          ||\n");
    printf("  ||     L : Wipe/Delete All Records                    ||\n");
    printf("  ||     E : Exit Application                           ||\n");
    printf("  ======================================================\n");
    printf("  >> Enter Your Choice: ");
}
int main() {
    char choice;
    char name1[30];
    float  mark1;
    st* head = NULL; 
    load(&head);
    while(1) {
        display_menu();
        
        // Read character and instantly clear trailing newline or spaces
        scanf(" %c", &choice); 
        
        switch(choice) {
            case 'A': case 'a':
               printf("Enter the data:\n");
               scanf(" %s%f",name1,&mark1); 
               add(&head,name1,mark1);
                break;
            case 'D': case 'd':
                del(&head);
                break;
            case 'S': case 's':
                print(head);
                break;
            case 'M': case 'm':
                mod(head);
                break;
            case 'V': case 'v':
                save(head);
                break;
            case 'T': case 't':
                sort(&head);
                break;
            case 'L': case 'l':
                del_all(&head);
                break;
            case 'R': case 'r':
                rev(&head);
                break;
            case 'E': case 'e':
                printf("\nExiting System. Goodbye!\n");
                return 0;
            default:
                printf("\n [!] Invalid Choice. Please try again.\n");
        }
    }
    return 0;
}
