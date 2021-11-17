#! /bin/zsh

gcc -o maintest main_test.c test_is*.c test_str*.c test_to*.c test_mem*.c test_bzero.c ../libft.a
