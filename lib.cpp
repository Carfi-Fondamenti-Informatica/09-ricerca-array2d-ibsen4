bool funzione(char a[10][20], char b[20], int &pos) {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (b[j] != a[i][j]) {
                j = 20;
            } else if(j==19){
                pos = i;
                return true;
            }
        }
    }
    return false;
}
