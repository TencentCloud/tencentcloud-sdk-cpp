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

#include <tencentcloud/wedata/v20250806/model/CompareQualityResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CompareQualityResultItem::CompareQualityResultItem() :
    m_fixResultHasBeenSet(false),
    m_resultValueHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_compareTypeHasBeenSet(false),
    m_valueComputeTypeHasBeenSet(false)
{
}

CoreInternalOutcome CompareQualityResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FixResult") && !value["FixResult"].IsNull())
    {
        if (!value["FixResult"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResultItem.FixResult` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixResult = value["FixResult"].GetUint64();
        m_fixResultHasBeenSet = true;
    }

    if (value.HasMember("ResultValue") && !value["ResultValue"].IsNull())
    {
        if (!value["ResultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResultItem.ResultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultValue = string(value["ResultValue"].GetString());
        m_resultValueHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareQualityResultItem.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityThresholdValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_values.push_back(item);
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResultItem.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("CompareType") && !value["CompareType"].IsNull())
    {
        if (!value["CompareType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResultItem.CompareType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_compareType = value["CompareType"].GetUint64();
        m_compareTypeHasBeenSet = true;
    }

    if (value.HasMember("ValueComputeType") && !value["ValueComputeType"].IsNull())
    {
        if (!value["ValueComputeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareQualityResultItem.ValueComputeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_valueComputeType = value["ValueComputeType"].GetUint64();
        m_valueComputeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareQualityResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fixResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixResult, allocator);
    }

    if (m_resultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_compareTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareType, allocator);
    }

    if (m_valueComputeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueComputeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueComputeType, allocator);
    }

}


uint64_t CompareQualityResultItem::GetFixResult() const
{
    return m_fixResult;
}

void CompareQualityResultItem::SetFixResult(const uint64_t& _fixResult)
{
    m_fixResult = _fixResult;
    m_fixResultHasBeenSet = true;
}

bool CompareQualityResultItem::FixResultHasBeenSet() const
{
    return m_fixResultHasBeenSet;
}

string CompareQualityResultItem::GetResultValue() const
{
    return m_resultValue;
}

void CompareQualityResultItem::SetResultValue(const string& _resultValue)
{
    m_resultValue = _resultValue;
    m_resultValueHasBeenSet = true;
}

bool CompareQualityResultItem::ResultValueHasBeenSet() const
{
    return m_resultValueHasBeenSet;
}

vector<QualityThresholdValue> CompareQualityResultItem::GetValues() const
{
    return m_values;
}

void CompareQualityResultItem::SetValues(const vector<QualityThresholdValue>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool CompareQualityResultItem::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

string CompareQualityResultItem::GetOperator() const
{
    return m_operator;
}

void CompareQualityResultItem::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CompareQualityResultItem::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t CompareQualityResultItem::GetCompareType() const
{
    return m_compareType;
}

void CompareQualityResultItem::SetCompareType(const uint64_t& _compareType)
{
    m_compareType = _compareType;
    m_compareTypeHasBeenSet = true;
}

bool CompareQualityResultItem::CompareTypeHasBeenSet() const
{
    return m_compareTypeHasBeenSet;
}

uint64_t CompareQualityResultItem::GetValueComputeType() const
{
    return m_valueComputeType;
}

void CompareQualityResultItem::SetValueComputeType(const uint64_t& _valueComputeType)
{
    m_valueComputeType = _valueComputeType;
    m_valueComputeTypeHasBeenSet = true;
}

bool CompareQualityResultItem::ValueComputeTypeHasBeenSet() const
{
    return m_valueComputeTypeHasBeenSet;
}

