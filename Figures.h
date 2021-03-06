#pragma once
#include<iostream>
#include"Fig.h"
class Trapeze : public Figure {
private:
    Vertex Vertexes[4];
public:
    Trapeze();
    Trapeze(std::istream& in);
    Vertex center() const override;

    double square() const override;

    void print() const override;
};

class Rhombus : public Figure {
private:
    Vertex Vertexes[4];
public:
    Rhombus();
    Rhombus(std::istream& in);

    Vertex center() const override;

    double square() const override;

    void print() const override;
};

class Pentagon : public Figure {
private:
    Vertex Vertexes[5];
public:
    Pentagon();
    Pentagon(std::istream& in);

    Vertex center() const override;

    double square() const override;

    void print() const override;
};