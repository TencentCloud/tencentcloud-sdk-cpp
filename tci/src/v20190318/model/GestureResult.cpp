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

#include <tencentcloud/tci/v20190318/model/GestureResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

GestureResult::GestureResult() :
    m_classHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_topHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

CoreInternalOutcome GestureResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Class") && !value["Class"].IsNull())
    {
        if (!value["Class"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GestureResult.Class` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_class = string(value["Class"].GetString());
        m_classHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GestureResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GestureResult.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GestureResult.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GestureResult.Top` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetInt64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GestureResult.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GestureResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_class.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

}


string GestureResult::GetClass() const
{
    return m_class;
}

void GestureResult::SetClass(const string& _class)
{
    m_class = _class;
    m_classHasBeenSet = true;
}

bool GestureResult::ClassHasBeenSet() const
{
    return m_classHasBeenSet;
}

double GestureResult::GetConfidence() const
{
    return m_confidence;
}

void GestureResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool GestureResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t GestureResult::GetHeight() const
{
    return m_height;
}

void GestureResult::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool GestureResult::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t GestureResult::GetLeft() const
{
    return m_left;
}

void GestureResult::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool GestureResult::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

int64_t GestureResult::GetTop() const
{
    return m_top;
}

void GestureResult::SetTop(const int64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool GestureResult::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

int64_t GestureResult::GetWidth() const
{
    return m_width;
}

void GestureResult::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool GestureResult::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

