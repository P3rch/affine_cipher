## Introduction
This is a simple program to cipher a plain text and decipher encrypted text.

Affine cipher uses the modular function ``y = (a*x) + b mod 26`` to cipher every character of the text and ``y = a^(-1) * (x - b) mod 26`` to decipher them. Further descripton of the algorithm can be found on [Wikipedia](https://en.wikipedia.org/wiki/Affine_cipher).

The program has been developed on Linux Ubuntu 20.04. and extended on Arch Linux(as of 26/10/22)

## Encryption
0. Provide keys in keys.txt file, separete by enter. 
1. Open the "to_cipher.txt" file and paste there your plain text (or simply rename your file to "to_cipher.txt" if you have one).
2. Save the file.
3. Open the terminal in the main directory.
4. Build the solution e.g. with GNU g++ compiler:
```
g++ -o main main.cpp cipher.cpp decipher.cpp
```
5. Execute the solution on Linux with
```
./main
```
or on Windows with
```
main
```

Depending on existence of files, you will get a confirmation of success or information that the file was not found. For example, if the aim was only to cipher the plaintext, the output would be:
```
Ciphering in progress...
	Saved to "ciphered.txt".
File "to_decipher.txt" not found - nothing to decipher.
```

The ciphered text is now inside the "ciphered.txt" file.

**WARNING!** This program will not overwrite "ciphered.txt" or "deciphered.txt" (for decryption) after every successful operation,
it will write at the end of the file instead

## Decryption

Paste the cipher or rename your file to "to_decipher.txt" and follow the **Encryption** steps provided above.

The deciphered text will be inside the "deciphered.txt" file.

## Example of a cipher

Before the execution:

"to_cipher.txt"
```
Some plain text
to cipher.
```

And after:

"ciphered.txt"
```
Hfrn mklpy onqo
of zpmina.
```

Let's try to decipher the output.

Before:

"to_decipher.txt"
```
Hfrn mklpy onqo
of zpmina.
```

After:
```
Some plain text
to cipher.
```

## Testing
TBD

## Further improvements
* Divide the text into n-character long tokens and encrypt them with different ``a`` and ``b`` parameters to prevent the [dictionary attack](https://en.wikipedia.org/wiki/Dictionary_attack).
* Reconsider writing results into a new file or at least add some kind of separator between results maybe timestamp.
* sanitize inputs especially keys.txt.
