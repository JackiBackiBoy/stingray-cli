#pragma once

#include <cmath>
#include <cstdint>

struct Vec2 {
    float x = 0.0f;
    float y = 0.0f;
};

struct Vec3 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};

/* Operator overloads */
// Vec2
inline Vec2 operator+(const Vec2& u, const Vec2& v) {
    return { u.x + v.x, u.y + v.y };
}

inline Vec2 operator-(const Vec2& u, const Vec2& v) {
    return { u.x - v.x, u.y - v.y };
}

inline Vec2 operator*(const Vec2& u, float scalar) {
    return { u.x * scalar, u.y * scalar };
}

inline Vec2 operator*(float scalar, const Vec2& u) {
    return u * scalar;
}

inline Vec3 operator+(const Vec3& u, const Vec3& v) {
    return { u.x + v.x, u.y + v.y, u.z + v.z };
}

// Vec3
inline Vec3 operator-(const Vec3& u, const Vec3& v) {
    return { u.x - v.x, u.y - v.y, u.z - v.z };
}

inline Vec3 operator*(const Vec3& u, float scalar) {
    return { u.x * scalar, u.y * scalar, u.z * scalar };
}

inline Vec3 operator*(float scalar, const Vec3& u) {
    return u * scalar;
}

inline float dot(const Vec3& u, const Vec3& v) {
    return u.x * v.x + u.y * v.y + u.z * v.z;
}

inline Vec3 normalize(const Vec3& u) {
    return (1.0f / sqrtf(u.x * u.x + u.y * u.y + u.z * u.z)) * u;
}

struct Ray {
    Vec3 origin{};
    Vec3 dir{};

    inline Vec3 at(float t) const {
        return origin + t * dir;
    }
};

/* Converters */
inline uint32_t rgbToHex(Vec3 color) {
    const uint8_t r = (uint8_t)(color.x * 255.0f);
    const uint8_t g = (uint8_t)(color.y * 255.0f);
    const uint8_t b = (uint8_t)(color.z * 255.0f);

    return 0xff000000 | (b << 16) | (g << 8) | r;
}
