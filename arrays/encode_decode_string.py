from typing import List

def encode(strs : List[str]) -> str:
    new_string = ""

    for i in range(len(strs)):
        word_len = len(strs[i])
        new_string = new_string + f"{word_len}#" + strs[i]

    return new_string



def decode(string : str) -> List[str]:
    list_of_strs = []
    while(string != ''):
        #extract index of the delimieter i.e #
        del_index = string.index("#")
        index = int(string[:del_index])
        extracted_string = string[del_index+1:index+del_index+1]
        list_of_strs.append(extracted_string)
        string = string[index+del_index+1:]

    return list_of_strs


if __name__ == "__main__":
    strs = ["hello", "123atmadeep", "87arya99"]
    string = encode(strs)
    print(string)
    list_of_strs = decode(string)
    print(list_of_strs)
