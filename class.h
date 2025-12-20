int insert_last(int ar[],int ln)             //class.c-(FST2L.C)        1
{
    int item;
    printf("\nEnter the number : ");
    scanf("%d",&item);
    ar[ln] = item;
    printf("%d added successfully\n",item);
    return  ln + 1;
}
int insert_specific(int ar[],int ln,int pos)                          //2
{
    int item;
    printf("\nEnter the number : ");
    scanf("%d",&item);
    for (int i = ln - 1;i >= pos; i--){
    ar[i + 1] = ar[i];
    }
    ar[pos] = item;
    printf("%d added in %d position\n",item,pos);
    return ln + 1;
}
int delete_last(int ar[],int ln,int pos)                              //3
{
    int deleted_item = ar[ln - 1];
    printf("  %d\n",deleted_item);
    printf("%d is Deleted from %d position\n",deleted_item,pos - 1);
    return ln - 1;
}
int delete_spesific(int ar[],int ln,int pos)                          //4
{
    int deleted_item = ar[pos];
    scanf("%d",&pos);
    //pos = pos - 1;
    for (int i = pos; i < ln; i++){
        ar[i] = ar[i + 1];
    }
    printf("\n%d is Successfully deleted from %d position",deleted_item,pos);
    return ln - 1;
}
void travarsing_array(int ar[],int start,int end)                     //5
{
    printf("Enter the Start : ");
    scanf("%d",&start);
    start = start - 1;
    printf("Enter the End : ");
    scanf("%d",&end);
    end = end - 1;
    for (int i = start; i <= end; i++){
    printf("\nhere .......  : %d\n ",ar[i]);
    }
}
void linear_scarch(int ar[],int ln)                                  //6
{
    int item;
    printf("\nEnter the item to be scarch : ");
    scanf("\n%d",&item);
    for (int i = 0; i < ln; i++){
        if(item == ar[i]){
    printf("Item found  : %d\n ",ar[i]);
    }}
} 
void asc(int ar[],int ln)                                             //7
{
    int temp;
    for (int i = 0; i < ln; i++){
        for(int j = i; j < ln;j++){
            if (ar[i] > ar[j]){
                temp  = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
}
void dsc(int ar[],int ln)                                               //7
{
    int temp;
    for (int i = 0; i < ln; i++){
        for(int j = i; j < ln; j++){
            if (ar[i] < ar[j]){
                temp  = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
}
void display_array(int ar[],int ln)                                   //9
{
    for (int i = 0; i < ln; i++){
    printf("  %d ",ar[i]);
}
    printf("\n");
}

