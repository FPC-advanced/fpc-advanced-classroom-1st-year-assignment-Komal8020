// Write a program to find the perimeter of a polygon
typedef struct point {
    float x,y;
} Point;
typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;
int input_n();
Point input_point(char *prompt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
int input_n() {
    int  n;
    printf("Enter the number of sides of polygon:");
    scanf("%d",n);
    return n;
}
Point input_point(char *prompt_msg) {
 
}
int input_polygon(Polygon *p) {

}
float find_distance(Point a, Point b) {

}
void find_perimeter(Polygon* p) {

}
void output(Polygon p) {

}
int main() {
    
}