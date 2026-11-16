// int quarter_of(int month) {
//     return (month + 2) / 3;
// }

// albert einstein moment
int quarter_of(int month) {
    int quarters[] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4};
    int quarter = 0;

    for (int i = 1; i < month; i++) {
        quarter++;
    }

    return quarters[quarter];
}
