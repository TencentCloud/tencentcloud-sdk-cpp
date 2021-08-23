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

#include <tencentcloud/bda/v20200324/model/BodyRect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

BodyRect::BodyRect() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome BodyRect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BodyRect.X` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetUint64();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BodyRect.Y` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetUint64();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BodyRect.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BodyRect.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyRect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


uint64_t BodyRect::GetX() const
{
    return m_x;
}

void BodyRect::SetX(const uint64_t& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool BodyRect::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

uint64_t BodyRect::GetY() const
{
    return m_y;
}

void BodyRect::SetY(const uint64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool BodyRect::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

uint64_t BodyRect::GetWidth() const
{
    return m_width;
}

void BodyRect::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool BodyRect::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t BodyRect::GetHeight() const
{
    return m_height;
}

void BodyRect::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool BodyRect::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

