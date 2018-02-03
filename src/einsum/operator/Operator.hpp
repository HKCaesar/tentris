//
// Created by me on 17.01.18.
//

#ifndef LIBSPARSETENSOR_OPERATOR_HPP
#define LIBSPARSETENSOR_OPERATOR_HPP


#include "../Subscript.hpp"
#include "../../tensor/HyperTrieTensor.hpp"
#include <vector>

using sparsetensor::tensor::Tensor;
using sparsetensor::tensor::HyperTrieTensor;

namespace sparsetensor::einsum::Operator {


    template<typename T>
    class Operator {
    public:
        Operator(Subscript &subscript) : subscript(subscript) {}

    public:

        Subscript subscript;

        static Operator buildOperatorGraph(Subscript &subscript, std::vector<HyperTrieTensor<T>> &vector) {
            return nullptr;
        }

        virtual Tensor<T> *getResult(vector<Tensor<T>> tensors);
    };
}


#endif //LIBSPARSETENSOR_OPERATOR_HPP
