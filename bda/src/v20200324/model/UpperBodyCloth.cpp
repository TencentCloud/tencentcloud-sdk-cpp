/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/bda/v20200324/model/UpperBodyCloth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

UpperBodyCloth::UpperBodyCloth() :
    m_textureHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_sleeveHasBeenSet(false)
{
}

CoreInternalOutcome UpperBodyCloth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Texture") && !value["Texture"].IsNull())
    {
        if (!value["Texture"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpperBodyCloth.Texture` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_texture.Deserialize(value["Texture"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textureHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpperBodyCloth.Color` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_color.Deserialize(value["Color"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Sleeve") && !value["Sleeve"].IsNull())
    {
        if (!value["Sleeve"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpperBodyCloth.Sleeve` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sleeve.Deserialize(value["Sleeve"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sleeveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpperBodyCloth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Texture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_texture.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_color.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sleeveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sleeve";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sleeve.ToJsonObject(value[key.c_str()], allocator);
    }

}


UpperBodyClothTexture UpperBodyCloth::GetTexture() const
{
    return m_texture;
}

void UpperBodyCloth::SetTexture(const UpperBodyClothTexture& _texture)
{
    m_texture = _texture;
    m_textureHasBeenSet = true;
}

bool UpperBodyCloth::TextureHasBeenSet() const
{
    return m_textureHasBeenSet;
}

UpperBodyClothColor UpperBodyCloth::GetColor() const
{
    return m_color;
}

void UpperBodyCloth::SetColor(const UpperBodyClothColor& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool UpperBodyCloth::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

UpperBodyClothSleeve UpperBodyCloth::GetSleeve() const
{
    return m_sleeve;
}

void UpperBodyCloth::SetSleeve(const UpperBodyClothSleeve& _sleeve)
{
    m_sleeve = _sleeve;
    m_sleeveHasBeenSet = true;
}

bool UpperBodyCloth::SleeveHasBeenSet() const
{
    return m_sleeveHasBeenSet;
}

