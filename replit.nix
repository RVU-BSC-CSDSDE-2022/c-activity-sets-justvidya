{ pkgs }: {
    deps = [
        pkgs.gcc
        pkgs.gcc -g problem08.c
        pkgs.cowsay
    ];
}