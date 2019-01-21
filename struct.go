 /*package main

import "fmt"

type vertex struct {
    x int 
    y int 
}

func main(){
    fmt.Println(vertex{1,2})
}*/

/*package main

import "fmt"

type vertex struct {
    x int 
    y int
}
func main(){
    v:=vertex{1,2}
    fmt.Println(v)
    v.x=4
    fmt.Println(v.x)
}*/

/*package main

import "fmt"

type vertex struct {
    x int 
    y int
}

func main(){
    v:=vertex{1,2}
    p:=&v
    p.x=1e9
    fmt.Println(v)
}*/
package main
import "fmt"

type vertex struct {
    x,y int
}

var (
    v1=vertex{1,2}//创建一个vertex结构体
    v2=vertex{x:1}//y被隐式赋予0
    v3=vertex{}
    p=&vertex{1,2}
)
func main(){
    fmt.Println(v1,p,v2,v3)
}
  

