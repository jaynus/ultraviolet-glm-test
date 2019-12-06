#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>
#include <memory.h>

extern "C" {
    void glm_ortho(float *dst) {
        glm::mat4 ortho = glm::ortho(0.0f, 1024.0f, 768.0f, 0.0f, 0.1f, 1000.0f);
        std::cout << glm::to_string(ortho) << std::endl;

        memcpy(dst, glm::value_ptr(ortho), sizeof(glm::mat4));
    }
}