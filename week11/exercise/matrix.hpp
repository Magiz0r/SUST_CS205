// matrix.hpp
#pragma once
#include <iostream>
#include <memory>

class Matrix {
    private:
        int row_size = 0;
        int col_size = 0;
        std::shared_ptr<float> data;

        int index(int row, int col) const {
            return row * col_size + col;
        }

    public:
        Matrix(int row, int col) {
            row_size = row;
            col_size = col;
            data = std::shared_ptr<float>(
                new float[row_size * col_size],
                std::default_delete<float[]>()
            );

        for (int i = 0; i < row_size * col_size; i++) {
            data.get()[i] = float(0);
        }
    }

        Matrix(const Matrix& other): 
            row_size(other.row_size), col_size(other.col_size), data(other.data) {};


        // Result will change, don't need const here
        Matrix operator=(const Matrix& other) {
            if (this != &other) {
                row_size = other.row_size;
                col_size = other.col_size;
                data = other.data;
            }
            return *this; // Because we assign a new matrix to another matrix, necessary to return what is inside, using a pointer
        }

        // Result won't change, need const to keep safety
        Matrix operator+(const Matrix& other) const {
            if (row_size != other.row_size || col_size != other.col_size) {
                throw std::runtime_error("Matrix size mismatch");
            }

            Matrix result(row_size, col_size);

            for (int i = 0; i < row_size * col_size; i++) {
                result.data.get()[i] = data.get()[i] + other.data.get()[i];
            }
            
            return result;
        }


        // Operator overloading to change the element in a matrix
        float& operator()(int row, int col) {
            return data.get()[index(row, col)];
        }

        // Operator overloading for reading the element only, and the matrix object cannot be changed
        // The first const: you cannot change the return value
        // The second const: you cannot change the element in your matrix object
        const float& operator()(int row, int col) const {
            return data.get()[index(row, col)];
        }


        void print() {
            for (int i = 0; i < row_size; i++) {
                for (int j = 0; j < col_size; j++) {
                    std::cout << data.get()[i * col_size + j] << " ";
                }
                std::cout << std::endl;
            }
        }
};

