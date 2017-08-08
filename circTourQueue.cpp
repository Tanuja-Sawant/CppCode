/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/
/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
    int start=0;
    int end=1;
   int current_petrol = p[start].petrol-p[start].distance;
   
   while(current_petrol<0 || start!=end){
       while(current_petrol < 0 && start!=end){
           current_petrol-= p[start].petrol-p[start].distance;
           start=(start + 1)%n;
           if (start == 0)
               return -1;
       }
       current_petrol += p[end].petrol - p[end].distance;
       end=(end + 1)%n;
   }
}
