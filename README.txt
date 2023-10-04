Sam Polyakov
CS333
Project 1
09/17/2023
https://sites.google.com/colby.edu/sjpoly26-cs333/home


Tree:
/Users/sampolyakov/Desktop/CS333/Project1_sjpoly26
├── README.txt
├── learningC
├── learningC.c
├── project1part1
├── project1part1.c
├── project1part2
├── project1part2.c
├── project1part3
├── project1part3.c
├── project1part4
└── project1part4.c

1 directory, 11 files


Apple clang version 14.0.3 (clang-1403.0.22.14.1)
Target: arm64-apple-darwin22.6.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin


Extension: As my extension, I researched 2 additional languages (Go, Javascript)


1) To Compile: gcc -o project1part1 project1part1.c  
To Run: ./project1part1
Output: 
Memory of char:
0: 63
Memory of short:
0: 34
1: 12
Memory of int:
0: 67
1: 45
2: 23
3: 01
Memory of long:
0: EF
1: CD
2: AB
3: 89
4: 67
5: 45
6: 23
7: 01
Memory of float:
0: A4
1: 70
2: 45
3: 41
Memory of double:
0: A2
1: D5
2: 24
3: D3
4: FC
5: B0
6: 28
7: 40
1a) My machine is little-endian. 
1b) I can tell because when I print out how the int 0x01234567 is stored, 01 (the most-significant digit) is last (ptr[3]).


2) To Compile: gcc -o project1part2 project1part2.c  
To run: ./project1part2
Output:
Memory of ptr:
0: C8
1: 31
2: 60
3: 6F
4: 01
5: 00
6: 00
7: 00
8: A2
9: D5
10: 24
11: D3
12: FC
13: B0
14: 28
15: 40
16: C6
17: 63
18: 54
19: 80
20: A4
21: 70
22: 45
23: 41
24: EF
25: CD
26: AB
27: 89
28: 67
29: 45
30: 23
31: 01
32: 67
33: 45
34: 23
35: 01
36: 34
37: 12
38: 00
39: 63
40: 90
41: 34
42: 60
43: 6F
44: 01
45: 00
46: 00
47: 00
48: 01
49: 00
50: 00
51: 00
52: 00
53: 00
54: 00
55: 00
56: 70
57: 34
58: 60
59: 6F
60: 01
61: 00
62: 00
63: 00
64: 28
65: BF
66: 4C
67: 80
68: 01
69: 00
70: 00
71: 00
72: 00
73: 00
74: 00
75: 00
76: 00
77: 00
78: 00
79: 00
80: 00
81: 00
82: 00
83: 00
84: 00
85: 00
86: 00
87: 00
88: 00
89: 00
90: 00
91: 00
92: 00
93: 00
94: 00
95: 00
96: D8
97: 5D
98: C9
99: 00
2a) At the end of my program, it output a list of 100 bit indices and their values. Most of the values were empty (00) but others had values, many of which I did not know what they are related to (D3, F5, etc.). 
2b)  Yes! All of them are in the output list an are little-endian. 


3) To Compile: gcc -o project1part3 project1part3.c  
To run: ./project1part3
Output: N/A
3) When I was not using the free statement, my program used much more memory. When I first ran the program without the free statement, it froze and crashed my whole computer within just a few seconds of me starting. With the free statement, it used almost no memory and my computer did not slow down at all. 


4) To Compile: gcc -o project1part4 project1part4.c  
To run: ./project1part4
Output:
Size of char: 1 bytes
Size of short: 2 bytes
Size of Struct: 10 bytes
0: 61
1: 00
2: 01
3: 00
4: 62
5: 00
6: 02
7: 00
8: 63
9: 00
4a) No, I expected the sizeof result to be 7 but I got 10 instead. This is probably because there is some padding happening
4b) Yes, there seems to be a blank gap between every piece of information I put into the struct, this is probably because of how the information I put in is stored (8 bytes each). 


5) To Compile: gcc -o project1part5 project1part5.c  
To run: ./project1part5
Output:
zsh: trace trap  ./project1part5
5a) When I try to run my program it crashes. This is likely because when I use strcopy, it is overflowing as the size of the string I put in is 7 but I set the limit to 5. When I compile my program, it warns me about this but still allows me to complete the compilation.

