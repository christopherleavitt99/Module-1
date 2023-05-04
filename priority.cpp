#include <iostream>
using namespace std;

public class priority
{
    public static void Test() {
        // This is an example of creating and using the priority queue
        var priorityQueue = new PriorityQueue();
        Console.WriteLine(priorityQueue);

        // Test Cases

        // Test 1
        // Scenario: The Enqueue function shall add an item (which contains both data and priority) to the back of the
        // queue. The Dequeue function shall remove the item with the highest priority and return its value.
        // Expected Result: [Matt (Pri:4), Miko (Pri: 8)]
        Console.WriteLine("Test 1");
        var names = new PriorityQueue();
        people.Enqueue("Matt", 4);
        people.Enqueue("Miko", 8);
        people.Enqueue("Mike", 9);
        people.Dequeue();
        
        Console.WriteLine(people);

        Console.WriteLine("=================");

        // Test 2
        // Scenario: If there are more than one item with the highest priority, then the item closest to the front of
        // the queue will be removed and its value returned.
        // Expected Result: [Matt (Pri:4)], Mike (Pri:8)]
        Console.WriteLine("Test 2");
        people = new PriorityQueue();
        people.Enqueue("Matt", 4);
        people.Enqueue("Miko", 8);
        people.Enqueue("Mike", 8);
        people.Dequeue();
        
        Console.WriteLine(people);

        Console.WriteLine("=================");

        // Test 3
        // Scenario: Try to get the next person from an empty queue
        // Expected Result: Error message should be displayed
        Console.WriteLine("Test 3");
        people = new PriorityQueue();
        people.Dequeue();

    }
}