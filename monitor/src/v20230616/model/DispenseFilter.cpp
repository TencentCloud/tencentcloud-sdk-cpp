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

#include <tencentcloud/monitor/v20230616/model/DispenseFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DispenseFilter::DispenseFilter() :
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

CoreInternalOutcome DispenseFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseFilter.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DispenseFilter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("Expression") && !value["Expression"].IsNull())
    {
        if (!value["Expression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispenseFilter.Expression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expression = string(value["Expression"].GetString());
        m_expressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DispenseFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expression.c_str(), allocator).Move(), allocator);
    }

}


string DispenseFilter::GetKey() const
{
    return m_key;
}

void DispenseFilter::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DispenseFilter::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<string> DispenseFilter::GetValues() const
{
    return m_values;
}

void DispenseFilter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool DispenseFilter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

string DispenseFilter::GetExpression() const
{
    return m_expression;
}

void DispenseFilter::SetExpression(const string& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool DispenseFilter::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

