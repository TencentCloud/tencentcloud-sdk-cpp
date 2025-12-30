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
    m_idHasBeenSet(false),
    m_beginHasBeenSet(false),
    m_endHasBeenSet(false),
    m_docTypeHasBeenSet(false)
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

    if (value.HasMember("Begin") && !value["Begin"].IsNull())
    {
        if (!value["Begin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.Begin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_begin = value["Begin"].GetInt64();
        m_beginHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.End` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetInt64();
        m_endHasBeenSet = true;
    }

    if (value.HasMember("DocType") && !value["DocType"].IsNull())
    {
        if (!value["DocType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionInfo.DocType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_docType = value["DocType"].GetInt64();
        m_docTypeHasBeenSet = true;
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

    if (m_beginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Begin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_begin, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

    if (m_docTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docType, allocator);
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

int64_t PositionInfo::GetBegin() const
{
    return m_begin;
}

void PositionInfo::SetBegin(const int64_t& _begin)
{
    m_begin = _begin;
    m_beginHasBeenSet = true;
}

bool PositionInfo::BeginHasBeenSet() const
{
    return m_beginHasBeenSet;
}

int64_t PositionInfo::GetEnd() const
{
    return m_end;
}

void PositionInfo::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool PositionInfo::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

int64_t PositionInfo::GetDocType() const
{
    return m_docType;
}

void PositionInfo::SetDocType(const int64_t& _docType)
{
    m_docType = _docType;
    m_docTypeHasBeenSet = true;
}

bool PositionInfo::DocTypeHasBeenSet() const
{
    return m_docTypeHasBeenSet;
}

