
void delay() {
    int c;
    c=30000;
    while(c>0) c=c-1;
    return ;
}
int test(int i){
    i = i*2/2+1;
    return i;
}
int main() {

    int led=0;
    while(1) {
        led=test(led);
        $0xfffffc60=led;
        $0xfffffc62=led>>16;
        if(led>10) led=0;
        delay();
    }
    return 0;
}