# caesar-encryption
# 🔐 Caesar Cipher

This program implements a **Caesar cipher**, a simple encryption technique where each letter in the plaintext is shifted by a fixed number of positions down the alphabet. It was built as part of the [CS50x](https://cs50.harvard.edu/x/) course by Harvard.

---

## 📌 Problem Description

The Caesar cipher is a substitution cipher where each letter in the plaintext is "rotated" by a fixed number of positions. For example, with a key of `1`, `A` becomes `B`, `B` becomes `C`, and so on.

This program:

- Accepts a **single command-line argument** (the key)
- Prompts the user for **plaintext**
- Outputs the corresponding **ciphertext**
- Leaves non-alphabetical characters unchanged
- Wraps around the alphabet (e.g., `Z` becomes `C` if key is 3)

---

## 💻 How to Compile and Run

### 🔨 Compile

If you have a Makefile:
make caesar
Or compile manually:


clang -o caesar caesar.c -lm

▶️ Run
./caesar 3
Input:

plaintext: Hello, world!

Output:

ciphertext: Khoor, zruog!
