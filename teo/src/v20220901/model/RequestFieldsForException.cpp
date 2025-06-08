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

#include <tencentcloud/teo/v20220901/model/RequestFieldsForException.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RequestFieldsForException::RequestFieldsForException() :
    m_scopeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_targetFieldHasBeenSet(false)
{
}

CoreInternalOutcome RequestFieldsForException::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestFieldsForException.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestFieldsForException.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("TargetField") && !value["TargetField"].IsNull())
    {
        if (!value["TargetField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestFieldsForException.TargetField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetField = string(value["TargetField"].GetString());
        m_targetFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestFieldsForException::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_targetFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetField.c_str(), allocator).Move(), allocator);
    }

}


string RequestFieldsForException::GetScope() const
{
    return m_scope;
}

void RequestFieldsForException::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool RequestFieldsForException::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string RequestFieldsForException::GetCondition() const
{
    return m_condition;
}

void RequestFieldsForException::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool RequestFieldsForException::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string RequestFieldsForException::GetTargetField() const
{
    return m_targetField;
}

void RequestFieldsForException::SetTargetField(const string& _targetField)
{
    m_targetField = _targetField;
    m_targetFieldHasBeenSet = true;
}

bool RequestFieldsForException::TargetFieldHasBeenSet() const
{
    return m_targetFieldHasBeenSet;
}

