# lem-in

Lem-in is a algorithmic project

Run make at the project root to compile.

The objective of this project is to let ants traverse through the maze as fast and efficient as possible.

the excutable requires a text file with the layout of a map.

24
##start
1 23 3
2 16 7
#comment
3 16 3
4 16 5
5 9 3
6 1 5
7 4 8
##end
0 9 5
0-4
0-6
1-3
4-3
5-2
3-5
#another comment
4-2
2-1
7-6
7-2
7-4
6-5

map starts with amount of ants.
Then the room coordinates.
below the ##start and ##end are the rooms which are start and end

##start
1 23 3

##end
0 9 5

as example

the links between rooms are made by [roomname]-[roomname]
0-4 as example
