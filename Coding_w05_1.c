#include <stdio.h>
int main() {
    char name = 'P'; //ใช้ char เพื่อเก็บค่าตัวแปรเป็นอักษรตัวแรกของชื่อเป็นตัวอักษรตัวใหญ่
    int age = 18;        //ใช้ int เพื่อเก็บค่าตัวแปรอายุเป็นเลขจำนวนเต็ม
    double weight = 47.5; //ใช้ float เพื่อเก็บค่าตัวแปรน้ำหนักเป็นเลขทศนิยม

    printf("Student %c is %d years old.\n", name, age);//แสดงผลอักษรตัวแรกของชื่อ, อายุ 
    printf("His weighs is %.1f kg.\n", weight);    //แสดงผลน้ำหนัก

    return 0;//คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จแล้ว
}