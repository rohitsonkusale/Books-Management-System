using namespace std;
#include <iostream>
#include <iomanip>

struct Book{
	int bid;
	char bname[40];
	char author[40];
	double price;
	double rating;
	
	//default constructor-------------------------------------
	Book(){
		this->bid = 0;
		strcpy(this->bname, "Not Given");
		strcpy(this->author, "Not Given");
		this->price = 0.00;
		this->rating = 0.0;
	}
	
	//parameterised constructor-------------------------------------
	Book(int id, char* bname, char* author, double price, double rating){
		this->bid = id;
		strcpy(this->bname,bname);
		strcpy(this->author,author);
		this->price = price;
		this->rating = rating;
	}
	
	//setters-------------------------------------------
	void setId(int id){
		this->bid = id;
	}
	void setName(char* name){
		strcpy(this->bname, name);
	}
	void setAuthor(char* author){
		strcpy(this->author, author);
	} 
	void setPrice(double price){
		this->price = price;
	}
	void setRating(double rating){
		this->rating = rating;
	}
	
	//Getters--------------------------------------------------
	int getId(){
		return this->bid;
	}
	char* getName(){
		return this->bname;
	}
	char* getAuthor(){
		return this->author;
	}
	double getPrice(){
		return this->price;
	}
	double getRating(){
		return this->rating;
	}
	
	
	
	
	//Hard Code Store Function-----------------------------------------
	
	
	//Display Function------------------------------------------------------------
	void display(Book* arr, int size) {
        // Display table header
        cout << "\n\n------------------------------------------------------------------------------------------------------------------------\n";
        cout<< " Book Id     |	" << "	Name	    	 |"<< "	     Author		 |"<< "	Price		    |"<< "   Rating\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";

        // Display each book in a row
        for (int i = 0; i < size; i++) {
            cout << "     " << setw(8) << left << arr[i].getId() << "|   " << setw(24) << left << arr[i].getName() << "|  	 " << setw(24) << left << arr[i].getAuthor() << "| 	  " << setw(18) << left << arr[i].getPrice() << "|   " << arr[i].getRating() << "\n";
            cout << "------------------------------------------------------------------------------------------------------------------------\n";
        }
    }
	
	
};


void update_list(Book* arr, int size) {
    int c;
    cout << "Press 0 to update price or Press 1 to update rating: ";
    cin >> c;

    if (c == 0) {
        int flag = 0;
        int i = 0;
        int id;
        cout << "Enter id you want to update: ";
        cin >> id;

        for (i = 0; i < size; i++) {
            if (arr[i].getId() == id) {
                cout << "Update price of book: ";
                cin >> arr[i].price;
                flag++;
                break;
            }
        }

        cout << "\n\n------------------------------------------------------------------------------------------------------------------------\n";
        cout<< " Book Id     |	" << "	Name	    	 |"<< "	     Author		 |"<< "	Price		    |"<< "   Rating\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";

        // Display each book in a row
        for (int i = 0; i < size; i++) {
            cout << "     " << setw(8) << left << arr[i].getId() << "|   " << setw(24) << left << arr[i].getName() << "|  	 " << setw(24) << left << arr[i].getAuthor() << "| 	  " << setw(18) << left << arr[i].getPrice() << "|   " << arr[i].getRating() << "\n";
            cout << "------------------------------------------------------------------------------------------------------------------------\n";
        }

    } else if (c == 1) {
        int flag = 0;
        int i = 0;
        int id;
        cout << "Enter id you want to update: ";
        cin >> id;

        for (i = 0; i < size; i++) {
            if (arr[i].getId() == id) {
                cout << "Enter the rating of book: ";
                cin >> arr[i].rating;
                flag++;
                break;
            }
        }

        cout << "\n\n------------------------------------------------------------------------------------------------------------------------\n";
        cout<< " Book Id     |	" << "	Name	    	 |"<< "	     Author		 |"<< "	Price		    |"<< "   Rating\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";

        // Display each book in a row
        for (int i = 0; i < size; i++) {
            cout << "     " << setw(8) << left << arr[i].getId() << "|   " << setw(24) << left << arr[i].getName() << "|  	 " << setw(24) << left << arr[i].getAuthor() << "| 	  " << setw(18) << left << arr[i].getPrice() << "|   " << arr[i].getRating() << "\n";
            cout << "------------------------------------------------------------------------------------------------------------------------\n";
        }

    } else {
        cout << "Invalid Choice!!";
    }
}

void store(Book* arr, int size){
		
	for(int i=0; i<size; i++){
		cout<<"Enter the id of book: ";
		fflush(stdin);
		cin>>arr[i].bid;
		
		cout<<"Enter the name of book: ";
		fflush(stdin);
		cin>>arr[i].bname;
		
		cout<<"Enter the author of book: ";
		fflush(stdin);
		cin>>arr[i].author;
		
		cout<<"Enter the price of book: ";
		fflush(stdin);
		cin>>arr[i].price;
		
		cout<<"Enter the rating of book: ";
		fflush(stdin);
		cin>>arr[i].rating;
		
		printf("\n");
	}
}

void search(Book* arr, int size){
	int a;
	cout<< "press 0 to search by id || press 1 to search by Book Name: ";
	cin>> a;
	
	int i=0;
	if(a == 0){
		
		int flag = 0;
		int id;
		cout<< "\nEnter id you want to search: ";
		cin>> id;
		
		for (i = 0; i < size; i++) {
            if (arr[i].getId() == id) {
                cout << "\n\n------------------------------------------------------------------------------------------------------------------------\n";
		        cout<< " Book Id     |	" << "	Name	    	 |"<< "	     Author		 |"<< "	Price		    |"<< "   Rating\n";
		        cout << "------------------------------------------------------------------------------------------------------------------------\n";
	            cout << "     " << setw(8) << left << arr[i].getId() << "|   " << setw(24) << left << arr[i].getName() << "|  	 " << setw(24) << left << arr[i].getAuthor() << "| 	  " << setw(18) << left << arr[i].getPrice() << "|   " << arr[i].getRating() << "\n";
	            cout << "------------------------------------------------------------------------------------------------------------------------\n";
                flag++;
                break;
            }
		}
	}
	else if(a == 1){
		
		int flag = 0;
		char book_name[30];
		cout<< "Enter the book name: ";
		fflush(stdin);
		//cin>> book_name;
		gets(book_name);
		
		for (i = 0; i < size; i++) {
            if (strcmp(arr[i].getName(), book_name) == 0) {
                cout << "\n\n------------------------------------------------------------------------------------------------------------------------\n";
		        cout<< " Book Id     |	" << "	Name	    	 |"<< "	     Author		 |"<< "	Price		    |"<< "   Rating\n";
		        cout << "------------------------------------------------------------------------------------------------------------------------\n";
	            cout << "     " << setw(8) << left << arr[i].getId() << "|   " << setw(24) << left << arr[i].getName() << "|  	 " << setw(24) << left << arr[i].getAuthor() << "| 	  " << setw(18) << left << arr[i].getPrice() << "|   " << arr[i].getRating() << "\n";
	            cout << "------------------------------------------------------------------------------------------------------------------------\n";
                flag++;
                break;
            }
        }
        
    } 
	else {
        cout << "\n";
        cout << "Invalid Input!!";
    }
}


Book* delete_book(Book* arr, int* size) {
    int a;
    cout << "Press 0 to delete by ID or 1 to delete by Book Name: ";
    cin >> a;
    int flag = 0;

    if (a == 0) {
        int id;
        cout << "Enter the ID number you want to delete: ";
        fflush(stdin);
        cin>> id;
///	        this[i].setId(id);

        for (int i = 0; i < *size; i++) {
            if (arr[i].getId() == id) {
                for (int j = i; j < (*size - 1); j++) {
                    arr[j] = arr[j + 1];
                }
                flag++;
                i--;
                (*size)--;
            }
        }
    } else if (a == 1) {
        char book_name[40];
        cout << "Enter the book name: ";
        fflush(stdin);
        gets(book_name);
///	        cin>> this[i].setName(book_name);

        int i = 0;
        for (i = 0; i < *size; i++) {
            if (strcmp(arr[i].getName(), book_name) == 0) {
                for (int j = i; j < *size - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                flag++;
                i--;
                (*size)--;
            }
        }
    }

    if (flag) {
        arr = (Book*)realloc(arr, sizeof(Book) * (*size));
        cout << "\n\n-*-*-*-*-Book Deleted Successfully!!-*-*-*-*-\n\n";
    } else {
        cout << "Book not found in the Database\n";
    }

    return arr;
}


void Top_Priced(Book* arr, int size) {
    int i = size - 1;
    int j = 0;
    while (i > 0) {
        j = 0;
        while (j < size - 1) {
            if (arr[j].getPrice() < arr[j + 1].getPrice()) {
                Book temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i--;
    }
    cout << "\n\n-*-*-*-*- High - Priced  Books -*-*-*-*-\n";

    cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
    cout<< " Book Id     |	" << "	Name	    	 |"<< "	     Author		 |"<< "	Price		    |"<< "   Rating\n";
    cout << "------------------------------------------------------------------------------------------------------------------------\n";

    // Display each book in a row
    for (int i = 0; i < 3; i++) {
        cout << "     " << setw(8) << left << arr[i].getId() << "|   " << setw(24) << left << arr[i].getName() << "|  	 " << setw(24) << left << arr[i].getAuthor() << "| 	  " << setw(18) << left << arr[i].getPrice() << "|   " << arr[i].getRating() << "\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";
    }
}


void Top_Rated(Book* arr, int size){
	
	int i = size-1;
    int j=0;
    while (i > 0) {
        j=0;
        while (j < size-1) {
            if (arr[j].rating < arr[j + 1].rating) {
                Book temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i--;
    }
    cout << "\n\n-*-*-*-*- High - Rated  Books -*-*-*-*-\n";
	
	cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
    cout<< " Book Id     |	" << "	Name	    	 |"<< "	     Author		 |"<< "	Price		    |"<< "   Rating\n";
    cout << "------------------------------------------------------------------------------------------------------------------------\n";

    // Display each book in a row
    for (int i = 0; i < 3; i++) {
        cout << "     " << setw(8) << left << arr[i].getId() << "|   " << setw(24) << left << arr[i].getName() << "|  	 " << setw(24) << left << arr[i].getAuthor() << "| 	  " << setw(18) << left << arr[i].getPrice() << "|   " << arr[i].getRating() << "\n";
        cout << "------------------------------------------------------------------------------------------------------------------------\n";
    }
}

void StoreH(Book* arr, int size) {
    arr[0].setId(1);
    arr[0].setName("2 States");
    arr[0].setAuthor("Chetan Bhagat");
    arr[0].setPrice(364.65);
    arr[0].setRating(4.0);

    arr[1].setId(2);
    arr[1].setName("The Secret");
    arr[1].setAuthor("Rhonda Byrne");
    arr[1].setPrice(450.68);
    arr[1].setRating(4.5);

    arr[2].setId(3);
    arr[2].setName("Can Love Happen Twice?");
    arr[2].setAuthor("Ravinder Singh");
    arr[2].setPrice(350.00);
    arr[2].setRating(4.3);

    arr[3].setId(4);
    arr[3].setName("Fault in our stars");
    arr[3].setAuthor("John Green");
    arr[3].setPrice(291.00);
    arr[3].setRating(4.5);

    arr[4].setId(5);
    arr[4].setName("Ikigai");
    arr[4].setAuthor("Hector Garia");
    arr[4].setPrice(589.65);
    arr[4].setRating(4.6);
}


void Add_data(Book* arr, int* size) {
//	arr = (Book*)realloc(arr,sizeof(Book)*(*size+1));
   Book* narr=new Book[(*size+1)];
	
    cout<<"Enter the id of the book: ";
	int id;
	cin>> id;
	arr[*size].setId(id);

    cout<< "Enter the name of the book: ";
    char name[30];
    cin >> name;
    arr[*size].setName(name);

    cout << "Enter the author of the book: ";
    char author[30];
	cin >> author;
	arr[*size].setAuthor(author);

    cout << "Enter the price of the book: ";
    double price;
    cin >> price;
    arr[*size].setPrice(price);

    cout << "Enter the rating of the book: ";
    double rating;
    cin >> rating;
    arr[*size].setRating(rating);
	

//    delete[] arr; 
    (*size)++;
    cout << "\nBook Added Successfully\n";
}

int main(){
	
	
	int size=5;
//	printf("Enter the size of array: ");
//	scnaf("%d", &size);
	Book* arr = new Book[size];
	
	
	int exit = 1;
	
	Book* b1 = new Book;
	StoreH(arr, size);
	do {
		
		int choices;
		cout << "\n\n------------------------------------------------------------------------------------------------------------------------";
        cout << "                   ||              -*-*-*-*-Books Management System-*-*-*-*-          		||\n";
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << "\n                   ||	1. Store Data       	  	||          2. Display Books		||\n\n";
        cout << "                   ||	3. Search Books     	  	||          4. Delete Books		||\n\n";
        cout << "                   || 	5. High-Priced Books  		||          6. Top-Priced Books		||\n\n";
        cout << "                   ||	7. Update Data        		||          8. Add Books		||\n";
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << "\n\nEnter: ";
		cin>>choices;
		          
	    switch(choices) {
	        case 1: 
	            //store(arr, 5);
	            break;
	        
	        case 2:
	            cout<<"\n";
	            b1->display(arr, size);
	            break;
	            
	        case 3:
	            cout<<"\n";
	            search(arr, size);
	            break;
	            
	        case 4:
	            printf("\n");
	            arr = delete_book(arr, &size);
	            break;
	        
	        case 5:
	            printf("\n");
	            Top_Priced(arr, size);
	            break;
	            
	        case 6:
	            printf("\n");
	            Top_Rated(arr, size);
	            break;
	        
	        case 7:
	        	printf("\n");
	        	update_list(arr,size);
	        	break;
	        
	        case 8:
	        	printf("\n");
	        	Add_data(arr,&size);
	        	break;
	        	
	        default:
	            printf("\nInvalid choice. Please enter a valid option.\n");
	            break;   
	    }
	    printf("\nTo Continue press '1' To Exit press '0':  ");
	    scanf("%d",&exit);
	} while(exit == 1);
		free(arr);

}
	
	
//	return 0;

