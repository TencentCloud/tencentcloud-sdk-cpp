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

#include <tencentcloud/bda/v20200324/model/LowerBodyCloth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

LowerBodyCloth::LowerBodyCloth() :
    m_colorHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome LowerBodyCloth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LowerBodyCloth.Color` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_color.Deserialize(value["Color"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LowerBodyCloth.Length` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_length.Deserialize(value["Length"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LowerBodyCloth.Type` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_type.Deserialize(value["Type"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LowerBodyCloth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_color.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_length.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_type.ToJsonObject(value[key.c_str()], allocator);
    }

}


LowerBodyClothColor LowerBodyCloth::GetColor() const
{
    return m_color;
}

void LowerBodyCloth::SetColor(const LowerBodyClothColor& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool LowerBodyCloth::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

LowerBodyClothLength LowerBodyCloth::GetLength() const
{
    return m_length;
}

void LowerBodyCloth::SetLength(const LowerBodyClothLength& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool LowerBodyCloth::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

LowerBodyClothType LowerBodyCloth::GetType() const
{
    return m_type;
}

void LowerBodyCloth::SetType(const LowerBodyClothType& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LowerBodyCloth::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

