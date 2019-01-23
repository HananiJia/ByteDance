package main

import(
    "fmt"
    "errors"
)

type myerror struct {
    arg int 
    errmsg string
}


func (e *myerror) Error() string {
    return fmt.Sprintf("%d - %s",e.arg,e.errmsg)
}

func error_test( arg int) (int ,error) {
    if arg<0 {
        return  -1,errors.New("bad argument -negtive !")
    } else if arg >256 {
        return -1,&myerror{arg,"bad argument-too large!"}
    }
    return arg*arg,nil
}

func main(){
    for _,i:=range[] int {-1,4,1000} {
        if r, e:=error_test(i);e!=nil {
            fmt.Println("failed:",e)
        }else {
            fmt.Println("success:",r)
        }
    }
}

