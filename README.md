
# Cricket Match Game

This is a C++ program that simulates a cricket match game between two teams: "You" and "The Computer". The program utilizes object-oriented programming (OOP) constructs to implement the game's structure.

# Scenario

**1.** The game is a T-1 match, which means each team will have one over consisting of 6 balls each.
**2.** Both teams will have 3 players each.
**3.** A toss will determine which team plays first.
**4.** Each ball will generate a random number between 0 and 7.
**5.** Numbers 0 to 6 represent the runs made.
**6.** If the number 7 is generated, it signifies that the player is out.
**7.** The game for the first team will end when all six balls have been played or all team members are out.
**8.** At the end of the first innings, the score of the first team will be displayed along with the number of players still left to play.
**9.** The second team will play after the first innings. Each ball will generate a new random number between 0 and 7. The total of these numbers represents the score that the second team made. The score of the team playing will be displayed.
**10.** Finally, at the end of the game, the results will be displayed:
**11.** The team that won and the team that lost.
**12.** If both teams scored the same number of runs and had an equal number of players left to play, it will be a tie.
**13.** The run rate of individual players for each team will be displayed as well.
**14.** The program will also calculate the Best Man of the match, independent of the winning or losing team.
# Program Structure

The program will follow the following structure:

**Player class:** Represents a cricket player. It will have attributes such as player name, runs scored, and whether the player is currently playing or out.
**Team class:** Represents a team. It will have attributes such as team name, list of players, and total score.
**Game class:** Contains the main logic of the game. It will handle the toss, innings, score calculation, and result determination.
**Main function:** Initializes the game, creates teams and players, and starts the game by calling the appropriate methods from the Game class.
# Usage

To run the program, follow these steps:
**1.** Compile the C++ source code files.
**2.** Execute the compiled program.
**3.** Follow the on-screen instructions to play the game.
**4.** At the end of the game, the results, scorecards, run rates, and the Best Man of the match will be displayed.
**5.** Enjoy playing the cricket match game!
