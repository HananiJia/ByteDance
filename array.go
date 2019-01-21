/*pckage main

import "fmt"

func main(){
    var a[2]string 
    a[0]="hello"
    a[1]="world"

    fmt.Println(a[0],a[1])
    fmt.Println(a)
    primes:=[6] int {2,3,5,7,11,13}
    fmt.Println(primes)
}*/

/*package main

import "fmt"
func main(){
    primes :=[6] int {2,3,5,7,11,13}

    var s[] int =primes[1:4]
    fmt.Println(s)
}*/

package main 

import "fmt"
func main(){

    names :=[4]string{
        "john",
        "paul",
        "george",
        "ringo",
    }
    fmt.Println(names)

    a:=names[0:2]
    b:=names[1:3]
    fmt.Println(a,b)

    b[0]="xxx"

    fmt.Println(a,b)

    fmt.Println(names)
}

