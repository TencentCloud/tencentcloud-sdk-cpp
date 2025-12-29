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

#include <tencentcloud/dlc/v20210125/model/SortOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SortOrder::SortOrder() :
    m_columnHasBeenSet(false),
    m_sortDirectionHasBeenSet(false),
    m_nullOrderHasBeenSet(false)
{
}

CoreInternalOutcome SortOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Column") && !value["Column"].IsNull())
    {
        if (!value["Column"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SortOrder.Column` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_column = string(value["Column"].GetString());
        m_columnHasBeenSet = true;
    }

    if (value.HasMember("SortDirection") && !value["SortDirection"].IsNull())
    {
        if (!value["SortDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SortOrder.SortDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortDirection = string(value["SortDirection"].GetString());
        m_sortDirectionHasBeenSet = true;
    }

    if (value.HasMember("NullOrder") && !value["NullOrder"].IsNull())
    {
        if (!value["NullOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SortOrder.NullOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nullOrder = string(value["NullOrder"].GetString());
        m_nullOrderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SortOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Column";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_column.c_str(), allocator).Move(), allocator);
    }

    if (m_sortDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_nullOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NullOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nullOrder.c_str(), allocator).Move(), allocator);
    }

}


string SortOrder::GetColumn() const
{
    return m_column;
}

void SortOrder::SetColumn(const string& _column)
{
    m_column = _column;
    m_columnHasBeenSet = true;
}

bool SortOrder::ColumnHasBeenSet() const
{
    return m_columnHasBeenSet;
}

string SortOrder::GetSortDirection() const
{
    return m_sortDirection;
}

void SortOrder::SetSortDirection(const string& _sortDirection)
{
    m_sortDirection = _sortDirection;
    m_sortDirectionHasBeenSet = true;
}

bool SortOrder::SortDirectionHasBeenSet() const
{
    return m_sortDirectionHasBeenSet;
}

string SortOrder::GetNullOrder() const
{
    return m_nullOrder;
}

void SortOrder::SetNullOrder(const string& _nullOrder)
{
    m_nullOrder = _nullOrder;
    m_nullOrderHasBeenSet = true;
}

bool SortOrder::NullOrderHasBeenSet() const
{
    return m_nullOrderHasBeenSet;
}

