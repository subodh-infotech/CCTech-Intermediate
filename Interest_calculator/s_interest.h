class Interest{
    private:
    double amount;
    float rate, duration;
    double _interest;

    public:
    void set_amount();
    void set_rate();
    void set_duraton();
    void calculate_interest();
    void display();
};