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

#include <tencentcloud/vpc/v20170312/model/TrafficFlow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TrafficFlow::TrafficFlow() :
    m_valueHasBeenSet(false),
    m_formatValueHasBeenSet(false),
    m_formatUnitHasBeenSet(false)
{
}

CoreInternalOutcome TrafficFlow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficFlow.Value` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetUint64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("FormatValue") && !value["FormatValue"].IsNull())
    {
        if (!value["FormatValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficFlow.FormatValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_formatValue = value["FormatValue"].GetDouble();
        m_formatValueHasBeenSet = true;
    }

    if (value.HasMember("FormatUnit") && !value["FormatUnit"].IsNull())
    {
        if (!value["FormatUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficFlow.FormatUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formatUnit = string(value["FormatUnit"].GetString());
        m_formatUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficFlow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_formatValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_formatValue, allocator);
    }

    if (m_formatUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formatUnit.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TrafficFlow::GetValue() const
{
    return m_value;
}

void TrafficFlow::SetValue(const uint64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TrafficFlow::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

double TrafficFlow::GetFormatValue() const
{
    return m_formatValue;
}

void TrafficFlow::SetFormatValue(const double& _formatValue)
{
    m_formatValue = _formatValue;
    m_formatValueHasBeenSet = true;
}

bool TrafficFlow::FormatValueHasBeenSet() const
{
    return m_formatValueHasBeenSet;
}

string TrafficFlow::GetFormatUnit() const
{
    return m_formatUnit;
}

void TrafficFlow::SetFormatUnit(const string& _formatUnit)
{
    m_formatUnit = _formatUnit;
    m_formatUnitHasBeenSet = true;
}

bool TrafficFlow::FormatUnitHasBeenSet() const
{
    return m_formatUnitHasBeenSet;
}

