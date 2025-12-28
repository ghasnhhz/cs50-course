from cs50 import get_string

#Prompt the user for text
text = get_string("Text: ")

Letters = 0
Words = 1
Sentences = 0

#Count the number of Letters, Words, and Sentences
for i in text:
    if i.isalpha():
        Letters +=1
    elif i == " ":
        Words +=1
    elif i == "." or i == "!" or i == "?":
        Sentences +=1

#The Coleman-Liau index
index = 0.0588 * (Letters/Words*100) - 0.296 * (Sentences/Words*100) - 15.8

if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print("Grade", round(index))
    