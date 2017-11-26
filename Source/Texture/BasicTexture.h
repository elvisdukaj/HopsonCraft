#ifndef TEXTURE_H_INCLUDED
#define TEXTURE_H_INCLUDED

#include <GL/gl3w.h>
#include <string>

class BasicTexture
{
    public:
        bool loadFromFile(const std::string& fileName);
        ~BasicTexture();

        void bind() const;
        void unbind() const;

    private:
        void clear();

        GLuint m_textureID = 0;
};

#endif // TEXTURE_H_INCLUDED
