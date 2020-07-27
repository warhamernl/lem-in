# lem-in

Lem-in is a algorithmic project

Run make at the project root to compile.

The objective of this project is to let ants traverse through the maze as fast and efficient as possible.

the excutable requires a text file with the layout of a map.

24<br>
##start<br>
1 23 3<br>
2 16 7<br>
#comment<br>
3 16 3<br>
4 16 5<br>
5 9 3<br>
6 1 5<br>
7 4 8<br>
##end<br>
0 9 5<br>
0-4<br>
0-6<br>
1-3<br>
4-3<br>
5-2<br>
3-5<br>
#another comment<br>
4-2<br>
2-1<br>
7-6<br>
7-2<br>
7-4<br>
6-5<br>

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
