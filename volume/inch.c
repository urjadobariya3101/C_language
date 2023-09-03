#include<stdio.h>
#include<string.h>
struct Transform {
    int feet;
    int inch;
};
int main(){
    struct Transform d1, d2, result;
    
    printf("Enter the first distance in feet and inches:");
    scanf("%d %d", &d1.feet, &d1.inch);
    
    printf("Enter the second distance in feet and inches:");
    scanf("%d %d", &d2.feet, &d2.inch);
    
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    
    if (result.inch >= 12) {
        result.feet += result.inch / 12;
        result.inch %= 12;
    }
    
    printf("The sum of the distances is %d feet %d inches.", result.feet, result.inch);
    return 0;
}
