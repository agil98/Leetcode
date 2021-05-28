bool squareIsWhite(char * coordinates){

    if ((int) coordinates[0] % 2 == 0){
        if ((coordinates[1] - '0') % 2 == 0)
            return false;
        else
            return true;
    }
    else{
        if ((coordinates[1] - '0') % 2 == 0)
            return true;
        else
            return false;
    }
}