int input() {
	int degree;
	printf("\n\tEnter the degree : ");
	scanf("%d", &degree);
	return degree;
}
// Sine calculation
void calculateSine() {
	//printf("\n************ WELCOME TO SINE ANGLE CALCULATOR ************");
	int degree = input();
	float radian = degree *(PI / 180.0);
	printf("\tValue of sin %d is : %.2f\n\n", degree, sin(radian));
}

// Cosine calculation
void calculateCosine() {
	//printf("\n************ WELCOME TO COSINE ANGLE CALCULATOR ************");
	int degree = input();
	float radian = degree *(PI / 180.0);
	printf("\tValue of cos %d is : %.2f\n\n", degree, cos(radian));
}

// Tangent calculation
void calculateTangent() {
	//printf("\n************ WELCOME TO TANGENT ANGLE CALCULATOR ************");
	int degree = input();
	float radian = degree *(PI / 180.0);
	printf("\tValue of tan %d is : %.2f\n\n", degree, tan(radian));
}

