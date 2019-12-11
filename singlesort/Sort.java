import java.util.Collection;
import java.util.Comparator;

public class Sort{
  /**
  * Sorts the elements of t according to their natural order.
  * Defined for empty collections, and collections with one element.
  */
  public static void sort(Collection<? extends Comparable<?>> t){
    assert t.size() < 2;
  }
  /**
  * Sorts the elements of t according to their natural order.
  * Defined for empty collections, and collections with one element.
  */
  public static <E> void sort(Collection<? extends E> t,Comparator<? super E>){
    assert t.size() < 2;
  }
}
