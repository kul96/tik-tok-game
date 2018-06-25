#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     cout << "This is first Game of Kuldeep" << endl;
     char  arr[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'}};
     cout<<endl;
     cout<<"Two User X(small x) and 0(zero)\n";
     int t=9;
     while(t--){
     int a;
     if(t%2==0){ // for the first user

  startX:
          cout<<"enter the User choice for first user(X) input as \n";
          cout<<"[1][2][3]\n";
          cout<<"[4][5][6]\n";
          cout<<"[7][8][9]\n";
          cin>>a;

            if(a==1 )
            { if(arr[0][0]!='x' && arr[0][0]!='0' )
               {  arr[0][0]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                    goto startX;
                  }
            }else if(a==2)
             { if(arr[0][1]!='x' && arr[0][1]!='0' )
               {  arr[0][1]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                    goto startX;
                  }
             }else if(a==3 )
            { if(arr[0][2]!='x' && arr[0][2]!='0' )
               {  arr[0][2]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                    goto startX;
                  }
            } else if(a==4)
            { if(arr[1][0]!='x' && arr[1][0]!='0' )
               {  arr[1][0]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                     goto startX;
                   }
            } else if(a==5 )
            { if(arr[1][1]!='x' && arr[1][1]!='0' )
               {  arr[1][1]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                   goto startX;
                   }
            } else if(a==6 )
            { if(arr[1][2]!='x' && arr[1][2]!='0' )
               {  arr[1][2]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto startX;
                  }
            } else if(a==7 )
            { if(arr[2][0]!='x' && arr[2][0]!='0' )
               {  arr[2][0]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto startX;
                  }
            } else if(a==8 )
            { if(arr[2][1]!='x' && arr[2][1]!='0' )
               {  arr[2][1]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto startX;
                  }
            } else if(a==9 )
            { if(arr[2][2]!='x' && arr[2][2]!='0' )
               {  arr[2][2]='x';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto startX;
                  }
            }else{
               cout<<"you enter at wrong position\n";
                  goto startX;
             }
             // for display
             for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                   cout<<"|"<<arr[i][j];
                }  cout<<"| "<<endl;
             }

         if( (arr[0][0]=='x' && arr[0][1]=='x' && arr[0][2]=='x') ||
            (arr[1][0]=='x' && arr[1][1]=='x' && arr[1][2]=='x') ||
            (arr[2][0]=='x' && arr[2][1]=='x' && arr[2][2]=='x')||
            (arr[0][0]=='x' && arr[1][0]=='x' && arr[2][0]=='x') ||
            (arr[0][1]=='x' && arr[1][1]=='x' && arr[2][1]=='x') ||
            (arr[0][2]=='x' && arr[1][2]=='x' && arr[2][2]=='x') ||
            (arr[0][0]=='x' && arr[1][1]=='x' && arr[2][2]=='x') ||
            (arr[0][2]=='x' && arr[1][1]=='x' && arr[2][0]=='x')
           )
            {
              cout<<"Player X win \n";
              break;
            }
    }else{// it was for the alternate to user
      start0:
          cout<<"enter the User choice for first user(0) input as \n";
          cout<<"[1][2][3]\n";
          cout<<"[4][5][6]\n";
          cout<<"[7][8][9]\n";
          cin>>a;

            if(a==1 )
            { if(arr[0][0]!='x' && arr[0][0]!='0' )
               {  arr[0][0]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                    goto start0;
                  }
            }else if(a==2)
             { if(arr[0][1]!='x' && arr[0][1]!='0' )
               {  arr[0][1]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                    goto start0;
                  }
             }else if(a==3 )
            { if(arr[0][2]!='x' && arr[0][2]!='0' )
               {  arr[0][2]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                    goto start0;
                  }
            } else if(a==4)
            { if(arr[1][0]!='x' && arr[1][0]!='0' )
               {  arr[1][0]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                     goto start0;
                   }
            } else if(a==5 )
            { if(arr[1][1]!='x' && arr[1][1]!='0' )
               {  arr[1][1]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                   goto start0;
                   }
            } else if(a==6 )
            { if(arr[1][2]!='x' && arr[1][2]!='0' )
               {  arr[1][2]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto start0;
                  }
            } else if(a==7 )
            { if(arr[2][0]!='x' && arr[2][0]!='0' )
               {  arr[2][0]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto start0;
                  }
            } else if(a==8 )
            { if(arr[2][1]!='x' && arr[2][1]!='0' )
               {  arr[2][1]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto start0;
                  }
            } else if(a==9 )
            { if(arr[2][2]!='x' && arr[2][2]!='0' )
               {  arr[2][2]='0';
                }else
                  { cout<<"you enter at wrong position\n";
                  goto start0;
                  }
            }else{
               cout<<"you enter at wrong position\n";
                  goto start0;
             }
            // for display
             for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                   cout<<"|"<<arr[i][j];
                }  cout<<"| "<<endl;
             }


         if((arr[0][0]=='0' && arr[0][1]=='0' && arr[0][2]=='0') ||
            (arr[1][0]=='0' && arr[1][1]=='0' && arr[1][2]=='0' )||
            (arr[2][0]=='0' && arr[2][1]=='0' && arr[2][2]=='0' )||
            (arr[0][0]=='0' && arr[1][0]=='0' && arr[2][0]=='0') ||
            (arr[0][1]=='0' && arr[1][1]=='0' && arr[2][1]=='0') ||
            (arr[0][2]=='0' && arr[1][2]=='0' && arr[2][2]=='0') ||
            (arr[0][0]=='0' && arr[1][1]=='0' && arr[2][2]=='0' )||
            (arr[0][2]=='0' && arr[1][1]=='0' && arr[2][0]=='0' )
           )
            {
              cout<<"player 0 win \n";
              break;
            }

     }

} cout<<"Game Over Good luck for next time\n";

    return 0;
}
