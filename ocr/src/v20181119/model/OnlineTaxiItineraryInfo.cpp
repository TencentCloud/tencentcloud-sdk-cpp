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

#include <tencentcloud/ocr/v20181119/model/OnlineTaxiItineraryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

OnlineTaxiItineraryInfo::OnlineTaxiItineraryInfo() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_rowHasBeenSet(false)
{
}

CoreInternalOutcome OnlineTaxiItineraryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineTaxiItineraryInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineTaxiItineraryInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Row") && !value["Row"].IsNull())
    {
        if (!value["Row"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineTaxiItineraryInfo.Row` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_row = value["Row"].GetInt64();
        m_rowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OnlineTaxiItineraryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string OnlineTaxiItineraryInfo::GetName() const
{
    return m_name;
}

void OnlineTaxiItineraryInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OnlineTaxiItineraryInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OnlineTaxiItineraryInfo::GetValue() const
{
    return m_value;
}

void OnlineTaxiItineraryInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OnlineTaxiItineraryInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t OnlineTaxiItineraryInfo::GetRow() const
{
    return m_row;
}

void OnlineTaxiItineraryInfo::SetRow(const int64_t& _row)
{
    m_row = _row;
    m_rowHasBeenSet = true;
}

bool OnlineTaxiItineraryInfo::RowHasBeenSet() const
{
    return m_rowHasBeenSet;
}

