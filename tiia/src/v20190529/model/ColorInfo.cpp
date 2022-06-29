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

#include <tencentcloud/tiia/v20190529/model/ColorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

ColorInfo::ColorInfo() :
    m_colorHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

CoreInternalOutcome ColorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColorInfo.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ColorInfo.Percentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetDouble();
        m_percentageHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColorInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

}


string ColorInfo::GetColor() const
{
    return m_color;
}

void ColorInfo::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool ColorInfo::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

double ColorInfo::GetPercentage() const
{
    return m_percentage;
}

void ColorInfo::SetPercentage(const double& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool ColorInfo::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

string ColorInfo::GetLabel() const
{
    return m_label;
}

void ColorInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ColorInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

