 struct student{
 char name[];
 int ID;
 }
 int main() {
 student s1,s2;
 s1.name="Rahim";
 s1.ID=101; 
 struct student* s_ptr = s2;
 scanf("%s",&s_ptr.name);
 scanf("%d",&s_ptr.ID);
 }
