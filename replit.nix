{ pkgs }: {
    deps = [
        pkgs.gcc -g problem08.c
        pkgs.cowsay
    ];
}