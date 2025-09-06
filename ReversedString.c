class Student {   
    int id;   
    String name;   
    //constructor to initialize integer and string   
    Student (int i,String n){   
    id = i; 
    name = n;  
     }   
    //constructor to initialize another object   
    Student (Student s){   
    id = s.id;   
    name =s.name;   
    }   
    void display (){System.out.println(id+" "+name);}   
    public static void main (String args[ ]){   
    Student s1 = new Student (111,"ABC");   
    Student s2 = new Student (s1);   
    s1.display();   
    s2.display();   
   }   
}  