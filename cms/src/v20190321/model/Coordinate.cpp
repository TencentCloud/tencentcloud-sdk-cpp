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

#include <tencentcloud/cms/v20190321/model/Coordinate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

Coordinate::Coordinate() :
    m_widthHasBeenSet(false),
    m_cyHasBeenSet(false),
    m_cxHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome Coordinate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Coordinate.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Cy") && !value["Cy"].IsNull())
    {
        if (!value["Cy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Coordinate.Cy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cy = value["Cy"].GetInt64();
        m_cyHasBeenSet = true;
    }

    if (value.HasMember("Cx") && !value["Cx"].IsNull())
    {
        if (!value["Cx"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Coordinate.Cx` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cx = value["Cx"].GetInt64();
        m_cxHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Coordinate.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Coordinate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_cyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cy, allocator);
    }

    if (m_cxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cx, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

}


int64_t Coordinate::GetWidth() const
{
    return m_width;
}

void Coordinate::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool Coordinate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t Coordinate::GetCy() const
{
    return m_cy;
}

void Coordinate::SetCy(const int64_t& _cy)
{
    m_cy = _cy;
    m_cyHasBeenSet = true;
}

bool Coordinate::CyHasBeenSet() const
{
    return m_cyHasBeenSet;
}

int64_t Coordinate::GetCx() const
{
    return m_cx;
}

void Coordinate::SetCx(const int64_t& _cx)
{
    m_cx = _cx;
    m_cxHasBeenSet = true;
}

bool Coordinate::CxHasBeenSet() const
{
    return m_cxHasBeenSet;
}

int64_t Coordinate::GetHeight() const
{
    return m_height;
}

void Coordinate::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool Coordinate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

