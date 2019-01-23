package main

import "fmt"

type rest struct{
    width,height int
}

func (r *rest) area() int {
    return r.width*r.height
}

func (r *rest) peri() int {
    return 2*(r.width+r.height)
}

func main(){
    r:=rest{}
    fmt.Scanf("%d",&r.width)
    fmt.Scanf("%d",&r.height)

    fmt.Println(r.area())
    fmt.Println(r.peri())
}
