/*
 * File:   Interface.hpp
 * Author: juan.garibotti
 *
 * Created on 29 de julio de 2014, 16:53
 */

#ifndef INTERFACE_HPP
#define	INTERFACE_HPP

#include <map>
#include <string>
#include <vector>
#include "FNT/Face.hpp"
#include "GLT/Shader.hpp"
#include "Language.hpp"
#include "Node.hpp"

namespace gui
{
    class GameData;
    class Interface
    {
        fnt::Face fontFace;
        std::vector<std::u32string> m_labels;
        std::map<std::string, unsigned int> m_identifierPosition;
        std::vector< glt::Shader > m_shaders;
        Counter m_player;
        Counter m_ai;
        /*Node root;*/

        public:
            Interface();
            void Init();
            void Update( GameData const& i_data );
            void LoadLanguage( Language const& i_language );
            void Draw() const;
    };
}

#endif	/* INTERFACE_HPP */

