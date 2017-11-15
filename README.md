## BacktrackingC
A Simple C program to act as a example to better understant Backtracking

This Simple program, Reads an Array[SOURCE] from the user, along with another number[TARGET]
and prints all possible combination from the elements in the Inputted Array[SOURCE]
that adds upto the [TARGET] Number

```markdown
      *Includes Extensive Comments to facilitate better understanding of code
```
### Sample Example
Find all possibleiteration for the [TARGET] : 12 <br />
With the elements from the Array [SOURCE]   : [1 2 3 4 5 6 7 8 9 10]<br />

```markdown
Enter number of Elements in search Array        :10
----------   Initialize Search Array  ----------
Value for Element 0 :1
Value for Element 1 :2
Value for Element 2 :3
Value for Element 3 :4
Value for Element 4 :5
Value for Element 5 :6
Value for Element 6 :7
Value for Element 7 :8
Value for Element 8 :9
Value for Element 9 :10
---------- Search Array Initialized     ----------
Enter the Target        :12
----------      Target Aquired          ----------
```
The Above input will generate the following input    :
```markdown
----------    Generating Subsets        ----------
    1    2    3    6
    1    2    4    5
    1    2    9
    1    3    8
    1    4    7
    1    5    6
    2    3    7
    2    4    6
    2   10
    3    4    5
    3    9
    4    8
    5    7
----------     Subsets Generated      ----------
----------    Termintating Program    ----------
```
