int countPoints(char *rings){
    int rods[10][3] = {0};
    int count = 0;
    int length = strlen(rings) / 2;
    for (int i = 0; i < length; i++) {
        int color;
        int rod = rings[2 * i + 1] - '0';
        rods[rod][0] |= rings[2 * i] == 'R';
        rods[rod][1] |= rings[2 * i] == 'G';
        rods[rod][2] |= rings[2 * i] == 'B';
    }
    for (int i = 0; i < 10; i++)
        count += rods[i][0] && rods[i][1] && rods[i][2];
    return count;
}
