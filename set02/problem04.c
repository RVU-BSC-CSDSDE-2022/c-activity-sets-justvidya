#include <stdio.h>

void input_camel_details(float *rad, float *hei,float *len)
{
    printf("Enter the radius\n");
    scanf("%f",rad);
    printf("Enter the height\n");
    scanf("%f",hei);
    printf("Enter the length\n");
    scanf("%f",len);
}

int find_mood(float rad,float hei,float len)
{
    int mood;
    if(rad<hei&&rad<len)
    mood=-1;
    
    else if(hei<len&&hei<rad)
    mood=0;
    
    else if(len<hei&&len<rad)
    mood=1;
    else
    printf("Wrong input\n");
    return mood;
}

void output(float rad,float hei, float len, int mood)
{
    if(mood==-1)
    printf("Camel is sick");
    else if(mood==0)
    printf("camel is happy");
    else if(mood==1)
    printf("Camel is tense");
}

int main()
{
    float e,f,g,h;
    input_camel_details(&e,&f,&g);
    h=find_mood(e,f,g);
    output(e,f,g,h);
    return 0;
}