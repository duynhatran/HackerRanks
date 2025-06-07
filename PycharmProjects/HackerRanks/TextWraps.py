import textwrap

text = "This is a long string that needs to be wrapped."
filled_text = textwrap.fill(text, width=11)
print(filled_text)