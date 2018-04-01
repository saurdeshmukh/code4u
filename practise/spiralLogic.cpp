    int i=0,j=0,k=0,x=0,y=0;
    while(m>0&&n>0)
    {
        if(m==1)
        for(i=0;i<n;i++)
        output_arr[k++]=arr[0][n--];
        else if(n==1)
        for(i=0;i<n;i++)
        output_arr[k++]=arr[m--][0];
        else
        {
            for(i=0;i<m-1;i++)
                output_arr[k++]=arr[x][y++];
            for(j=0;j<n-1;j++)
                output_arr[k++]=arr[x++][y];
            for(i=0;i<m-1;i++)
                output_arr[k++]=arr[x][y--];
            for(j=0;j<n-1;j++)
                output_arr[k++]=arr[x--][y];
            x++;
            y++;
            m=m-2;
            n=n-2;
        }
    }



int x=0, y=0, k=0;
    while(m>0 && n>0){
        if(m==1){
            for(int i=0; i<n; i++)
                output_arr[k++] = arr[x][y++];
            break;
        }else if(n==1){
            for(int i=0; i<m; i++)
                output_arr[k++] = arr[x++][y];
            break;
        }
        for(int i=0;i<n-1;i++)
            output_arr[k++] = arr[x][y++];
        for(int j=0;j<m-1;j++)
            output_arr[k++] = arr[x++][y];
        for(int i=0;i<n-1;i++)
            output_arr[k++] = arr[x][y--];
        for(int j=0;j<m-1;j++)
            output_arr[k++] = arr[x--][y];
        x++;
        y++;
        m=m-2;
        n=n-2;
    }