# Compiler-Design-Basics

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SHASHWAT SHUBHAM

*INTERN ID*: CT04DG3340

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH



**About Compiler Design Basics in C**

# Task 3: Lexical Analyzer – Compiler Design Basics

## Objective

The goal of this task is to build a *basic lexical analyzer* in C, a fundamental concept in *compiler design*. This program reads an input source code file and identifies tokens such as:

- *Keywords* (e.g., `int`, `return`, `if`)
- *Operators* (e.g., `+`, `=`, `*`)
- *Identifiers* (e.g., variable names like `a`, `sum`)

This simulates the first phase of a compiler, known as *lexical analysis*, where source code is converted into a sequence of meaningful tokens.

---

## What the Program Does

This C program:
1. Prompts the user for a file name (e.g., `input.c`).
2. Opens and reads the file character by character.
3. Groups alphanumeric sequences as **keywords** or *identifiers*.
4. Recognizes individual *operators* from a predefined set.
5. Ignores whitespace, punctuation, and newline characters.
6. Prints each recognized token with its classification.

---

## Features Implemented

- Recognition of C language *keywords* from a predefined list
- Identification of *single-character operators*
- Classification of *identifiers* (variable names, function names, etc.)
- Skipping of irrelevant characters like spaces and punctuation
- Simple and clean *tokenization logic*

---

## How I Built It

- Used `fgetc()` to read the input file character by character.
- Used `isalnum()` and `isalpha()` from `ctype.h` to identify alphanumeric characters.
- Stored consecutive characters in a buffer until a delimiter (like space or symbol) is encountered.
- Compared buffer contents with a list of known keywords using `strcmp()` for classification.
- Identified operators using a character array and simple comparison logic.

The code is modular and easy to expand in the future, e.g., adding support for numeric constants, strings, or multi-character operators.

---
