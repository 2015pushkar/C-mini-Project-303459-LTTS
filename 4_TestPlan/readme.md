# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** |    
|-------------|--------------------------------------------------------------|------------|-------------|
|  H_01       | Check to see if the graph for playing is being drawn. | No input.  | 3X3 graph is drawn.  |
|  H_02       | Check to see if the player/computer got three of his inputs in vertical, horizontal, or diagonal format. | 'X' or 'O' i/p from the user/computer. | The user/computer won the game. |
|  H_03       | Examine for a draw. | 9 inputs from (user+computer). | The game is over. |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** |    
|-------------|--------------------------------------------------------------|------------|-------------|
|  L_01       | Checking whether or not a 3X3 graph is drawn, which is a basic requirement for the game. This 3X3 graph is required to play the game because it functions as a game board. | Not input expected from the user.  | 3X3 graph is drawn. |
|  L_02       | The game continues with the user alternately placing their m arks in any unoccupied cell. Check to see if any player finishes with three marks in a row (vertical, horizontal, or diagonal). | 'X' or 'O' i/p from the user/computer. | The user/computer won the game. |
|  L_03       | Check if a total of 9 moves have been made (combining user and computer moves), the game ends in a draw when neither the user nor the computer can get 3 marks in a row. | 9 inputs from (user+computer). | The game is over. Somebody won or the game ended as a draw. |
