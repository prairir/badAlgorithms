import java.util.*;

public class Dropsort{
    public static ArrayList<Integer> dropSort(ArrayList<Integer> array){
        int wall = array.get(0);
        for(int i = 0; i < array.size();){
            if(array.get(i) < wall){
                array.remove(i); 
            }    
            else{
                wall = array.get(i);
                i++;
            }
        } 

        return(array);
    }
}
