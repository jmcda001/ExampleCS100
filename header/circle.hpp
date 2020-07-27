#ifndef __CIRCLE_HPP
#define __CIRCLE_HPP

class Circle {
    private:
        int radius;

    public:
        // Circle() { }
        explicit Circle(int radius) : radius(radius) { }

        float area();
};


#endif // __CIRCLE_HPP
