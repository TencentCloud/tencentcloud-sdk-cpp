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

#include <tencentcloud/iai/v20200303/model/Hair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

Hair::Hair() :
    m_lengthHasBeenSet(false),
    m_bangHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

CoreInternalOutcome Hair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Hair.Length` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_length.Deserialize(value["Length"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Bang") && !value["Bang"].IsNull())
    {
        if (!value["Bang"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Hair.Bang` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bang.Deserialize(value["Bang"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bangHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Hair.Color` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_color.Deserialize(value["Color"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Hair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_length.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bang.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_color.ToJsonObject(value[key.c_str()], allocator);
    }

}


AttributeItem Hair::GetLength() const
{
    return m_length;
}

void Hair::SetLength(const AttributeItem& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool Hair::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

AttributeItem Hair::GetBang() const
{
    return m_bang;
}

void Hair::SetBang(const AttributeItem& _bang)
{
    m_bang = _bang;
    m_bangHasBeenSet = true;
}

bool Hair::BangHasBeenSet() const
{
    return m_bangHasBeenSet;
}

AttributeItem Hair::GetColor() const
{
    return m_color;
}

void Hair::SetColor(const AttributeItem& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool Hair::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

