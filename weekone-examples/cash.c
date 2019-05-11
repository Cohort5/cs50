int oneWhile(int anAmount) {
    amount = anAmount;
    int coins = 0;
    while(amount > 0) {
        if(amount >= 25) {
            coins++;
            amount -= 25;
        } else if(amount >= 10) {
            coins++;
            amount -= 10;
        } else if(amount >= 5) {
            coins++;
            amount -= 5;
        } else {
            coins++;
            amount -= 1;
        }
    }
    return coins;
}

int multipleWhiles(int anAmount) {
    int change = anAmount;
    int coins = 0;
    while(change >= 25)
    {
        change = change - 25;
        coins++;
    }
    while(change >= 10)
    {
        change = change - 10;
        coins++;
    }
    while(change >= 5)
    {
        change = change - 5;
        coins++;
    }
    while(change >= 1)
    {
        change = change - 1;
        coins++;
    }
    return coins;
}

int modulo(int anAmount) {
    change = anAmount
    int coins = change / 25;
    change = change % 25;

    coins += change / 10;
    change = change % 10;

    coins += change / 5;
    change = change % 5;

    coins += change / 1;
    change = change % 1;

    return coins;