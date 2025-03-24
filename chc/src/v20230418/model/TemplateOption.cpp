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

#include <tencentcloud/chc/v20230418/model/TemplateOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

TemplateOption::TemplateOption() :
    m_optionNameHasBeenSet(false),
    m_standardHasBeenSet(false),
    m_standardInfoHasBeenSet(false),
    m_optionKeyHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_compareTypeHasBeenSet(false),
    m_optionValueSetHasBeenSet(false),
    m_inputHintHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_optionValueHasBeenSet(false)
{
}

CoreInternalOutcome TemplateOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OptionName") && !value["OptionName"].IsNull())
    {
        if (!value["OptionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.OptionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionName = string(value["OptionName"].GetString());
        m_optionNameHasBeenSet = true;
    }

    if (value.HasMember("Standard") && !value["Standard"].IsNull())
    {
        if (!value["Standard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.Standard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standard = string(value["Standard"].GetString());
        m_standardHasBeenSet = true;
    }

    if (value.HasMember("StandardInfo") && !value["StandardInfo"].IsNull())
    {
        if (!value["StandardInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.StandardInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardInfo = string(value["StandardInfo"].GetString());
        m_standardInfoHasBeenSet = true;
    }

    if (value.HasMember("OptionKey") && !value["OptionKey"].IsNull())
    {
        if (!value["OptionKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.OptionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionKey = string(value["OptionKey"].GetString());
        m_optionKeyHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("CompareType") && !value["CompareType"].IsNull())
    {
        if (!value["CompareType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.CompareType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareType = string(value["CompareType"].GetString());
        m_compareTypeHasBeenSet = true;
    }

    if (value.HasMember("OptionValueSet") && !value["OptionValueSet"].IsNull())
    {
        if (!value["OptionValueSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateOption.OptionValueSet` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionValueSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OptionValueItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_optionValueSet.push_back(item);
        }
        m_optionValueSetHasBeenSet = true;
    }

    if (value.HasMember("InputHint") && !value["InputHint"].IsNull())
    {
        if (!value["InputHint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.InputHint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputHint = string(value["InputHint"].GetString());
        m_inputHintHasBeenSet = true;
    }

    if (value.HasMember("InputInfo") && !value["InputInfo"].IsNull())
    {
        if (!value["InputInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.InputInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputInfo = string(value["InputInfo"].GetString());
        m_inputInfoHasBeenSet = true;
    }

    if (value.HasMember("OptionValue") && !value["OptionValue"].IsNull())
    {
        if (!value["OptionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOption.OptionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionValue = string(value["OptionValue"].GetString());
        m_optionValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_optionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionName.c_str(), allocator).Move(), allocator);
    }

    if (m_standardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Standard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standard.c_str(), allocator).Move(), allocator);
    }

    if (m_standardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_optionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionKey.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

    if (m_compareTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareType.c_str(), allocator).Move(), allocator);
    }

    if (m_optionValueSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionValueSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_optionValueSet.begin(); itr != m_optionValueSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputHintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputHint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputHint.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_optionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionValue.c_str(), allocator).Move(), allocator);
    }

}


string TemplateOption::GetOptionName() const
{
    return m_optionName;
}

void TemplateOption::SetOptionName(const string& _optionName)
{
    m_optionName = _optionName;
    m_optionNameHasBeenSet = true;
}

bool TemplateOption::OptionNameHasBeenSet() const
{
    return m_optionNameHasBeenSet;
}

string TemplateOption::GetStandard() const
{
    return m_standard;
}

void TemplateOption::SetStandard(const string& _standard)
{
    m_standard = _standard;
    m_standardHasBeenSet = true;
}

bool TemplateOption::StandardHasBeenSet() const
{
    return m_standardHasBeenSet;
}

string TemplateOption::GetStandardInfo() const
{
    return m_standardInfo;
}

void TemplateOption::SetStandardInfo(const string& _standardInfo)
{
    m_standardInfo = _standardInfo;
    m_standardInfoHasBeenSet = true;
}

bool TemplateOption::StandardInfoHasBeenSet() const
{
    return m_standardInfoHasBeenSet;
}

string TemplateOption::GetOptionKey() const
{
    return m_optionKey;
}

void TemplateOption::SetOptionKey(const string& _optionKey)
{
    m_optionKey = _optionKey;
    m_optionKeyHasBeenSet = true;
}

bool TemplateOption::OptionKeyHasBeenSet() const
{
    return m_optionKeyHasBeenSet;
}

string TemplateOption::GetInputType() const
{
    return m_inputType;
}

void TemplateOption::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool TemplateOption::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string TemplateOption::GetValueType() const
{
    return m_valueType;
}

void TemplateOption::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool TemplateOption::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string TemplateOption::GetCompareType() const
{
    return m_compareType;
}

void TemplateOption::SetCompareType(const string& _compareType)
{
    m_compareType = _compareType;
    m_compareTypeHasBeenSet = true;
}

bool TemplateOption::CompareTypeHasBeenSet() const
{
    return m_compareTypeHasBeenSet;
}

vector<OptionValueItem> TemplateOption::GetOptionValueSet() const
{
    return m_optionValueSet;
}

void TemplateOption::SetOptionValueSet(const vector<OptionValueItem>& _optionValueSet)
{
    m_optionValueSet = _optionValueSet;
    m_optionValueSetHasBeenSet = true;
}

bool TemplateOption::OptionValueSetHasBeenSet() const
{
    return m_optionValueSetHasBeenSet;
}

string TemplateOption::GetInputHint() const
{
    return m_inputHint;
}

void TemplateOption::SetInputHint(const string& _inputHint)
{
    m_inputHint = _inputHint;
    m_inputHintHasBeenSet = true;
}

bool TemplateOption::InputHintHasBeenSet() const
{
    return m_inputHintHasBeenSet;
}

string TemplateOption::GetInputInfo() const
{
    return m_inputInfo;
}

void TemplateOption::SetInputInfo(const string& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool TemplateOption::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

string TemplateOption::GetOptionValue() const
{
    return m_optionValue;
}

void TemplateOption::SetOptionValue(const string& _optionValue)
{
    m_optionValue = _optionValue;
    m_optionValueHasBeenSet = true;
}

bool TemplateOption::OptionValueHasBeenSet() const
{
    return m_optionValueHasBeenSet;
}

