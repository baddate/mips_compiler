
void delay() {
    int c=30000;
    while(c>0) c=c-1;
    return ;
}

int main() {

    int led=0;
    while(1) {

        led=led+2;
        $0xfffffc60=led;
        if(led>10) led=0;
        delay();
    }
    return 0;
}