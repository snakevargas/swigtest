package main

import (
	"fmt"
	"thingy"
)

func main() {
	fmt.Println("Ok! C++ & SWIG! YAY!")

	var blah thingy.Thingy

	blah = thingy.NewThingy(42)

	blah.Say_hi()

}

