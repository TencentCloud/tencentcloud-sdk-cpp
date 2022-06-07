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

#include <tencentcloud/tione/v20211111/model/SegmentationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SegmentationInfo::SegmentationInfo() :
    m_pointsHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_grayHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

CoreInternalOutcome SegmentationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Points") && !value["Points"].IsNull())
    {
        if (!value["Points"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SegmentationInfo.Points` is not array type"));

        const rapidjson::Value &tmpValue = value["Points"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_points.push_back(item);
        }
        m_pointsHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Gray") && !value["Gray"].IsNull())
    {
        if (!value["Gray"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationInfo.Gray` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gray = value["Gray"].GetUint64();
        m_grayHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationInfo.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Points";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_points.begin(); itr != m_points.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_grayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gray, allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

}


vector<PointInfo> SegmentationInfo::GetPoints() const
{
    return m_points;
}

void SegmentationInfo::SetPoints(const vector<PointInfo>& _points)
{
    m_points = _points;
    m_pointsHasBeenSet = true;
}

bool SegmentationInfo::PointsHasBeenSet() const
{
    return m_pointsHasBeenSet;
}

string SegmentationInfo::GetLabel() const
{
    return m_label;
}

void SegmentationInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool SegmentationInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t SegmentationInfo::GetGray() const
{
    return m_gray;
}

void SegmentationInfo::SetGray(const uint64_t& _gray)
{
    m_gray = _gray;
    m_grayHasBeenSet = true;
}

bool SegmentationInfo::GrayHasBeenSet() const
{
    return m_grayHasBeenSet;
}

string SegmentationInfo::GetColor() const
{
    return m_color;
}

void SegmentationInfo::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool SegmentationInfo::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

