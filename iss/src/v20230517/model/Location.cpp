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

#include <tencentcloud/iss/v20230517/model/Location.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

Location::Location() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome Location::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.X` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetInt64();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Y` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetInt64();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Location.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Location::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

}


int64_t Location::GetX() const
{
    return m_x;
}

void Location::SetX(const int64_t& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool Location::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

int64_t Location::GetY() const
{
    return m_y;
}

void Location::SetY(const int64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool Location::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

uint64_t Location::GetWidth() const
{
    return m_width;
}

void Location::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool Location::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t Location::GetHeight() const
{
    return m_height;
}

void Location::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool Location::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

