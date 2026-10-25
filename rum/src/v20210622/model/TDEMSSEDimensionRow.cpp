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

#include <tencentcloud/rum/v20210622/model/TDEMSSEDimensionRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

TDEMSSEDimensionRow::TDEMSSEDimensionRow() :
    m_dimensionValueHasBeenSet(false),
    m_conversationCountHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome TDEMSSEDimensionRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DimensionValue") && !value["DimensionValue"].IsNull())
    {
        if (!value["DimensionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDimensionRow.DimensionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionValue = string(value["DimensionValue"].GetString());
        m_dimensionValueHasBeenSet = true;
    }

    if (value.HasMember("ConversationCount") && !value["ConversationCount"].IsNull())
    {
        if (!value["ConversationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDimensionRow.ConversationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_conversationCount = value["ConversationCount"].GetInt64();
        m_conversationCountHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TDEMSSEDimensionRow.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDEMSSEDimensionRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimensionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_conversationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conversationCount, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string TDEMSSEDimensionRow::GetDimensionValue() const
{
    return m_dimensionValue;
}

void TDEMSSEDimensionRow::SetDimensionValue(const string& _dimensionValue)
{
    m_dimensionValue = _dimensionValue;
    m_dimensionValueHasBeenSet = true;
}

bool TDEMSSEDimensionRow::DimensionValueHasBeenSet() const
{
    return m_dimensionValueHasBeenSet;
}

int64_t TDEMSSEDimensionRow::GetConversationCount() const
{
    return m_conversationCount;
}

void TDEMSSEDimensionRow::SetConversationCount(const int64_t& _conversationCount)
{
    m_conversationCount = _conversationCount;
    m_conversationCountHasBeenSet = true;
}

bool TDEMSSEDimensionRow::ConversationCountHasBeenSet() const
{
    return m_conversationCountHasBeenSet;
}

double TDEMSSEDimensionRow::GetValue() const
{
    return m_value;
}

void TDEMSSEDimensionRow::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TDEMSSEDimensionRow::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

