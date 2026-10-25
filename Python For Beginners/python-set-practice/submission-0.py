from typing import List

def contains_duplicate(words: List[str]) -> bool:
    og_count = len(words)
    my_set = set(words)
    non_dupe_count = len(my_set)
    return og_count != non_dupe_count

# do not modify code below this line
print(contains_duplicate(["hello", "world", "hello"]))
print(contains_duplicate(["hello", "world", "i", "am", "great"]))
print(contains_duplicate(["hello", "hello", "hello"]))
print(contains_duplicate(["Hello", "hellooo", "hello"]))
