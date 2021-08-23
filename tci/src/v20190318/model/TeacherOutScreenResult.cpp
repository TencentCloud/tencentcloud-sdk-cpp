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

#include <tencentcloud/tci/v20190318/model/TeacherOutScreenResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

TeacherOutScreenResult::TeacherOutScreenResult() :
    m_classHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_topHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

CoreInternalOutcome TeacherOutScreenResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Class") && !value["Class"].IsNull())
    {
        if (!value["Class"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherOutScreenResult.Class` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_class = string(value["Class"].GetString());
        m_classHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherOutScreenResult.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherOutScreenResult.Left` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetInt64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherOutScreenResult.Top` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetInt64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherOutScreenResult.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TeacherOutScreenResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_class.c_str(), allocator).Move(), allocator);
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


string TeacherOutScreenResult::GetClass() const
{
    return m_class;
}

void TeacherOutScreenResult::SetClass(const string& _class)
{
    m_class = _class;
    m_classHasBeenSet = true;
}

bool TeacherOutScreenResult::ClassHasBeenSet() const
{
    return m_classHasBeenSet;
}

int64_t TeacherOutScreenResult::GetHeight() const
{
    return m_height;
}

void TeacherOutScreenResult::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool TeacherOutScreenResult::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t TeacherOutScreenResult::GetLeft() const
{
    return m_left;
}

void TeacherOutScreenResult::SetLeft(const int64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool TeacherOutScreenResult::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

int64_t TeacherOutScreenResult::GetTop() const
{
    return m_top;
}

void TeacherOutScreenResult::SetTop(const int64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool TeacherOutScreenResult::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

int64_t TeacherOutScreenResult::GetWidth() const
{
    return m_width;
}

void TeacherOutScreenResult::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool TeacherOutScreenResult::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

