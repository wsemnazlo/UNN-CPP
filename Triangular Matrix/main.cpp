#include <iostream>
#include <vector>

#define SIZE 3

using namespace std;

void Menu()
{
    cout << "1 - Enter vector." << endl << "2 - Enter matrix A." << endl << "3 - Enter matrix B." << endl << "4 - Transpose matrix;" << endl;
}

template<typename T>
void printMatrixOne(vector<vector<T>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

template<typename T>
void printMatrixTwo(vector<vector<T>> mat)
{
    for (int i = 0; i < mat.size(); i++)
        cout << mat[i][0] << " ";
    cout << endl;
}

template<typename T>
void iMatrixOne(vector<vector<T>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i; j < mat.size(); j++)
            cin >> mat[i][j];
    }
}

template<typename T>
void iMatrixTwo(vector<vector<T>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
        cin >> mat[i][0];
}

template<typename T>
void nMatrix(vector<vector<T>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
            mat[i][j] = 0;
    }
}

template<typename T>
    vector<vector<T>> transpositionVec(vector<vector<T>> mat)
{
        vector<std::vector<T>> result(mat.size(), vector<T>(mat.size()));

        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat.size(); j++)
                result[i][j] = mat[j][i];
        }
        return result;
    }

int main()
{
    cout << "Hello! I'm Triangular Matrix " << SIZE << "x" << SIZE << " Calculator!" << endl;
    Menu();
    int exit = -1;

    vector<vector<int>> mat_1(SIZE, vector<int>(SIZE));
    vector<vector<int>> mat_2(SIZE, vector<int>(SIZE));
    vector<vector<int>> vec(SIZE, vector<int>(SIZE));
    vector<vector<int>> result(SIZE, vector<int>(SIZE));

    while (exit != 0)
    {
        cout << "Enter: ";
        cin >> exit;
    
        switch (exit)
        {
            case 0: {break; };
            case 1:
            {
                cout << "[i]: " << endl;
                iMatrixTwo(vec);
                printMatrixTwo(vec);
                break;
            }
            case 2:
            {
                cout << "[i][j]: " << endl;
                nMatrix(mat_1);
                iMatrixOne(mat_1);
                printMatrixOne(mat_1);
                break;
            }
            case 3:
            {
                cout << "[i][j]: " << endl;
                nMatrix(mat_2);
                iMatrixOne(mat_2);
                printMatrixOne(mat_2);
                break;
            }
            case 4:
            {
                int M;
                
                cout << "You chose transpose!" << endl << "Now choose matrix:" << endl << "1 - A, 2 - B;" << endl << "Enter: ";
                cin >> M;
                
                switch (M)
                {
                    case 1:
                    {
                        result = transpositionVec(mat_1);
                        printMatrixOne(result);
                        break;
                    }
                    case 2:
                    {
                        result = transpositionVec(mat_2);
                        printMatrixOne(result);
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}

/*
 
 int randomNumberGen(int max, int min)
 {
     int num  = min + rand() % (max - min + 1);
     return num;
 }
 
*/
 

