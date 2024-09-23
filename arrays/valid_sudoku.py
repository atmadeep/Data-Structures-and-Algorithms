def valid_sudoku(board):
    # check for rows
    for i in range(0, 9):
        current_row = board[i]
        # format the current row
        row = [int(x) for x in current_row if (x != ".")]
        if len(row) != len(set(row)):
            print(f"bad row = {row}")
            return False

    # check for columns
    # construct the column
    for i in range(0, 9):
        current_col = []
        for j in range(0, 9):
            current_col.append(board[j][i])
        col = [int(x) for x in current_col if (x != ".")]
        if len(col) != len(set(col)):
            print(f"bad col = {col}")
            return False

    # check for subarrays (3*3)
    for j in [0, 3, 6]:
        for i in [0, 3, 6]:
            curr_subarray = [
                board[i][i],
                board[i][i + 1],
                board[i][i + 2],
                board[i + 1][i],
                board[i + 2][i],
                board[i + 1][i + 1],
                board[i + 1][i + 2],
                board[i + 2][i + 1],
                board[i + 2][i + 2],
            ]
            subarray = [int(x) for x in curr_subarray if x != "."]
            print(subarray)
            if (len(subarray) != len(set(subarray))):
                return False
    return True


# board = [
#    ["1", "2", ".", ".", "3", ".", ".", ".", "."],
#    ["4", ".", ".", "5", ".", ".", ".", ".", "."],
#    [".", "9", "1", ".", ".", ".", ".", ".", "3"],
#    ["5", ".", ".", ".", "6", ".", ".", ".", "4"],
#    [".", ".", ".", "8", ".", "3", ".", ".", "5"],
#    ["7", ".", ".", ".", "2", ".", ".", ".", "6"],
#    [".", ".", ".", ".", ".", ".", "2", ".", "."],
#    [".", ".", ".", "4", "1", "9", ".", ".", "8"],
#    [".", ".", ".", ".", "8", ".", ".", "7", "9"],
# ]

board = [
    [".", ".", ".", ".", "5", ".", ".", "1", "."],
    [".", "4", ".", "3", ".", ".", ".", ".", "."],
    [".", ".", ".", ".", ".", "3", ".", ".", "1"],
    ["8", ".", ".", ".", ".", ".", ".", "2", "."],
    [".", ".", "2", ".", "7", ".", ".", ".", "."],
    [".", "1", "5", ".", ".", ".", ".", ".", "."],
    [".", ".", ".", ".", ".", "2", ".", ".", "."],
    [".", "2", ".", "9", ".", ".", ".", ".", "."],
    [".", ".", "4", ".", ".", ".", ".", ".", "."],
]
print(valid_sudoku(board=board))
