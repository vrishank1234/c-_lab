#include <iostream>
#include <string>

using namespace std;

// Maximum number of products in the inventory
const int MAX_PRODUCTS = 10;

// Product class representing a product in the inventory
class Product {
private:
    int productID;
    string productName;
    float price;
    int quantityInStock;

public:
    // Parameterized constructor to initialize attributes
    Product(int id, const string& name, float p, int quantity)
        : productID(id), productName(name), price(p), quantityInStock(quantity) {}

    // Function to display product information
    void displayProduct() const {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
        cout << "-----------------------------" << endl;
    }

    // Getter for product ID
    int getProductID() const {
        return productID;
    }

    // Function to update the quantity in stock
    void updateQuantity(int quantity) {
        quantityInStock += quantity;
    }
};

// Inventory class managing products using a fixed-size array
class Inventory {
private:
    Product products[MAX_PRODUCTS];
    int numProducts;

public:
    // Default constructor
    Inventory() : numProducts(0) {}

    // Function to add a new product to the inventory
    void addProduct(const Product& product) {
        if (numProducts < MAX_PRODUCTS) {
            products[numProducts++] = product;
        } else {
            cout << "Inventory is full. Cannot add more products." << endl;
        }
    }

    // Function to display all products in the inventory
    void displayInventory() const {
        cout << "Inventory:" << endl;
        for (int i = 0; i < numProducts; ++i) {
            products[i].displayProduct();
        }
    }

    // Function to find a product by ID and return its index
    int findProductIndex(int productID) const {
        for (int i = 0; i < numProducts; ++i) {
            if (products[i].getProductID() == productID) {
                return i;  // Product found, return its index
            }
        }
        return -1;  // Product not found, return -1
    }

    // Function to update the quantity in stock for a specific product
    void updateProductQuantity(int productID, int quantity) {
        int index = findProductIndex(productID);
        if (index != -1) {
            products[index].updateQuantity(quantity);
            cout << "Quantity in stock updated successfully." << endl;
        } else {
            cout << "Product not found." << endl;
        }
    }
};

int main() {
    // Create products
    Product product1(1, "Laptop", 999.99, 10);
    Product product2(2, "Smartphone", 499.99, 20);

    // Create inventory and add products
    Inventory inventory;
    inventory.addProduct(product1);
    inventory.addProduct(product2);

    // Display initial inventory
    inventory.displayInventory();

    // Update quantity in stock for a product based on user input
    int productIDToUpdate;
    int quantityToUpdate;

    cout << "Enter the Product ID to update: ";
    cin >> productIDToUpdate;

    cout << "Enter the quantity to update: ";
    cin >> quantityToUpdate;

    inventory.updateProductQuantity(productIDToUpdate, quantityToUpdate);

    // Display updated inventory
    inventory.displayInventory();

    return 0;
}
