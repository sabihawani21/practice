using System;

class Program
{
    static void Main()
    {
        int choice;
        do
        {
            Console.WriteLine("===== MAIN MENU =====");
            Console.WriteLine("1. Basic Arithmetic Operations");
            Console.WriteLine("2. Even or Odd Checker");
            Console.WriteLine("3. Temperature Converter");
            Console.WriteLine("4. Simple Calculator");
            Console.WriteLine("5. Find the Largest Number");
            Console.WriteLine("6. Grade Calculator");
            Console.WriteLine("0. Exit");
            Console.Write("Enter your choice: ");
            choice = Convert.ToInt32(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    ArithmeticOperations();
                    break;
                case 2:
                    EvenOddChecker();
                    break;
                case 3:
                    TemperatureConverter();
                    break;
                case 4:
                    SimpleCalculator();
                    break;
                case 5:
                    FindLargestNumber();
                    break;
                case 6:
                    GradeCalculator();
                    break;
                case 0:
                    Console.WriteLine("Exiting program... Goodbye!");
                    break;
                default:
                    Console.WriteLine("Invalid choice! Try again.");
                    break;
            }

            Console.WriteLine(); // Add a blank line for clarity
        } while (choice != 0);
    }

    static void ArithmeticOperations()
    {
        Console.Write("Enter first number: ");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter second number: ");
        double num2 = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine($"Addition: {num1 + num2}");
        Console.WriteLine($"Subtraction: {num1 - num2}");
        Console.WriteLine($"Multiplication: {num1 * num2}");

        if (num2 != 0)
            Console.WriteLine($"Division: {num1 / num2}");
        else
            Console.WriteLine("Cannot divide by zero!");
    }

    static void EvenOddChecker()
    {
        Console.Write("Enter an integer: ");
        int num = Convert.ToInt32(Console.ReadLine());

        if (num % 2 == 0)
            Console.WriteLine("The number is even.");
        else
            Console.WriteLine("The number is odd.");
    }

    static void TemperatureConverter()
    {
        Console.Write("Enter temperature in Celsius: ");
        double celsius = Convert.ToDouble(Console.ReadLine());

        double fahrenheit = (celsius * 9 / 5) + 32;
        Console.WriteLine($"Temperature in Fahrenheit: {fahrenheit}");
    }

    static void SimpleCalculator()
    {
        Console.Write("Enter first number: ");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter an operator (+, -, *, /): ");
#pragma warning disable CS8604 // Possible null reference argument.
        char op = Convert.ToChar(Console.ReadLine());
#pragma warning restore CS8604 // Possible null reference argument.
        Console.Write("Enter second number: ");
        double num2 = Convert.ToDouble(Console.ReadLine());

        switch (op)
        {
            case '+':
                Console.WriteLine($"Result: {num1 + num2}");
                break;
            case '-':
                Console.WriteLine($"Result: {num1 - num2}");
                break;
            case '*':
                Console.WriteLine($"Result: {num1 * num2}");
                break;
            case '/':
                if (num2 != 0)
                    Console.WriteLine($"Result: {num1 / num2}");
                else
                    Console.WriteLine("Cannot divide by zero!");
                break;
            default:
                Console.WriteLine("Invalid operator!");
                break;
        }
    }

    static void FindLargestNumber()
    {
        Console.Write("Enter first number: ");
        double a = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter second number: ");
        double b = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter third number: ");
        double c = Convert.ToDouble(Console.ReadLine());

        double largest;

        if (a >= b && a >= c)
            largest = a;
        else if (b >= a && b >= c)
            largest = b;
        else
            largest = c;

        Console.WriteLine($"The largest number is: {largest}");
    }

    static void GradeCalculator()
    {
        Console.Write("Enter your marks (0 - 100): ");
        int marks = Convert.ToInt32(Console.ReadLine());

        if (marks >= 90 && marks <= 100)
            Console.WriteLine("Grade: A");
        else if (marks >= 80)
            Console.WriteLine("Grade: B");
        else if (marks >= 70)
            Console.WriteLine("Grade: C");
        else if (marks >= 60)
            Console.WriteLine("Grade: D");
        else if (marks >= 0)
            Console.WriteLine("Grade: F");
        else
            Console.WriteLine("Invalid marks!");
    }
}
