#ifndef __ORDER_H
#define __ORDER_H

#include <vector>
#include "desktop.h"
#include "customer.h"

class Order{
    public:
        Order(Customer& customer);
        Order(std::istream& ist, std::vector<Desktop>& desktops, std::vector<Customer>& customers);
        ~Order();
        int add_product(Desktop& desktop);
        double price() const;
        friend std::ostream& operator<<(std::ostream& os, const Order& order);
		void save(std::ostream& ost, std::vector<Desktop>& desktops, std::vector<Customer>& customers);

    private:
        Customer* _customer;
        std::vector<Desktop*> _products;
};

#endif
