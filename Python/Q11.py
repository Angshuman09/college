# Caesar Cipher: Named after Julius Caesar, who used it to send confidential written messages by replacing

text = input("Enter the text:")

encrypt = ""

for ch in text:
    if ch.isalpha():
        if ch.isupper():
            encrypt+= chr(((ord(ch)-65+3)%26) + 65)
        else:
            encrypt+= chr(((ord(ch)-97+3)%26) + 97)
    else:
        encrypt+=ch

print(encrypt)