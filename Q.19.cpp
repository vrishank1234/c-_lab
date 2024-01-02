#include <iostream>
#include <string>

using namespace std;

// Maximum number of products in the inventory
const int MAX_PRODUCTS = 10;

// Product class representing a product with attributes name, price, and quantity in stock
class Product {
private:
    string name;
    float price;
    int quantityInStock;

public:
    // Parameterized constructor to initialize attributes
    Product(const string& n, float p, int quantity)
        : name(n), price(p), quantityInStock(quantity) {}

    // Function to display product details
    void displayDetails() const {
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
        cout << "-----------------------------" << endl;
    }

    // Getter for product price
    float getPrice() const {
        return price;
    }

    // Function to add products to the shopping cart
    void addToCart(int quantity) {
        if (quantity <= quantityInStock) {
            cout << quantity << " " << name << "(s) added to the cart." << endl;
            quantityInStock -= quantity;
        } else {
            cout << "Insufficient quantity in stock for " << name << "." << endl;
        }
    }
};

// ShoppingCart class managing a fixed-size array of products in the cart
class ShoppingCart {
private:
    Product cart[MAX_PRODUCTS];
    int numItems;

public:
    // Default constructor
    ShoppingCart() : numItems(0) {}

    // Function to add a product to the cart
    void addToCart(const Product& product, int quantity) {
        if (numItems < MAX_PRODUCTS && quantity > 0) {
            Product productCopy = product;  // Create a copy to avoid modifying the original product
            productCopy.addToCart(quantity);
            cart[numItems++] = productCopy;
        } else {
            cout << "Invalid quantity or shopping cart is full." << endl;
        }
    }

    // Function to calculate the total cost of items in the cart
    float calculateTotalCost() const {
        float totalCost = 0.0;
        for (int i = 0; i < numItems; ++i) {
            totalCost += cart[i].getPrice();
        }
        return totalCost;
    }

    // Function to display the contents of the cart
    void displayCart() const {
        cout << "Shopping Cart:" << endl;
        for (int i = 0; i < numItems; ++i) {
            cart[i].displayDetails();
        }
    }
};

int main() {
    // Create shopping cart
    ShoppingCart cart;

    char addMoreProducts;
    do {
        // Get product details from the user
        string productName;
        float productPrice;
        int productQuantity;

        cout << "Enter product name: ";
        cin >> productName;

        cout << "Enter product price: $";
        cin >> productPrice;

        cout << "Enter product quantity in stock: ";
        cin >> productQuantity;

        // Create product based on user input
        Product newProduct(productName, productPrice, productQuantity);

        // Get quantity to add to the cart
        int quantityToAdd;
        cout << "Enter quantity to add to the cart: ";
        cin >> quantityToAdd;

        // Add the product to the cart
        cart.addToCart(newProduct, quantityToAdd);

        cout << "Do you want to add more products to the cart? (y/n): ";
        cin >> addMoreProducts;
    } while (addMoreProducts == 'y' || addMoreProducts == 'Y');

    // Display cart contents
    cart.displayCart();

    // Calculate and display total cost
    cout << "Total Cost: $" << cart.calculateTotalCost() << endl;

    return 0;
}
