/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Distribution.h
 * Author: pierucci
 *
 * Created on 4 mai 2017, 12:09
 */

#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

class Distribution {
public:
    Distribution();
    Distribution(const Distribution& orig);
    virtual std::vector<double> generate();
    virtual ~Distribution();
    void setDimension(int dim);
protected:
    int dimension;

};

#endif /* DISTRIBUTION_H */

