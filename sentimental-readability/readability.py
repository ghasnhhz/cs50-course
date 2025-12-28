from cs50 import get_string


def main():
    # Get input from the user
    text = get_string("Text: ")

    letters = count_letters(text)
    print(f"Number of letters are: {letters}")

    words = count_words(text)
    print(f"Number of words are: {words}")

    sentences = count_sentences(text)
    print(f"Number of sentences are: {sentences}")


    # Compute the Coleman-Liau index
    L = (letters / words) * 100.0
    S = (sentences / words) * 100.0

    index = round(0.0588 * L - 0.296 * S - 15.8)
    if index < 1:
        print("Before grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {index}")

def count_letters(text):
    letters = 0

    for i in text:
        if i.isalpha():
            letters += 1
    return letters


def count_words(text):
    words = 1

    for i in text:
        if i == ' ':
            words += 1
    return words


def count_sentences(text):
    sentences = 0

    for i in text:
        if i == '.' or i == '?' or i == '!':
            sentences += 1
    return sentences




main()
