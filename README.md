# Hangman Solver
Have you ever been playing hangman and thought "Wow, I'm really bad at this"? Well, now you have a solution to take all the skill out of hangman: Hangman Solver!
## Installation
Copy the repository into your directory and compile `hangmanSolver.c`.
<br>In GCC, this is `gcc -o hangmanSolver hangmanSolver.c`.
<br>In Clang, this is `clang -o hangmanSolver hangmanSolver.c`.
## Usage
Run the binary using `./hangmanSolver`.
<br>Enter what is on the board (eg if it is a 7 letter word, the 1st letter is a, 4th letter is t, 6th letter is r, and 7th letter is e, enter "a__t_re").
<br>Enter what you know is not on the board (eg if you have already guessed c, n, and f and they are all wrong, enter "cnf").
<br>Hangman Solver will print out all possible words, and you choose which word seems the most likely.