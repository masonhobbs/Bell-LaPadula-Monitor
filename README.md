# Bell-LaPadula-Monitor
A simulation of the Bell-LaPadula Security Model written in C++. The program reads in instructions from a given file (example file format available in instructions1) and creates both Subjects with a given security level and Objects with a given security level. Subjects attempt to read and write to the different Objects and the action is permitted or prohibited depending on their security level relative to the Object's security level.

# Compilation
  $ make
  
# Execution

  $ ./BLPSecure <filename>
