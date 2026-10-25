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

#include <tencentcloud/rum/v20210622/model/DialDimensionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DialDimensionItem::DialDimensionItem() :
    m_valueHasBeenSet(false),
    m_executionCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_avgDurationHasBeenSet(false),
    m_avgLossHasBeenSet(false)
{
}

CoreInternalOutcome DialDimensionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialDimensionItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ExecutionCount") && !value["ExecutionCount"].IsNull())
    {
        if (!value["ExecutionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialDimensionItem.ExecutionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionCount = value["ExecutionCount"].GetInt64();
        m_executionCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialDimensionItem.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialDimensionItem.FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("AvgDuration") && !value["AvgDuration"].IsNull())
    {
        if (!value["AvgDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialDimensionItem.AvgDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgDuration = value["AvgDuration"].GetDouble();
        m_avgDurationHasBeenSet = true;
    }

    if (value.HasMember("AvgLoss") && !value["AvgLoss"].IsNull())
    {
        if (!value["AvgLoss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialDimensionItem.AvgLoss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgLoss = value["AvgLoss"].GetDouble();
        m_avgLossHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DialDimensionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_executionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_avgDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDuration, allocator);
    }

    if (m_avgLossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgLoss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgLoss, allocator);
    }

}


string DialDimensionItem::GetValue() const
{
    return m_value;
}

void DialDimensionItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DialDimensionItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t DialDimensionItem::GetExecutionCount() const
{
    return m_executionCount;
}

void DialDimensionItem::SetExecutionCount(const int64_t& _executionCount)
{
    m_executionCount = _executionCount;
    m_executionCountHasBeenSet = true;
}

bool DialDimensionItem::ExecutionCountHasBeenSet() const
{
    return m_executionCountHasBeenSet;
}

int64_t DialDimensionItem::GetSuccessCount() const
{
    return m_successCount;
}

void DialDimensionItem::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool DialDimensionItem::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t DialDimensionItem::GetFailCount() const
{
    return m_failCount;
}

void DialDimensionItem::SetFailCount(const int64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool DialDimensionItem::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

double DialDimensionItem::GetAvgDuration() const
{
    return m_avgDuration;
}

void DialDimensionItem::SetAvgDuration(const double& _avgDuration)
{
    m_avgDuration = _avgDuration;
    m_avgDurationHasBeenSet = true;
}

bool DialDimensionItem::AvgDurationHasBeenSet() const
{
    return m_avgDurationHasBeenSet;
}

double DialDimensionItem::GetAvgLoss() const
{
    return m_avgLoss;
}

void DialDimensionItem::SetAvgLoss(const double& _avgLoss)
{
    m_avgLoss = _avgLoss;
    m_avgLossHasBeenSet = true;
}

bool DialDimensionItem::AvgLossHasBeenSet() const
{
    return m_avgLossHasBeenSet;
}

