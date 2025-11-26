//array of ptr to structures
    struct book *books[3]={&b1,&b2,&b3};
    int searchid,i,found=0;
    
    printf("enter book id to search");
    scanf("%d", &searchid);
    for(i=0; i<3; i++)
    {
        if(books[i]-->id == searchid)
        {
            found=1;
            printf("book found");
            
            printf("id=%d",books[i]->id);
            printf("title=%s",books[i]->title);
            printf("title=%s",books[i]->author);
            break;
        }
    }
        if(!found)
        printf("not found");
        return 0;
        
    
    
}
