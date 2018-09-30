# SpaceWars-Game
This game was develop with Allegro game library on Ubuntu.

To run this game please use an Ubuntu machine. 

1.Open a terminal and dowload the build essential with this command : sudo apt-get install build-essential

2.Dowload the Allegra 4.2 library with this command : sudo apt-get install liballegro4.2-dev

3.Download the ZIP of the game and extract it.

4.Open a terminal and go to spaceWars folder with cd command.

5.Compile and run the game with this command: gcc main.c -o output `allegro-config --libs` -lm -pedantic-errors -Wall &
& ./output

## Screenshots
###### Menu Screen
![alt text](https://github.com/burhanelgun/SpaceWars-Game/blob/master/spaceWars/menu.png)
#### Game Play Screen
![alt text](https://github.com/burhanelgun/SpaceWars-Game/blob/master/spaceWars/gameplay.png)
#### Score Board Screen
![alt text](https://github.com/burhanelgun/SpaceWars-Game/blob/master/spaceWars/scoreboard.png)
