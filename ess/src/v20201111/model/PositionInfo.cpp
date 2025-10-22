/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ess/v20201111/model/PositionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

PositionInfo::PositionInfo() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome PositionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.X` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetDouble();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.Y` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetDouble();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.Width` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetDouble();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.Height` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetDouble();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("PageIndex") && !value["PageIndex"].IsNull())
    {
        if (!value["PageIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.PageIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageIndex = value["PageIndex"].GetInt64();
        m_pageIndexHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PositionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


double PositionInfo::GetX() const
{
    return m_x;
}

void PositionInfo::SetX(const double& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool PositionInfo::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

double PositionInfo::GetY() const
{
    return m_y;
}

void PositionInfo::SetY(const double& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool PositionInfo::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

double PositionInfo::GetWidth() const
{
    return m_width;
}

void PositionInfo::SetWidth(const double& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool PositionInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

double PositionInfo::GetHeight() const
{
    return m_height;
}

void PositionInfo::SetHeight(const double& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool PositionInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t PositionInfo::GetPageIndex() const
{
    return m_pageIndex;
}

void PositionInfo::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool PositionInfo::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

string PositionInfo::GetId() const
{
    return m_id;
}

void PositionInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PositionInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

