compilador:  compilador.l compilador.y
        bison -d compilador.y
        flex compilador.l
        cc -o $@ compilador.tab.c lex.yy.c -lfl
