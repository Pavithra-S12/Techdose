int countAsterisks(char * s){

int i = 0 , j = 0 ;
char* c = s ;
while(*c != '\0') {
    if (i == 0  && *c != '|') {
        
        if(*c == '*') {
            j++ ;
        }
    }
    else {
        if(*c == '|') {
            i++ ;
        }
        if(i == 2) {
            i = 0 ;
        }
    }
    c++ ;
}
return j;
}
