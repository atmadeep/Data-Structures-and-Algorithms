from collections import defaultdict

def group_anagrams(strs ):

    anagram_dict = defaultdict(list)
    for string in strs:
        count = [0] * 26 # One for each character a->z
        for c in string:
            count[ord(c) - ord("a")] += 1
        anagram_dict[tuple(count)].append(string)

    print(*anagram_dict.values())


strs = ["eat","tea","tan","ate","nat","bat"]
group_anagrams(strs)

