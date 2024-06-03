/*15. Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : 
Marks in Maths >=65 
and Marks in Phy >=55
and Marks in Chem>=50 
and Total in all three subject >=190 
or 
Total in Maths and Physics >=140
-------------------------------------- 
Input the marks obtained in Physics :65 
Input the marks obtained in Chemistry :51
Input the marks obtained in Mathematics :72 
Total marks of Maths,Physics and Chemistry : 188
Total marks of Maths and Physics : 137 
The candidate is not eligible.*/

#include <stdio.h>
main()
{
    int Maths,Physics,Chemistry,Total_3_sub,Total_maths_phy;
    
    printf("Input the marks obtained in Mathematics :");
    scanf("%d",&Maths);
    printf("Input the marks obtained in Chemistry :");
    scanf("%d",&Chemistry);
    printf("Input the marks obtained in Physics :");
    scanf("%d",&Physics);
    
        printf("\n.........................................\n");

    Total_3_sub = Maths+Physics+Chemistry;
    Total_maths_phy = Maths+Physics;
    

    printf("the Total three subject : %d\n",Total_3_sub);
    printf("the Total in Maths and Physics : %d\n",Total_maths_phy);
    
    printf("\n..............................................\n");

    
    if(Maths >=65 )
    {
        if(Maths < 65){
            printf("%d student is not eligible",Maths);
        }else{
            printf("%d student is eligible",Maths);
        }
    } 
    
    printf("\n");
    
    if(Chemistry >=50 )
    {
        if(Chemistry < 50){
            printf("%d student is not eligible",Chemistry);
        } else {
                    printf("%d student is eligible",Chemistry);

        }
    }
        
    printf("\n");

    if(Physics >=55)
    {
        if(Physics < 55){
            printf("%d student is not eligible",Physics);
        } else{
                    printf("%d student is eligible",Physics);

        }
    } 
    
    printf("\n");

    if(Total_3_sub >=190 )
    {
        if(Total_3_sub < 190){
            printf("%d student is not eligible",Total_3_sub);
        } else{
                    printf("%d studentis eligible",Total_3_sub);
        }
    } 
        
    printf("\n");

    if(Total_maths_phy >=140 )
    {
        if(Total_maths_phy < 140){
            printf("%d student is not eligible ",Total_maths_phy);
        }else {
                    printf("%d student is eligible",Total_maths_phy);
        }
    } 
        
    else {
        printf("The candidate is not eligible");
    }
    
    
    return 0;
}
