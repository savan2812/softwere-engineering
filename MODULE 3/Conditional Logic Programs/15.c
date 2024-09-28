/*15. Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
int main()
{
	int maths,phy,chem,total,sumofmathNphy;
	
	printf("\nEnter your math subject marks:");
	scanf("%d",&maths);
	
	printf("\nEnter your physics subject marks:");
	scanf("%d",&phy);
	
	printf("\nEnter your chemistry subject marks:");
	scanf("%d",&chem);
	
	total = maths + phy + chem ;  
	
	printf("\nTotal of 3 subject is = %d", total);
	
	sumofmathNphy = maths + phy ;
	
	printf("\nThe sum of math and physics marks is= %d", sumofmathNphy);
	
	if((maths>=65 && phy>=55 && chem>=50 && total>=190)|| (sumofmathNphy>=140))
	{
		printf("\nThe cadidate is eligible.");
	}
	else  
	{
		printf("\nThe candidate is not eligible.");
	}
	
	return 0;
}

