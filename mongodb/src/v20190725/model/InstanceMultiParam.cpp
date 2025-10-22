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

#include <tencentcloud/mongodb/v20190725/model/InstanceMultiParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

InstanceMultiParam::InstanceMultiParam() :
    m_currentValueHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_enumValueHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_paramNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tipsHasBeenSet(false),
    m_valueTypeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceMultiParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.NeedRestart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = string(value["NeedRestart"].GetString());
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.Tips` is not array type"));

        const rapidjson::Value &tmpValue = value["Tips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tips.push_back((*itr).GetString());
        }
        m_tipsHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceMultiParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValue.begin(); itr != m_enumValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_needRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needRestart.c_str(), allocator).Move(), allocator);
    }

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tips.begin(); itr != m_tips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

}


string InstanceMultiParam::GetCurrentValue() const
{
    return m_currentValue;
}

void InstanceMultiParam::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool InstanceMultiParam::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

string InstanceMultiParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void InstanceMultiParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool InstanceMultiParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

vector<string> InstanceMultiParam::GetEnumValue() const
{
    return m_enumValue;
}

void InstanceMultiParam::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool InstanceMultiParam::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}

string InstanceMultiParam::GetNeedRestart() const
{
    return m_needRestart;
}

void InstanceMultiParam::SetNeedRestart(const string& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool InstanceMultiParam::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

string InstanceMultiParam::GetParamName() const
{
    return m_paramName;
}

void InstanceMultiParam::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool InstanceMultiParam::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

uint64_t InstanceMultiParam::GetStatus() const
{
    return m_status;
}

void InstanceMultiParam::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceMultiParam::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> InstanceMultiParam::GetTips() const
{
    return m_tips;
}

void InstanceMultiParam::SetTips(const vector<string>& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool InstanceMultiParam::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

string InstanceMultiParam::GetValueType() const
{
    return m_valueType;
}

void InstanceMultiParam::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool InstanceMultiParam::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

