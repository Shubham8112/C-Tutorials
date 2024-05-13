4/ Problem Statement: Word Processor
You are tasked with implementing a simple word processor in C. The word processor will perform various operations on a given text string, including counting the occurrences of specific characters, replacing characters, and displaying the processed text.
The program should have the following features:
Character Count: Implement a function int countOccurrences(char *text, char character) that counts the occurrences of a specific character in the given text string. The function should return the count of occurrences.
Character Replacement: Implement a function void replaceCharacter(char *text, char target, char replacement) that replaces all occurrences of the target character with the replacement character in the given text string.
Text Processing Menu: Display a menu with the following options:
Enter 1 to count occurrences of a character.
Enter 2 to replace a character.
Enter 3 to display the processed text.
Enter 0 to exit the program.
Main Program Logic: Use a loop to continuously display the menu and perform the selected operation based on user input. Use the switch statement to handle different menu options.
For option 1, prompt the user to enter a character and display the count of occurrences of that character in the text.
For option 2, prompt the user to enter a target character and a replacement character. Replace all occurrences of the target character with the replacement character in the text.
For option 3, display the processed text after applying any replacements.
For option 0, exit the program.
Constant Definitions: Define constants for menu options and special characters used in the program.
Pointers and References: Use pointers to manipulate the text string and pass it to functions. Use references to access the original text string in functions without making copies.




Above Simulation : 
Enter the text: Hello, World!
Menu:
1. Count occurrences of a character
2. Replace a character
3. Display processed text
0. Exit


Enter your choice: 1
Enter the character to count: o
Occurrences of 'o': 2


Menu:
1. Count occurrences of a character
2. Replace a character
3. Display processed text
0. Exit


Enter your choice: 2
Enter the character to replace: l
Enter the replacement character: x
Text after replacement: Hexxo, Worxd!


Menu:
1. Count occurrences of a character
2. Replace a character
3. Display processed text
0. Exit


Enter your choice: 3
Processed text: Hexxo, Worxd!


Menu:
1. Count occurrences of a character
2. Replace a character
3. Display processed text
0. Exit


Enter your choice: 0
Exiting the program...
