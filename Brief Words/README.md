1. Iterate through each word in the dictionary.

2. For each word, generate all possible subsequences of length 1 to 4.

3. For each subsequence:
a. Check if it is valid, i.e., it occurs in the word as a subsequence and its length ranges from one to four characters.
b. If valid, add it to a set of short forms for the current word.

4. Repeat steps 2-3 for all words in the dictionary.

5. Once short forms for all words are generated, ensure that each short form is mapped to one and only one dictionary word.

6. Return the mapping of short forms to dictionary words.
