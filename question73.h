int simpleInterest(int principle, int rate, int t)
{
    int amount = principle * (1 + (rate * t));
    return amount;
}
