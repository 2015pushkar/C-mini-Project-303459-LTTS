# SDLC Activity Based Learning

Visit [Pages for Report -optional](using github.io option)

Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
<[![C/C++ CI](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/c-cpp.yml) | [![Static Cppcheck](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/cppcheck.yml) [![Dynamic Valgrind](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/CodeQuality_Dynamic.yml/badge.svg)](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/CodeQuality_Dynamic.yml)| [![Unity - Unit Testing](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/unity.yml/badge.svg)](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/unity.yml)| [![Git Inspector](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/prithvisekhar/AppliedSDLC_Template/actions/workflows/gitinspector.yml)>


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
'303459' | Pushkar Pramod Wani  | Feature A, B etc    | X No     | X No   |X No   |X No     
     
## Learning Resources
1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [git inspector](https://github.com/ejwa/gitinspector.git)
4. [github workflow](https://docs.github.com/en/actions/learn-github-action)

**Instead of using pen and paper, it is played on a computer, which has an environmental benefit as well. The goal of this game is to match three of your tokens (X or O) on the board in a row, column, or diagonally. It is played on a 3 x 3 grid of available cells. This game assists users in making better decisions.**

## When:

**If someone has access to a computer, he or she can play this game at any time. This game is mostly a stalemate, So you can play this if you don't want to lose or if you don't want to use much of your brain. This game can be played whenever you are bored or want to figure out the game's methods, outcomes, and situations.**

## Where:

**This game must be installed on a computer or laptop. A simple tic tac toe game is available on a number of websites. It can be played by anyone, at any time, and from any location. As a result, tic-tac-toe is most commonly played by people of all ages, many of whom have not yet discovered the best strategy.**

## How:

**The game is played between two players, with one player moving by 'X' and the other by '0', and after certain conditions are met, one player is declared the winner or the game is draw. A player must place three of their marks in a horizontal, vertical, or diagonal row to win.**

# Detail requirements
## High Level Requirements:

| ID | Description | Status (Implemented/Future) |
|---|---|---|
| 1. | To play the game, the player must see a 3x3 grid. | Implemented |
| 4. | If Player 1 loses, Player 2 wins, and vice versa. | Implemented |
| 5. | Both players will end up with a draw. | Implemented |
   

##  Low level Requirements:
 
| ID | Description | Status (Implemented/Future) |
|---|---|---|
| 2. | The player should be able to place the mark in any square of his choice. | Implemented |
| 1. | If Player 1 enters any digit between 1 and 9, it should mark 'X' and return invalid if it has already been marked. | Implemented |
| 2. | If Player 2 enters any digit between 1 and 9, it should mark 'O' and return invalid if it has already been marked. | Implemented |
| 3. | If a player chooses a square number that has already been chosen by another player, the message "Invalid move" appears. | Implemented |
| 3. | If a player is able to match his mark diagonally, vertically, or horizontally, he should be declared the winner. | Implemented |
| 4. | If there is no outcome after the specified moves, the message "Game Draw" is displayed. | Implemented |


