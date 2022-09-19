{ pkgs }: {
    deps = [
        pkgs.gcc
        pkgs.libgccjit
        pkgs.gcc
        pkgs.gcc -g problem08.c
        pkgs.cowsay
    ];
}