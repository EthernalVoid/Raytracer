/* 
 * File:   Composite.hpp
 * Author: Benedikt Vogler
 *
 * Created on 21. August 2014, 10:51
 */

#ifndef COMPOSITE_HPP
#define	COMPOSITE_HPP

#include "RenderObject.hpp"
#include <vector>


class Composite : public RenderObject {
public:
    
    void add_child(std::shared_ptr<RenderObject> const& child);
    virtual std::pair<bool, Ray> intersect(const Ray& ray) const;

private:
    std::vector<RenderObject> children;
    

};

#endif	/* COMPOSITE_HPP */
