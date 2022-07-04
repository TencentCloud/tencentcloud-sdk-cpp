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

#include <tencentcloud/ie/v20200304/model/SpriteImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

SpriteImageInfo::SpriteImageInfo() :
    m_rowCountHasBeenSet(false),
    m_columnCountHasBeenSet(false),
    m_marginTopHasBeenSet(false),
    m_marginBottomHasBeenSet(false),
    m_marginLeftHasBeenSet(false),
    m_marginRightHasBeenSet(false),
    m_paddingTopHasBeenSet(false),
    m_paddingBottomHasBeenSet(false),
    m_paddingLeftHasBeenSet(false),
    m_paddingRightHasBeenSet(false),
    m_backgroundColorHasBeenSet(false)
{
}

CoreInternalOutcome SpriteImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RowCount") && !value["RowCount"].IsNull())
    {
        if (!value["RowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.RowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rowCount = value["RowCount"].GetUint64();
        m_rowCountHasBeenSet = true;
    }

    if (value.HasMember("ColumnCount") && !value["ColumnCount"].IsNull())
    {
        if (!value["ColumnCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.ColumnCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_columnCount = value["ColumnCount"].GetUint64();
        m_columnCountHasBeenSet = true;
    }

    if (value.HasMember("MarginTop") && !value["MarginTop"].IsNull())
    {
        if (!value["MarginTop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.MarginTop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_marginTop = value["MarginTop"].GetInt64();
        m_marginTopHasBeenSet = true;
    }

    if (value.HasMember("MarginBottom") && !value["MarginBottom"].IsNull())
    {
        if (!value["MarginBottom"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.MarginBottom` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_marginBottom = value["MarginBottom"].GetInt64();
        m_marginBottomHasBeenSet = true;
    }

    if (value.HasMember("MarginLeft") && !value["MarginLeft"].IsNull())
    {
        if (!value["MarginLeft"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.MarginLeft` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_marginLeft = value["MarginLeft"].GetInt64();
        m_marginLeftHasBeenSet = true;
    }

    if (value.HasMember("MarginRight") && !value["MarginRight"].IsNull())
    {
        if (!value["MarginRight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.MarginRight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_marginRight = value["MarginRight"].GetInt64();
        m_marginRightHasBeenSet = true;
    }

    if (value.HasMember("PaddingTop") && !value["PaddingTop"].IsNull())
    {
        if (!value["PaddingTop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.PaddingTop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paddingTop = value["PaddingTop"].GetInt64();
        m_paddingTopHasBeenSet = true;
    }

    if (value.HasMember("PaddingBottom") && !value["PaddingBottom"].IsNull())
    {
        if (!value["PaddingBottom"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.PaddingBottom` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paddingBottom = value["PaddingBottom"].GetInt64();
        m_paddingBottomHasBeenSet = true;
    }

    if (value.HasMember("PaddingLeft") && !value["PaddingLeft"].IsNull())
    {
        if (!value["PaddingLeft"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.PaddingLeft` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paddingLeft = value["PaddingLeft"].GetInt64();
        m_paddingLeftHasBeenSet = true;
    }

    if (value.HasMember("PaddingRight") && !value["PaddingRight"].IsNull())
    {
        if (!value["PaddingRight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.PaddingRight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paddingRight = value["PaddingRight"].GetInt64();
        m_paddingRightHasBeenSet = true;
    }

    if (value.HasMember("BackgroundColor") && !value["BackgroundColor"].IsNull())
    {
        if (!value["BackgroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpriteImageInfo.BackgroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = string(value["BackgroundColor"].GetString());
        m_backgroundColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpriteImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowCount, allocator);
    }

    if (m_columnCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnCount, allocator);
    }

    if (m_marginTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarginTop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marginTop, allocator);
    }

    if (m_marginBottomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarginBottom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marginBottom, allocator);
    }

    if (m_marginLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarginLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marginLeft, allocator);
    }

    if (m_marginRightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarginRight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marginRight, allocator);
    }

    if (m_paddingTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaddingTop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paddingTop, allocator);
    }

    if (m_paddingBottomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaddingBottom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paddingBottom, allocator);
    }

    if (m_paddingLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaddingLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paddingLeft, allocator);
    }

    if (m_paddingRightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaddingRight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paddingRight, allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundColor.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SpriteImageInfo::GetRowCount() const
{
    return m_rowCount;
}

void SpriteImageInfo::SetRowCount(const uint64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool SpriteImageInfo::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

uint64_t SpriteImageInfo::GetColumnCount() const
{
    return m_columnCount;
}

void SpriteImageInfo::SetColumnCount(const uint64_t& _columnCount)
{
    m_columnCount = _columnCount;
    m_columnCountHasBeenSet = true;
}

bool SpriteImageInfo::ColumnCountHasBeenSet() const
{
    return m_columnCountHasBeenSet;
}

int64_t SpriteImageInfo::GetMarginTop() const
{
    return m_marginTop;
}

void SpriteImageInfo::SetMarginTop(const int64_t& _marginTop)
{
    m_marginTop = _marginTop;
    m_marginTopHasBeenSet = true;
}

bool SpriteImageInfo::MarginTopHasBeenSet() const
{
    return m_marginTopHasBeenSet;
}

int64_t SpriteImageInfo::GetMarginBottom() const
{
    return m_marginBottom;
}

void SpriteImageInfo::SetMarginBottom(const int64_t& _marginBottom)
{
    m_marginBottom = _marginBottom;
    m_marginBottomHasBeenSet = true;
}

bool SpriteImageInfo::MarginBottomHasBeenSet() const
{
    return m_marginBottomHasBeenSet;
}

int64_t SpriteImageInfo::GetMarginLeft() const
{
    return m_marginLeft;
}

void SpriteImageInfo::SetMarginLeft(const int64_t& _marginLeft)
{
    m_marginLeft = _marginLeft;
    m_marginLeftHasBeenSet = true;
}

bool SpriteImageInfo::MarginLeftHasBeenSet() const
{
    return m_marginLeftHasBeenSet;
}

int64_t SpriteImageInfo::GetMarginRight() const
{
    return m_marginRight;
}

void SpriteImageInfo::SetMarginRight(const int64_t& _marginRight)
{
    m_marginRight = _marginRight;
    m_marginRightHasBeenSet = true;
}

bool SpriteImageInfo::MarginRightHasBeenSet() const
{
    return m_marginRightHasBeenSet;
}

int64_t SpriteImageInfo::GetPaddingTop() const
{
    return m_paddingTop;
}

void SpriteImageInfo::SetPaddingTop(const int64_t& _paddingTop)
{
    m_paddingTop = _paddingTop;
    m_paddingTopHasBeenSet = true;
}

bool SpriteImageInfo::PaddingTopHasBeenSet() const
{
    return m_paddingTopHasBeenSet;
}

int64_t SpriteImageInfo::GetPaddingBottom() const
{
    return m_paddingBottom;
}

void SpriteImageInfo::SetPaddingBottom(const int64_t& _paddingBottom)
{
    m_paddingBottom = _paddingBottom;
    m_paddingBottomHasBeenSet = true;
}

bool SpriteImageInfo::PaddingBottomHasBeenSet() const
{
    return m_paddingBottomHasBeenSet;
}

int64_t SpriteImageInfo::GetPaddingLeft() const
{
    return m_paddingLeft;
}

void SpriteImageInfo::SetPaddingLeft(const int64_t& _paddingLeft)
{
    m_paddingLeft = _paddingLeft;
    m_paddingLeftHasBeenSet = true;
}

bool SpriteImageInfo::PaddingLeftHasBeenSet() const
{
    return m_paddingLeftHasBeenSet;
}

int64_t SpriteImageInfo::GetPaddingRight() const
{
    return m_paddingRight;
}

void SpriteImageInfo::SetPaddingRight(const int64_t& _paddingRight)
{
    m_paddingRight = _paddingRight;
    m_paddingRightHasBeenSet = true;
}

bool SpriteImageInfo::PaddingRightHasBeenSet() const
{
    return m_paddingRightHasBeenSet;
}

string SpriteImageInfo::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void SpriteImageInfo::SetBackgroundColor(const string& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool SpriteImageInfo::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

