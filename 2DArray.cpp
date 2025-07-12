#include <iostream>
#include <vector>
using namespace std;
 

      /*      MAXIMUM ROW SUM*/
/*int maxrowsum(int mat[][3],int rows,int cols){
    int maxsum=INT_MIN;
    for(int i=0;i<rows;i++){
        int maxsumI=0;
        for(int j=0;j<cols;j++){
            maxsumI +=mat[i][j];
        }
        maxsum=max(maxsum,maxsumI);
    }
    return maxsum;
}*/



      /*      MAXIMUM colum SUM( hw but not solved correctly)*/ 
  /*  int maxcolsum(int mat[][3],int rows,int cols){
    int maxsum=INT_MIN;
    for(int i=0;i<cols;i++){
        int maxsumI=0;
        for(int j=0;j<rows;j++){
            maxsumI +=mat[i][j];
        }
        maxsum=max(maxsum,maxsumI);
    }
    return maxsum;
}*/


//pd:j=i
//sd: j=n-i-1

/*int digsum(int matrix[][4],int n){ 
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
       for(int j=0;j<n;j++){    //o^2 we can  optimize , if we have value of n then we dont requird j value , we can calculate directly using check condition
            if(i==j){
                sum+=matrix[i][j];
            }else if(j==n-i-1){
                sum+=matrix[i][j];
            }
        }
  // optimal

   if(i !=n-i-1){
    sum+= matrix[i][n-i-1];
   }

    }
        return sum;
}

*/


int main(){
     //define
     //int matrix[4][3];// 4 is the number of rows and 3 is the number of the columnes.datatype name [r][c];
     

     //generaly when we create the 2d matrix we pass there total no of rows and colmne
    // int rows=3;
     //int cols=3;

     //initialization

    // int mat[3][3]={{1,4,3},{4,8,6},{7,13,9}};
     //int mat[4][3];
     //Access  [row][columne]
    // cout<< mat[2][2]<<endl;


//input
 /*for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }

    }
//for output
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }*/



   /* ************************* LINEAR SEARCH IN 2D ARRAY*/
// int key=8;
// for(int i=0;i<rows;i++){
//     for(int j=0;j<rows;j++){
//         if(mat[i][j]==key){
//             cout<<pair<i,j>;
//         }
//     }
// }     
      


      /*      MAXIMUM ROW SUM*/

   /*
     cout<<maxcolsum(mat,rows,cols)<<endl;
    cout<<maxrowsum(mat,rows,cols)<<endl;
   */

 /* int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int n=4;
  cout<< digsum(matrix,n)<<endl;
*/

/*********************************  2D Vector********************** */

vector<vector<int> >  mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

cout<< mat[2][2]<<endl;

    return 0;
}