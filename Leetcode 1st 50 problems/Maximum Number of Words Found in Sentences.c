int mostWordsFound(char ** sentences, int sentencesSize){
    int a = 0;
    for (int i = 0; i < sentencesSize; i++){
        int curr = 1;
        int j = 0;
        while(sentences[i][j]){
            if (sentences[i][j] == ' ')
                curr++;
            j++;
        }
        a = (curr > a) ? curr : a;
    }
    return a;
}
