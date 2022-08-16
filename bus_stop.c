#include<stdio.h>
#include<stdbool.h>
int main(){
    int bus_stops=0, entry=0, leave=0; // initialization
    int sleeping_men= 0; 
    bool accept;
    printf("Enter the numbers of bus stops: ");
    scanf("%d", &bus_stops);
    for (int bs = 0; bs <= bus_stops; bs++)
    {
        printf("\tBUS STOP!!! %d\n", bs);
        do
        {
            if (bs == 0) // start bus line
            {
                printf("Enter the numbers of passengers that entry: ");
                scanf("%d", &entry);
                accept = true;
            }
            else if (bs == bus_stops) // end bus line
            {
                printf("Enter the numbers of passengers that exit: ");
                scanf("%d", &leave);
                accept = true;
            }
            else{

                printf("Enter the numbers of passengers that entry: ");
                scanf("%d", &entry);
                printf("Enter the numbers of passengers that exit: ");
                scanf("%d", &leave);
                accept = true;
            }
            if (entry < 0 && leave < 0)
            {
                printf("The number you entered is not to be less than zero.");
                accept = false;
            }
            
            
            
        } while (!accept);
        
        
        
        sleeping_men += entry;
        sleeping_men -= leave;

    }
    printf("The sleeping men are: %d.", sleeping_men);
    

}
/*
မှတ်တိုင် လူအဝင် လူအထွက်

  ၀     ၆      ၀
  ၁     ၁၀     ၁
  ၂     ၁၅     ၈
  ၃      ၄    ၂၀
  ၄     ၁၀    ၁၀
  ၈      ၀    ၁၀ 
  */
