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

#include <tencentcloud/mps/v20190612/model/SRTFECFullOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SRTFECFullOptions::SRTFECFullOptions() :
    m_enableHasBeenSet(false),
    m_colsHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_aRQHasBeenSet(false),
    m_layoutHasBeenSet(false)
{
}

CoreInternalOutcome SRTFECFullOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SRTFECFullOptions.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Cols") && !value["Cols"].IsNull())
    {
        if (!value["Cols"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SRTFECFullOptions.Cols` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cols = value["Cols"].GetInt64();
        m_colsHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SRTFECFullOptions.Rows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rows = value["Rows"].GetInt64();
        m_rowsHasBeenSet = true;
    }

    if (value.HasMember("ARQ") && !value["ARQ"].IsNull())
    {
        if (!value["ARQ"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SRTFECFullOptions.ARQ` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aRQ = string(value["ARQ"].GetString());
        m_aRQHasBeenSet = true;
    }

    if (value.HasMember("Layout") && !value["Layout"].IsNull())
    {
        if (!value["Layout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SRTFECFullOptions.Layout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layout = string(value["Layout"].GetString());
        m_layoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SRTFECFullOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_colsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cols, allocator);
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rows, allocator);
    }

    if (m_aRQHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ARQ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aRQ.c_str(), allocator).Move(), allocator);
    }

    if (m_layoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layout.c_str(), allocator).Move(), allocator);
    }

}


bool SRTFECFullOptions::GetEnable() const
{
    return m_enable;
}

void SRTFECFullOptions::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool SRTFECFullOptions::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t SRTFECFullOptions::GetCols() const
{
    return m_cols;
}

void SRTFECFullOptions::SetCols(const int64_t& _cols)
{
    m_cols = _cols;
    m_colsHasBeenSet = true;
}

bool SRTFECFullOptions::ColsHasBeenSet() const
{
    return m_colsHasBeenSet;
}

int64_t SRTFECFullOptions::GetRows() const
{
    return m_rows;
}

void SRTFECFullOptions::SetRows(const int64_t& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool SRTFECFullOptions::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

string SRTFECFullOptions::GetARQ() const
{
    return m_aRQ;
}

void SRTFECFullOptions::SetARQ(const string& _aRQ)
{
    m_aRQ = _aRQ;
    m_aRQHasBeenSet = true;
}

bool SRTFECFullOptions::ARQHasBeenSet() const
{
    return m_aRQHasBeenSet;
}

string SRTFECFullOptions::GetLayout() const
{
    return m_layout;
}

void SRTFECFullOptions::SetLayout(const string& _layout)
{
    m_layout = _layout;
    m_layoutHasBeenSet = true;
}

bool SRTFECFullOptions::LayoutHasBeenSet() const
{
    return m_layoutHasBeenSet;
}

