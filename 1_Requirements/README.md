# XO-GAME Project

**This game is a type of console-based application where graphics are not used. It is the same as naught and the crosses are also called ‘Xs’ and ‘Os’ which is another name given this game. This game is designed in C language using the help of GCC compiler.**

# Features :

Developed using the C language.
The user must confirm the start of the play.
It is played between 2 people, after confirmation you can enjoy your play with your friend.
In ancient times this game required only a piece of paper and a pen. In our digital era it is almost free.
Easy to operate and understandable.

## **Functions:**

**Board**: It has the basic outline of the game which gets displayed to the user.
It is the view part of the game

**Decision**: It is used to check for the correct input by the players. If the input
is wrong it again ask for a proper input

**CheckForWin**: It checks for the a row or column or diagonal with same
characters X or O, If found print the Winner by Player who
choose did the last winning move

## 4W's and 1'H

**Who**: Anyone can play this game. But it is very interesting for young kids.

**What**: To increase Logical thinking of individual.

**When**: This game can be played whenever you are feeling bored.

**Where**: Our Game has to be played on PC/Laptop.

**How**:    Our Game requires two players.Player1 puts "X" and Player2 puts"O" by choosing numbers from 1-9


## SWOT Analysis

**STRENGTHS**:
Develops knowledge
Improves Math Skills
Improves concentration

**WEAKNESS**:
Works only with keyboard

**OPPORTUNITIES**:
We can increase the number of rows and columns in the game if updated.
Our game is portable , it can be used in both linux and windows. 

**THREATS**:
There are so many improvements with the latest technology but our game is fundamental.

## High Level Requirements:

| ID   |Description|Status(Implemented/Future)|
|------|-----------|------|
| HR01 |   The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.        |  Implemented    |
| HR02 | When all 9 squares are full, the game is over          |    Implemented |
| HR03 |  If no player has 3 marks in a row, the game ends in a tie.         |   Implemented  |


## Low level Requirements:

| ID   |Description|Status(Implemented/Future) |
|------|-----------|------ |
| LR01 | The players first decide who will mark his moves with an X and who will go first. Play proceeds with the opponents alternately placing their marks in any unoccupied               cell The object of the game is to be the first player with 3 marks in a row, where a row can be either vertical, horizontal, or diagonal.                              | Implemented     |
| LR02 |  When the 9 squares are full,the game is over and no player can get the 3 marks in a row the game is draw if any one of the player get the 3 marks in a row that player will win the game         |  Implemented   |
| LR03 |    when all 9 squares are full and if no player has 3 marks in a row , the game will ends in a tie/draw       |    Implemented   |
