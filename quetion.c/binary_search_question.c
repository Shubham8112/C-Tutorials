Single File Programming Question
Problem Statement
Agalya oversees a logistics system that tracks shipments via unique package
identifiers. These identifiers are meticulously organized in a sorted array. 
Her objective is to enhance the system's efficiency in pinpointing packages
that are logged an odd number of times (such as 3, 5, 7, etc.), 
which indicates potential discrepancies in the shipment data. 
Agalya seeks assistance in developing a program that employs a binary search algorithm, 
known for its efficacy in handling sorted data.
This program will specifically target and display any package identifier that appears 
an odd number of times, thereby expediting the process for the logistics teams to 
identify and address any anomalies in the shipment records.

Input format :

The first line of input consists of an integer N, representing the 
number of packages in the shipment.
The second line consists of N space-separated integers,
representing the list of package identifiers.
Output format :
The output prints an integer representing the package identifier that occurs an
odd number of times.
Refer to the sample output for formatting specifications.
Code constraints :
1 ≤ N ≤ 10
1 ≤ package identifier ≤ 100
Sample test cases :
Input 1 :
7
17 25 38 38 38 62 79
Output 1 :
38
Input 2 :
6
41 41 41 41 41 72
Output 2 :
41
