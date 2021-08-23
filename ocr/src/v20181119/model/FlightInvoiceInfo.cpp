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

#include <tencentcloud/ocr/v20181119/model/FlightInvoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

FlightInvoiceInfo::FlightInvoiceInfo() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_rowHasBeenSet(false)
{
}

CoreInternalOutcome FlightInvoiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightInvoiceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlightInvoiceInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Row") && !value["Row"].IsNull())
    {
        if (!value["Row"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlightInvoiceInfo.Row` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_row = value["Row"].GetInt64();
        m_rowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlightInvoiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_rowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Row";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_row, allocator);
    }

}


string FlightInvoiceInfo::GetName() const
{
    return m_name;
}

void FlightInvoiceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FlightInvoiceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FlightInvoiceInfo::GetValue() const
{
    return m_value;
}

void FlightInvoiceInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool FlightInvoiceInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t FlightInvoiceInfo::GetRow() const
{
    return m_row;
}

void FlightInvoiceInfo::SetRow(const int64_t& _row)
{
    m_row = _row;
    m_rowHasBeenSet = true;
}

bool FlightInvoiceInfo::RowHasBeenSet() const
{
    return m_rowHasBeenSet;
}

