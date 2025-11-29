#include <stdio.h>
struct Address {
    char city[20];
    int pincode;
};

struct Student{
    char name[30];
    int roll_no;
    struct Address addr; // nested structure
};

int main() {
    struct Student s1={"Rahul", 101,{"Bangalore", 560001}};
    printf("%s-%d-%s-%d", s1.name,s1.roll_no,s1.addr.city,s1.addr.pincode);
    return 0;
}