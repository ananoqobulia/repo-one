#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    
// დაწერე პროგრამა, რომელიც იპოვის სამი რიცხვიდან მაქსიმალურს, რიცხვები შეიტანე cin ბრძანებით

    int number_a, number_b, number_c;
    
    cout << "enter number_a: ";
    cin >> number_a;
    
    cout << "enter number_b: ";
    cin >> number_b;
   
    cout << "enter number_c: ";
    cin >> number_c;
    
    if ((number_a > number_b ) && (number_a > number_c)) {
        cout << "number_a is the greatest" << endl;
    } 
     else if ((number_b > number_a) && (number_b > number_c)) {
        cout << "number_b is the greatest" << endl;
        
    }
     else if ((number_c > number_a) && (number_c > number_b)) {
        cout << "number_c is the greatest" << endl;
        
    } 
    else {
       cout << "numbers are equal " << endl;
    }
    
// დაწერე პროგრამა, რომელიც იპოვის წრეწირის ფართობს, რადიუსის შესატანად გამოიყენე cin ბრძანება

   int r; 
   
    cout << "enter r "; 
    cin >> r;
    cout << "Circumferential area : "  <<  (3.14 *(r*r))  <<endl;
    
    
// დაწერე პროგრამა, რომელიც გადაიყვანს ფარენჰეიტიდან ცელსიუსში და პირიქით, მონაცემების შესატანად გამოიყენე cin ბრძანება
 
 float F, C;
 cout << "enter temperature  F: ";
 cin>> F;
 cout << "F to C: " << (F - 32) * (5/9) << endl; 
 cout << "enter temperature C: ";
 cin >> C;
 cout << "C to F: " << (C * (9/5) + 32) << endl;
 
 // დაწერე ნაკიანი წელიწადის ამომცნობი პროგრამა
 
 int year;
  cout << "Enter a year: ";
  cin >> year;
  
  if (year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  else if (year % 100 == 0) {
    cout << year << " is not a leap year.";
  }
  else if (year % 4 == 0) {
    cout << year << " is a leap year.";
  }
  else {
    cout << year << " is not a leap year." << endl;
  }
  
 // დაწერე პროგრამა, რომელიც იპოვის ორ წერტილს შორის მანძილს, (x1, y1) და (x2, y2) მნიშვნელობებს მოხმარებელი შეიტანს cin ბრძანებით

   
  int x1, x2, y1, y2;
   
   cout << "Enter x1 : ";
   cin >> x1;
   cout << "Enter y1 : ";
   cin >> y1;
   cout << "Enter x2 : ";
   cin >> x2;
   cout << "Enter y2 : ";
   cin >> y2;
    
    cout << "the distance between the elements: " << sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))) << endl; 

  
// დაწერე კვადრატული განტოლების ამოსახსნელი პროგრამა. a, b და c-ს მოხმარებელი შეიტანს cin ბრძანებით. ფესვისამოსაღებად გამოიყენე sqrt ფუნქცია

float a, b, c, e1, e2, discriminant;

cout <<  " შეიყვანეთ  a, b, c ";
cin >> a >> b >> c;
discriminant = b*b - 4*a*c;

if (discriminant < 0 ) {
    cout << " განტოლება ვერ ამოიხსნება " << endl;
}
else if (discriminant == 0) {
    e1 = -b/(2*a);
    cout << "e1 = e2 =" << e1 << endl;
}
else  {
    e1 = (-b + sqrt(discriminant)) / (2*a);
    e2 = (-b - sqrt(discriminant)) / (2*a);
    cout << " e1: " << e1 << endl;
    cout << " e2: " << e2 << endl;
}



// კალკულატორის პროგრამა switch statement-ის გამოყენებით. 

float a1, b1;
cout << "enter a1";
cin >> a1;

char oper;
cout << "Enter oper (+,-,*,/) : ";
cin >> oper;

cout << "enter b1";
cin >> b1;

switch (oper) {
    
    case '*':
    cout << " a1 * b1 = " << a1 * b1;
    break;
    
    case '/':
    cout << "a1 / b1 = " << a1 / b1; 
    break;
    
    case '+':
    cout << "a1 + b1 = " << a1 + b1;
    break;
    
    case '-':
    cout << "a1 - b1 = " << a1 - b1;
    break;
    
}

    return 0;
}
