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

#include <tencentcloud/cynosdb/v20190107/model/ParamItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ParamItemInfo::ParamItemInfo() :
    m_paramNameHasBeenSet(false),
    m_newValueHasBeenSet(false),
    m_oldValueHasBeenSet(false),
    m_valueFunctionHasBeenSet(false)
{
}

CoreInternalOutcome ParamItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItemInfo.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("NewValue") && !value["NewValue"].IsNull())
    {
        if (!value["NewValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItemInfo.NewValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newValue = string(value["NewValue"].GetString());
        m_newValueHasBeenSet = true;
    }

    if (value.HasMember("OldValue") && !value["OldValue"].IsNull())
    {
        if (!value["OldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItemInfo.OldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldValue = string(value["OldValue"].GetString());
        m_oldValueHasBeenSet = true;
    }

    if (value.HasMember("ValueFunction") && !value["ValueFunction"].IsNull())
    {
        if (!value["ValueFunction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItemInfo.ValueFunction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueFunction = string(value["ValueFunction"].GetString());
        m_valueFunctionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_newValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newValue.c_str(), allocator).Move(), allocator);
    }

    if (m_oldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldValue.c_str(), allocator).Move(), allocator);
    }

    if (m_valueFunctionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueFunction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueFunction.c_str(), allocator).Move(), allocator);
    }

}


string ParamItemInfo::GetParamName() const
{
    return m_paramName;
}

void ParamItemInfo::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool ParamItemInfo::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string ParamItemInfo::GetNewValue() const
{
    return m_newValue;
}

void ParamItemInfo::SetNewValue(const string& _newValue)
{
    m_newValue = _newValue;
    m_newValueHasBeenSet = true;
}

bool ParamItemInfo::NewValueHasBeenSet() const
{
    return m_newValueHasBeenSet;
}

string ParamItemInfo::GetOldValue() const
{
    return m_oldValue;
}

void ParamItemInfo::SetOldValue(const string& _oldValue)
{
    m_oldValue = _oldValue;
    m_oldValueHasBeenSet = true;
}

bool ParamItemInfo::OldValueHasBeenSet() const
{
    return m_oldValueHasBeenSet;
}

string ParamItemInfo::GetValueFunction() const
{
    return m_valueFunction;
}

void ParamItemInfo::SetValueFunction(const string& _valueFunction)
{
    m_valueFunction = _valueFunction;
    m_valueFunctionHasBeenSet = true;
}

bool ParamItemInfo::ValueFunctionHasBeenSet() const
{
    return m_valueFunctionHasBeenSet;
}

