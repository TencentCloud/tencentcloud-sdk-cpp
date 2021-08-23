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

#include <tencentcloud/iai/v20200303/model/Hat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

Hat::Hat() :
    m_styleHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

CoreInternalOutcome Hat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Hat.Style` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_style.Deserialize(value["Style"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_styleHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Hat.Color` is not object type").SetRequestId(requestId));
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

void Hat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_style.ToJsonObject(value[key.c_str()], allocator);
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


AttributeItem Hat::GetStyle() const
{
    return m_style;
}

void Hat::SetStyle(const AttributeItem& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool Hat::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

AttributeItem Hat::GetColor() const
{
    return m_color;
}

void Hat::SetColor(const AttributeItem& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool Hat::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

