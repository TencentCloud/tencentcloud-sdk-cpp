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

#include <tencentcloud/redis/v20180412/model/InstanceEnumParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceEnumParam::InstanceEnumParam() :
    m_paramNameHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_tipsHasBeenSet(false),
    m_enumValueHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_featureSupportedHasBeenSet(false),
    m_newFeatureOnlineTimeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_inputDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome InstanceEnumParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.NeedRestart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = string(value["NeedRestart"].GetString());
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.Tips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tips = string(value["Tips"].GetString());
        m_tipsHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("FeatureSupported") && !value["FeatureSupported"].IsNull())
    {
        if (!value["FeatureSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.FeatureSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_featureSupported = value["FeatureSupported"].GetBool();
        m_featureSupportedHasBeenSet = true;
    }

    if (value.HasMember("NewFeatureOnlineTime") && !value["NewFeatureOnlineTime"].IsNull())
    {
        if (!value["NewFeatureOnlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.NewFeatureOnlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newFeatureOnlineTime = string(value["NewFeatureOnlineTime"].GetString());
        m_newFeatureOnlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("InputDescription") && !value["InputDescription"].IsNull())
    {
        if (!value["InputDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam.InputDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputDescription = string(value["InputDescription"].GetString());
        m_inputDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceEnumParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

    if (m_needRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_needRestart.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tips.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_featureSupported, allocator);
    }

    if (m_newFeatureOnlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFeatureOnlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newFeatureOnlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_inputDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputDescription.c_str(), allocator).Move(), allocator);
    }

}


string InstanceEnumParam::GetParamName() const
{
    return m_paramName;
}

void InstanceEnumParam::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool InstanceEnumParam::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string InstanceEnumParam::GetValueType() const
{
    return m_valueType;
}

void InstanceEnumParam::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool InstanceEnumParam::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string InstanceEnumParam::GetNeedRestart() const
{
    return m_needRestart;
}

void InstanceEnumParam::SetNeedRestart(const string& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool InstanceEnumParam::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

string InstanceEnumParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void InstanceEnumParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool InstanceEnumParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string InstanceEnumParam::GetCurrentValue() const
{
    return m_currentValue;
}

void InstanceEnumParam::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool InstanceEnumParam::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

string InstanceEnumParam::GetTips() const
{
    return m_tips;
}

void InstanceEnumParam::SetTips(const string& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool InstanceEnumParam::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

vector<string> InstanceEnumParam::GetEnumValue() const
{
    return m_enumValue;
}

void InstanceEnumParam::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool InstanceEnumParam::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}

int64_t InstanceEnumParam::GetStatus() const
{
    return m_status;
}

void InstanceEnumParam::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceEnumParam::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceEnumParam::GetParamType() const
{
    return m_paramType;
}

void InstanceEnumParam::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool InstanceEnumParam::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

bool InstanceEnumParam::GetFeatureSupported() const
{
    return m_featureSupported;
}

void InstanceEnumParam::SetFeatureSupported(const bool& _featureSupported)
{
    m_featureSupported = _featureSupported;
    m_featureSupportedHasBeenSet = true;
}

bool InstanceEnumParam::FeatureSupportedHasBeenSet() const
{
    return m_featureSupportedHasBeenSet;
}

string InstanceEnumParam::GetNewFeatureOnlineTime() const
{
    return m_newFeatureOnlineTime;
}

void InstanceEnumParam::SetNewFeatureOnlineTime(const string& _newFeatureOnlineTime)
{
    m_newFeatureOnlineTime = _newFeatureOnlineTime;
    m_newFeatureOnlineTimeHasBeenSet = true;
}

bool InstanceEnumParam::NewFeatureOnlineTimeHasBeenSet() const
{
    return m_newFeatureOnlineTimeHasBeenSet;
}

string InstanceEnumParam::GetPattern() const
{
    return m_pattern;
}

void InstanceEnumParam::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool InstanceEnumParam::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string InstanceEnumParam::GetInputDescription() const
{
    return m_inputDescription;
}

void InstanceEnumParam::SetInputDescription(const string& _inputDescription)
{
    m_inputDescription = _inputDescription;
    m_inputDescriptionHasBeenSet = true;
}

bool InstanceEnumParam::InputDescriptionHasBeenSet() const
{
    return m_inputDescriptionHasBeenSet;
}

