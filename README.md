# Kalman Maze

An STM32F3 Discovery board project implementing a tilt&position (2DoF pitch and y on the board RF) controlled maze game using Kalman filtering for sensor fusion.

This project has been presented for the exam *Sistemas Embarcados para Navegación y Control* at Universitat Politècnica de València. 

## Maze
\# = Wall

X = Player

G = Goal

Example:

    ##########
    #X  #    #
    ### # ## #
    #    #   #
    # ##### ##
    #        #
    ##### ## #
    #  # # # #
    # #     G#
    ##########

## Moves
Move in game: movement of the board
- Left: move left
- Right: move right
- Down: Tilt backwards
- Up: Tilt forwards

