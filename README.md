# Color Blindness Safety Tester

## Description

**version 2.0**

My project asks the user if they want to test basic colors to see which colors are affected by certain types of color blindness. This way of testing colors for safety of color blindness was very limited in it's capabilities. 

In this new version of the code, I have refined the old code so that it uses less lines. This new code also features the option to input a hex code. It does a better job of grading the code on safety than the basic colors feature. After receiving the grade, the user will also be prompted to have their safety test results to be outputted into a file for them.

## Developer

Trevor Shaw

## Example

To run the program, give the following commands:

```
//this will run the code, select the hex tester, enter a hex code, and create a file with the results, then shuts down.
y
2
f0a0b2
y

```

Here is an example of the program running:

```---Welcome to the Color Blindness Palette Tester---
Would Like To Use The Tester (y/n)?
y
Which Command Would You Like To Run?
1. Basic Colors
2. Hex Codes
3. Shut Down
2
Enter the Hex Code (Don't use #): 
f0a0b2

Original Color: #F0A0B2 (240, 160, 178)
--------------------------------------------------
Protanopia      | Appears as: #CDCDAE   | [SAFE - Minimal Color Shift]
Deuteranopia    | Appears as: #D2D8AD   | [MODERATE SHIFT]
Tritanopia      | Appears as: #ECAAA9   | [SAFE - Minimal Color Shift]
Achromatopsia   | Appears as: #BABABA   | [SAFE - Minimal Color Shift]

Would You Like To Save These Results To An Output File? (y/n): y
Success! Results Saved To 'ColorBlindnessResults.txt'
Which Command Would You Like To Run?
1. Basic Colors
2. Hex Codes
3. Shut Down
3
Shutting Down...
```
