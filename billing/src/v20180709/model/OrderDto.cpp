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

#include <tencentcloud/billing/v20180709/model/OrderDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

OrderDto::OrderDto() :
    m_columnHasBeenSet(false),
    m_ascHasBeenSet(false)
{
}

CoreInternalOutcome OrderDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Column") && !value["Column"].IsNull())
    {
        if (!value["Column"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderDto.Column` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_column = string(value["Column"].GetString());
        m_columnHasBeenSet = true;
    }

    if (value.HasMember("Asc") && !value["Asc"].IsNull())
    {
        if (!value["Asc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OrderDto.Asc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asc = value["Asc"].GetBool();
        m_ascHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Column";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_column.c_str(), allocator).Move(), allocator);
    }

    if (m_ascHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asc, allocator);
    }

}


string OrderDto::GetColumn() const
{
    return m_column;
}

void OrderDto::SetColumn(const string& _column)
{
    m_column = _column;
    m_columnHasBeenSet = true;
}

bool OrderDto::ColumnHasBeenSet() const
{
    return m_columnHasBeenSet;
}

bool OrderDto::GetAsc() const
{
    return m_asc;
}

void OrderDto::SetAsc(const bool& _asc)
{
    m_asc = _asc;
    m_ascHasBeenSet = true;
}

bool OrderDto::AscHasBeenSet() const
{
    return m_ascHasBeenSet;
}

