#include <iostream>
using namespace std;

class Book {
private:
    string title;
    double price;

public:
	
    Book(string t, double p) {
        title = t;
        price = p;
    }

    string getTitle() {
        return title;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double p) {
        if (p > 0) {     
            price = p;
        } else {
            cout << "Invalid price!" << endl;
        }
    }
};

int main() {
    
    Book b("Harry Potter", 1500);
    cout<<"Price Before update: "<<b.getPrice()<<endl;
    
	b.setPrice(1800);
    cout << "Updated Price: " << b.getPrice() << endl;

    return 0;
}

