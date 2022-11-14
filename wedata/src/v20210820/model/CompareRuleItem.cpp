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

#include <tencentcloud/wedata/v20210820/model/CompareRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CompareRuleItem::CompareRuleItem() :
    m_compareTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valueComputeTypeHasBeenSet(false),
    m_valueListHasBeenSet(false)
{
}

CoreInternalOutcome CompareRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompareType") && !value["CompareType"].IsNull())
    {
        if (!value["CompareType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareRuleItem.CompareType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_compareType = value["CompareType"].GetUint64();
        m_compareTypeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareRuleItem.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("ValueComputeType") && !value["ValueComputeType"].IsNull())
    {
        if (!value["ValueComputeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareRuleItem.ValueComputeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_valueComputeType = value["ValueComputeType"].GetUint64();
        m_valueComputeTypeHasBeenSet = true;
    }

    if (value.HasMember("ValueList") && !value["ValueList"].IsNull())
    {
        if (!value["ValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompareRuleItem.ValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThresholdValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_valueList.push_back(item);
        }
        m_valueListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compareTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compareType, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_valueComputeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueComputeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueComputeType, allocator);
    }

    if (m_valueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_valueList.begin(); itr != m_valueList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CompareRuleItem::GetCompareType() const
{
    return m_compareType;
}

void CompareRuleItem::SetCompareType(const uint64_t& _compareType)
{
    m_compareType = _compareType;
    m_compareTypeHasBeenSet = true;
}

bool CompareRuleItem::CompareTypeHasBeenSet() const
{
    return m_compareTypeHasBeenSet;
}

string CompareRuleItem::GetOperator() const
{
    return m_operator;
}

void CompareRuleItem::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CompareRuleItem::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t CompareRuleItem::GetValueComputeType() const
{
    return m_valueComputeType;
}

void CompareRuleItem::SetValueComputeType(const uint64_t& _valueComputeType)
{
    m_valueComputeType = _valueComputeType;
    m_valueComputeTypeHasBeenSet = true;
}

bool CompareRuleItem::ValueComputeTypeHasBeenSet() const
{
    return m_valueComputeTypeHasBeenSet;
}

vector<ThresholdValue> CompareRuleItem::GetValueList() const
{
    return m_valueList;
}

void CompareRuleItem::SetValueList(const vector<ThresholdValue>& _valueList)
{
    m_valueList = _valueList;
    m_valueListHasBeenSet = true;
}

bool CompareRuleItem::ValueListHasBeenSet() const
{
    return m_valueListHasBeenSet;
}

