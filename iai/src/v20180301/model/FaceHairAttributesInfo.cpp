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

#include <tencentcloud/iai/v20180301/model/FaceHairAttributesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

FaceHairAttributesInfo::FaceHairAttributesInfo() :
    m_lengthHasBeenSet(false),
    m_bangHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

CoreInternalOutcome FaceHairAttributesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceHairAttributesInfo.Length` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetInt64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Bang") && !value["Bang"].IsNull())
    {
        if (!value["Bang"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceHairAttributesInfo.Bang` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bang = value["Bang"].GetInt64();
        m_bangHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceHairAttributesInfo.Color` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_color = value["Color"].GetInt64();
        m_colorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceHairAttributesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_bangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bang, allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_color, allocator);
    }

}


int64_t FaceHairAttributesInfo::GetLength() const
{
    return m_length;
}

void FaceHairAttributesInfo::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool FaceHairAttributesInfo::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

int64_t FaceHairAttributesInfo::GetBang() const
{
    return m_bang;
}

void FaceHairAttributesInfo::SetBang(const int64_t& _bang)
{
    m_bang = _bang;
    m_bangHasBeenSet = true;
}

bool FaceHairAttributesInfo::BangHasBeenSet() const
{
    return m_bangHasBeenSet;
}

int64_t FaceHairAttributesInfo::GetColor() const
{
    return m_color;
}

void FaceHairAttributesInfo::SetColor(const int64_t& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool FaceHairAttributesInfo::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

