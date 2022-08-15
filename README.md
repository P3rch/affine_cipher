## Introduction
This is a simple program to cipher a plain text and decipher encrypted text.

Affine cipher uses the modular function ``y = (a*x) + b mod 26`` to cipher every character of the text and ``y = a^(-1) * (x - b) mod 26`` to decipher them. Further descripton of the algorithm can be find on [Wikipedia](https://en.wikipedia.org/wiki/Affine_cipher).

The program has been developed on Linux Ubuntu 20.04.

## Encryption

1. Open the "to_cipher.txt" file and paste there your plain text (or simply rename your file to "to_cipher.txt" if you have one).
2. Save the file.

### Linux

3. Open the terminal in the main directory.
4. Build the solution with

```
$ g++ -o main main.cpp cipher.cpp decipher.cpp
```
5. Execute the solution with
```
./main
```

### Windows
TBD

Depending on existence of files, you will get a confirmation of success or information that the file was not found.

For example, if the aim was only to cipher the plaintext, the output would be:
```
Ciphering in progress...
	Saved to "ciphered.txt".
File "to_decipher.txt" not found - nothing to decipher.
```

The ciphered text is now in the "ciphered.txt" file.

**WARNING!** This program will overwrite "ciphered.txt" or "deciphered.txt" (for decryption) after every successful operation.

## Decryption

Paste the cipher or rename your file to "to_decipher.txt" and follow the **Encryption** steps provided above.

The deciphered text will be in the "deciphered.txt" file.

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
* Divide the text into n-character long tokens and encrypt them with different ``a`` and ``b`` parameters to prevent the dictionary attack.
* Define keys in another file, so that the user could set his keys and change them regularly. (The more encrypted text the attacker gets, the higher is the probability of breaking the cipher.)
* Create new files after successful (de)cryption instead of overwriting the existing ones.
