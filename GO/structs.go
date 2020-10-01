packasge main

import "fmt"


type person struct {
    name string
    gender string
    age  int
}

func newPerson(name string,gender string) *person {

    p := person{name: name,gender:gender}
    p.age = 42
    return &p
}

func main() {

    fmt.Println(person{"Noody","Man",20})

    fmt.Println(person{name: "Priya", age: 30})

    fmt.Println(person{name: "Fred"})

    fmt.Println(&person{name: "Ann", age: 40})

    fmt.Println(newPerson("Anna","Woman"))

    s := person{name: "Matt",gender:"Man",age: 50}
    fmt.Println(s.name)

    d := &s
    fmt.Println(d.age)

    d.age = 51
    fmt.Println(d.age)
}

// Output of the program 
/*
{Bob Man 20}
{Alice  30}
{Fred  0}
&{Ann  40}
&{Anna Woman 42}
Sean
50
51 */
