/*package main 

import "fmt"

func main(){
    a:=make([]int,5)
    printSlice("a",a)

    b:=make([]int,0,5)

    printSlice("b",b)

    c:=b[:2]
    printSlice("c",c)

    d:=c[2:5]
    printSlice("d",d)
}

func printSlice(s string,x[]int){
    fmt.Printf("%s len =%d cap=%d %v\n",s,len(x),cap(x),x)
}*/

package main 

import "fmt"

func main(){
    var s []int
    printSlice(s)

    s=append(s,1)
    printSlice(s)

    s=append(s,2,3,4)
    printSlice(s)
}
func printSlice(s []int){
    fmt.Printf("len=%d cap=%d %v\n",len(s),cap(s),s)
}
