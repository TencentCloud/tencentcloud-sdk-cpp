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

#include <tencentcloud/ioa/v20220601/model/Filter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

Filter::Filter() :
    m_fieldHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome Filter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Filter.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Filter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
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

}


string Filter::GetField() const
{
    return m_field;
}

void Filter::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool Filter::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string Filter::GetOperator() const
{
    return m_operator;
}

void Filter::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool Filter::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> Filter::GetValues() const
{
    return m_values;
}

void Filter::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool Filter::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

