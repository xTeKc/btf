# btf
Calculate how long it will take to finish a book.

<br>

This program calculates the time it will take to finish a book based on the time per page and the number of pages. To use the program, you need to provide two command line arguments: the time per page and the number of pages. The program will then multiply these values to determine the total time it will take to finish the book. The output includes the equivalent number of hours and minutes.

For example, if you have a book with 221 pages that takes 2 minutes per page to read, by running the program you could determine how long it will take to finish the book:

`
./btf 2 221
`

The output will be:

`
It will take you 7 hours and 22 minutes to finish the book.
`

<br>

## Usage
Build the binary with **gcc**.
```
make
```

<br>

Run the program. <br>
Arg1 being time per page and Arg2 being number of pages.
```
./btf Arg1 Arg2
```
