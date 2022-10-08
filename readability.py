def main():
    # calling the function count
    index1 = count()
    
    # rounding the index
    index2 = round(index1)
    if index2 < 1:
        print("Before Grade 1")
    elif index2 >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {index2}")

    
def count():
    line = input("Text = ")
    n = len(line)
    letters = 0
    sent = 0
    
    # for the last word
    word = 1

    # for counting the number of letters, words and sentences
    for i in range(n):
        if line[i].isalpha():
            letters += 1
        if line[i - 1] == ' ':
            word += 1
        if line[i] == '.' or line[i] == '!' or line[i] == '?':
            sent += 1
    
    # for finding out the index
    L = letters / word * 100
    S = sent / word * 100
    index = 0.0588 * L - 0.296 * S - 15.8
    return index


main()