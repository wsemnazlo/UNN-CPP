#include <iostream>
#include <vector>

#define SIZE 3 // Matrix size change. Use only square matrix!

using namespace std;

void Menu()
{
    cout << endl << "1) Enter Matrix A." << endl;
    cout << "2) Enter Matrix B." << endl ;
    cout << "3) Matrix A + Matrix B." << endl;
    cout << "4) Matrix A - Matrix B."  << endl;
    cout << "5) Matrix A * Matrix B." << endl;
    cout << "6) Transpose Matrix A and Matrix B." << endl << endl;
    cout << "0) Exit." << endl << endl;
}

void iMatrix(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i; j < mat.size(); j++)
        {
            cout << "Enter element Triangular Matrix: ";
            cin >> mat[i][j];
        }
    }
}

void nMatrix(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
            mat[i][j] = 0;
    }
}

void pMatrix(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }
}

void aMatrix(vector<vector<int>> mat, vector<vector<int>> mat2)
{
    vector<vector<int>> result(mat.size(), vector<int>(mat.size()));
    
    if (mat.size() == mat2.size())
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat.size(); j++)
            {
                result[i][j] = mat[i][j] + mat2[i][j];
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
}

void sMatrix(vector<vector<int>> mat, vector<vector<int>> mat2)
{
    vector<vector<int>> result(mat.size(), vector<int>(mat.size()));

    if (mat.size() == mat2.size())
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat.size(); j++)
            {
                result[i][j] = mat[i][j] - mat2[i][j];
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
}

void mMatrix(vector<vector<int>> mat, vector<vector<int>> mat2)
{
    vector<vector<int>> result(mat.size(), vector<int>(mat.size()));
    
    if (mat.size() == mat2.size())
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat.size(); j++)
            {
                for (int k = 0; k < mat.size(); k++)
                    result[i][j] += mat[i][k] * mat2[k][j];
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
}

void tMatrix(vector<vector<int>> &mat)
{
    vector<vector<int>> result(mat.size(), vector<int>(mat.size()));
    
    for (int i= 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {
            result[i][j] = mat[j][i];
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Hello! I'm Triangular Matrix ( " << SIZE << "x" << SIZE << " ) Calculator!" << endl;
    Menu();
    int exit = -1;

    vector<vector<int>> mat_1(SIZE, vector<int>(SIZE));
    vector<vector<int>> mat_2(SIZE, vector<int>(SIZE));
    vector<vector<int>> result(SIZE, vector<int>(SIZE));

    while (exit != 0)
    {
        cout << "Enter number: ";
        cin >> exit;
    
        switch (exit)
        {
            case 0: {break; };
            case 1:
            {
                cout << "You Choose Enter Matrix A!" << endl;
                nMatrix(mat_1);
                iMatrix(mat_1);
                cout << "Result: " << endl;
                pMatrix(mat_1);
                break;
            }
            case 2:
            {
                cout << "You Choose Enter Matrix B!" << endl;
                nMatrix(mat_2);
                iMatrix(mat_2);
                cout << "Result: " << endl;
                pMatrix(mat_2);
                break;
            }
            case 3:
            {
                cout << "You Choose Matrix A + Matrix B!" << endl << "Result: " << endl;
                aMatrix(mat_1, mat_2);
                break;
            }
            case 4:
            {
                cout << "You Choose Matrix A - Matrix B!" << endl << "Result: " << endl;
                sMatrix(mat_1, mat_2);
                break;
            }
            case 5:
            {
                cout << "You Choose Matrix A * Matrix B!" << endl << "Result: " << endl;
                mMatrix(mat_1, mat_2);
                break;
            }
            case 6:
            {
                cout << "You Choose Transpose Matrix A and Matrix B!" << endl << "Result: " << endl;
                tMatrix(mat_1);
                cout << endl;
                tMatrix(mat_2);
                break;
            }
        }
    }
    
    return 0;
}
