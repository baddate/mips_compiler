void delay() {
    int c = 10;
    c=30000;
    while(c>0) c=c-1;
}
int test(int m) {
    return m+1;
}
int main() {
    int led=0;
    while(1) {
        led=led+1;
        led=test(led);
        $0xfffffc60=led;
        $0xfffffc62=led>>16;
        if(led>10) led=0;
        delay();
    }
}