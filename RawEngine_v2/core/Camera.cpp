

//
// Created by wesbr on 09/10/2026.
//

#include "Camera.h"

#include <glm/ext/matrix_clip_space.hpp>


namespace core {
    Camera::Camera(glm::vec3 pos, glm::vec3 target, glm::vec3 up, float viewAngle, float near, float far, int width, int height) {
        this->cameraPos = pos;
        this->cameraTarget = target;

        glm::vec3 cameraDirection = glm::normalize(pos - target);
        glm::vec3 cameraRight = glm::normalize(glm::cross(up, cameraDirection));
        glm::vec3 cameraUp =glm::cross(cameraDirection, cameraRight);

        this->view = glm::lookAt(cameraPos, cameraTarget, cameraUp);
        this->projection = glm::perspective(glm::radians(viewAngle), static_cast<float>(width) / static_cast<float>(height), near, far);
        this->PVMatrix = projection * view;
    }

    void Camera::Translate(glm::vec3 direction, float speed) {

    }

    void Camera::CalculateTransform() {

    }
    void Camera::CalculatePVMatrix(/*viewAngle, cameraTarget, cameraUp*/) {
        // this->view = glm::lookAt(cameraPos, cameraTarget, cameraUp);
        // this->projection = glm::perspective(glm::radians(viewAngle), static_cast<float>(width) / static_cast<float>(height), near, far);
        // this->PVMatrix = projection * view;
    }

    glm::mat4 Camera::GetViewMatrix() const {
        return view;
    }
    glm::mat4 Camera::GetProjectionMatrix() const {
        return projection;
    }
    glm::mat4 Camera::GetPVMatrix() const {
        return PVMatrix;
    }
}
