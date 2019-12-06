#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>
#include <memory.h>

extern "C" {
    void glm_ortho(float a, float b, float c, float d, float e, float f, float *dst) {
        glm::mat4 ortho = glm::ortho(a, b, c, d, e, f);
        std::cout << glm::to_string(ortho) << std::endl;

        memcpy(dst, glm::value_ptr(ortho), sizeof(glm::mat4));
    }
}