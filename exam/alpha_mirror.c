#include <unistd.h>

int main(int argc, char **argv){
    if (argc==2){
        int i = 0;
        while(argv[1][i] != '\0'){
            if ('A' <= argv[1][i] && argv[1][i] <= 'Z'){
                argv[1][i] = 'M'- (argv[1][i]-'N');
            }
            else if ('a' <= argv[1][i] && argv[1][i] <= 'z'){
                argv[1][i] = 'm'- (argv[1][i]-'n');
            }
            write(1, &argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}