#!/bin/bash
proc(){  
  bar=""
  lable=('|' '\\' '-' '/')
  index=0
  for (( i=0; i<=100; i++))
  do 
#echo ${lable[$index]}
      printf "[%-100s][%d%%][%c]\r" "$bar" "$i"  "${lable[$index]}"
      sleep 0.1
      bar=$bar'#'
      (( index++ ))
      (( index %= 4 ))
    done
  printf "\n"
}
proc
